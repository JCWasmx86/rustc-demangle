project('rustc-demangle', 'c', 'rust')

r1 = static_library(
    'rustc-demangle1',
    'src/lib.rs',
    rust_crate_type: 'rlib',
    install: true,
)
subdir('crates/capi')

dep = declare_dependency(
    include_directories: include_directories('crates/capi/include'),
    link_with: r2,
)
subdir('tests')
