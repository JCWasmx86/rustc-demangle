#!/usr/bin/env bash
cargo build -p rustc-demangle-capi --release
cp $1/target/release/librustc_demangle.a $2
