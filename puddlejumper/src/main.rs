use puddlejumper;
use std::env;
use std::fs;
use std::io::{Error, ErrorKind};

fn print_usage() {
    println!("Usage: cargo run -- [debug_print | parse | print_prioritized] <file_path>");
}

fn main() {
    // Retrieve the file path from command-line arguments
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        print_usage();
        return;
    }

    let command: &str = args[1].as_str();
    let file_path: &str = &args[2].as_str();

    if file_path == "" {
        print_usage();
        return;
    }

    // Read the contents of the file
    let code = match fs::read_to_string(file_path) {
        Ok(contents) => contents,
        Err(error) => {
            println!("Error reading file: {}", error);
            return;
        }
    };

    // Parse and print the code
    let p = puddlejumper::parser::Parser::new(code, tree_sitter_puddlejumper::language());
    match command {
        "debug_print" => {
            let result = p.debug_print(&mut std::io::stdout());
            match result {
                Ok(_) => (),
                Err(error) => {
                    println!("Error debug printing file: {}", error);
                    return;
                }
            }
        }
        "parse" => {
            let mut ctx = puddlejumper::node::Context::new();
            let result = ctx.load_document(&p);
            match result {
                Some(_node) => {
                    for (id, node) in ctx.arena.iter() {
                        println!("{:?}:\n{:?}", id.index(), node);
                        ctx.metadata.get(&id).map(|metadata| {
                            println!("  {:?}", metadata);
                        });
                    }
                    return;
                }
                None => {
                    println!("Error parsing file");
                    return;
                }
            }
        }
        "print_prioritized" => {
            let mut ctx = puddlejumper::node::Context::new();
            let result = ctx
                .load_document(&p)
                .ok_or(Error::new(ErrorKind::Other, "Error parsing file"))
                .and_then(|node| {
                    let list = ctx.make_prioritized_list(node);
                    return ctx.pretty_print(
                        list,
                        &mut puddlejumper::node::printer::PrintContext {
                            level: 0,
                            needs_indent: true,
                            out: &mut std::io::stdout(),
                        },
                    );
                });
            match result {
                Ok(_) => (),
                Err(error) => {
                    println!("Error printing file: {}", error);
                    return;
                }
            }
        }
        _ => {
            print_usage();
            return;
        }
    }
}
