package(default_visibility = ["//visibility:public"])

platform(
    name = "aarch64",
    constraint_values = [
        "@platforms//cpu:aarch64",
    ],
)

platform(
    name = "wasm32",
    constraint_values = [
        "@platforms//cpu:wasm32",
    ],
)

filegroup(
    name = "cargo_workspace",
    srcs = [
        "Cargo.lock",
        "Cargo.toml",
        "//my-app:Cargo.toml",
        "//puddlejumper:Cargo.toml",
        "//tree-sitter-puddlejumper:Cargo.toml",
    ],
)
