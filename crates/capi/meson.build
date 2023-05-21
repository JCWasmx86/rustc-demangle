rustc_demangle_capi = static_library(
    'rustc-demangle-capi',
    'src/lib.rs',
    rust_crate_type: 'staticlib',
    link_whole: rustc_demangle,
    install: true,
    objects: rustc_demangle.extract_all_objects(recursive: true),
)
install_headers('include/rustc_demangle.h')

