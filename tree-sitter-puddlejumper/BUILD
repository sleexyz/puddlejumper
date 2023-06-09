load("//:rules_hybrid/defs.bzl", "hybrid_step", "hybrid_test")
load("//:cargo.bzl", "cargo_build_env", "cargo_with_tree_sitter_features")

package(default_visibility = ["//visibility:public"])

exports_files([
    "Cargo.toml",
])

hybrid_step(
    name = "npm_install",
    srcs = [
        "package.json",
        "package-lock.json",
    ],
    cmd = "npm install",
    workspace_symlinks = [
        "node_modules",
    ],
)

hybrid_step(
    name = "generate",
    srcs = [
        "grammar.js",
        "src/scanner.cc",
    ],
    workspace_symlinks = [
        "src/parser.c",
        "src/node-types.json",
        "src/grammar.json",
        "src/tree_sitter",
    ],
    cmd = "tree-sitter generate",
    deps = [
        ":npm_install",
        "//:cargo_workspace",
    ],
)

hybrid_test(
    name = "grammar_test",
    srcs = glob([
        "test/**/*",
    ]),
    cmd = "tree-sitter test",
    env_inherit = [
        "NIX_LDFLAGS",
        "NIX_CC_WRAPPER_TARGET_HOST_aarch64_apple_darwin",
    ],
    deps = [":generate"],
)

hybrid_step(
    name = "build",
    srcs = glob([
        "bindings/**/*",
    ]) + [
        "binding.gyp",
        "package.json",
        "package-lock.json",
    ],
    outs = [
        ".",
        "$CARGO_TARGET_DIR",
    ],
    cmd = cargo_with_tree_sitter_features("build"),
    env = cargo_build_env,
    deps = [
        ":generate",
        "//:cargo_workspace",
    ],
)

hybrid_test(
    name = "test",
    cmd = cargo_with_tree_sitter_features("test"),
    env = cargo_build_env,
    deps = [":build"],
)
