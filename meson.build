project('rustc-demangle', 'c', 'rust', version: '0.1.21')

r1 = static_library(
    'rustc_demangle',
    'src/lib.rs',
    rust_crate_type: 'rlib',
    install: true,
)
subdir('crates/capi')

dep = declare_dependency(
    include_directories: include_directories('crates/capi/include'),
    link_with: r2,
)
pkgconfig = import('pkgconfig')
pkgconfig.generate(r2)

subdir('tests')
