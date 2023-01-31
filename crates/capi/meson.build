r2 = static_library(
    'rustc-demangle-capi',
    'src/lib.rs',
    rust_crate_type: 'staticlib',
    link_whole: r1,
    install: true,
    objects: r1.extract_all_objects(recursive: true),
)
install_headers('include/rustc_demangle.h')
