r2 = static_library(
    'rustc-demangle-capi',
    'src/lib.rs',
    rust_crate_type: 'staticlib',
    link_with: r1,
    link_whole: r1,
    #rust_args: ['-L dependency=' + meson.build_root()]
)
