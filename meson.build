project('rustc-demangle', 'c', 'rust', version: '0.1.21')

rustc_demangle = static_library(
    'rustc_demangle',
    'src/lib.rs',
    rust_crate_type: 'rlib',
)
subdir('crates/capi')

rustc_demangle_dep = declare_dependency(
    include_directories: include_directories('crates/capi/include'),
    link_with: rustc_demangle_capi,
    link_args: ['-Wl,--gc-sections'],
)
pkgconfig = import('pkgconfig')
pkgconfig.generate(rustc_demangle_capi)

subdir('tests')

