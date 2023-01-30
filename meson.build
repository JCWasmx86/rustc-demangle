project('rustc-demangle', 'c', 'rust')

r1 = static_library(
    'rustc-demangle1',
    'src/lib.rs',
    rust_crate_type: 'rlib',
    install: true,
)
subdir('crates/capi')
#r2 = static_library('rustc-demangle-capi',
#                    'crates/capi/src/lib.rs',
#                    rust_crate_type: 'staticlib',
#                    link_with: r1,
#                    link_whole: r1
#)
#gen_target = custom_target(
#    'cargo-build',
#    build_by_default: true,
#    build_always_stale: true,
#    command: ['cargo.sh', '@SOURCE_ROOT@', '@BUILD_ROOT@'],
#    output: ['librustc_demangle.a'],
#    install: true,
#    install_dir: get_option('libdir'),
#)

dep = declare_dependency(
    include_directories: include_directories('crates/capi/include'),
    link_with: r2,
    #    link_args: gen_target[0].full_path(),
    #    sources: [gen_target],
)
subdir('tests')
