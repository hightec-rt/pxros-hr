//! Provides the directory locations as environment variables for the library.
//!
//! SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
//!
//! SPDX-License-Identifier: Apache-2.0
//!
use std::path::PathBuf;

fn main() {
    let src = PathBuf::from(std::env::var("CARGO_MANIFEST_DIR").unwrap());
    let px_root = src.join("tricore/v8.2.1.eval/kernel");
    let px_root_incl = px_root.join("include");
    let px_utils = src.join("tricore/v8.2.1.eval/utilities");
    let px_utils_incl = px_utils.join("include");
    let api_src = src.join("api-src");

    println!(
        "cargo:rustc-env=TRI_8_2_1_EVAL_KERNEL={}",
        px_root.to_str().unwrap()
    );
    println!(
        "cargo:rustc-env=TRI_8_2_1_EVAL_KERNEL_INCL={}",
        px_root_incl.to_str().unwrap()
    );
    println!(
        "cargo:rustc-env=TRI_8_2_1_EVAL_UTILS={}",
        px_utils.to_str().unwrap()
    );
    println!(
        "cargo:rustc-env=TRI_8_2_1_EVAL_UTILS_INCL={}",
        px_utils_incl.to_str().unwrap()
    );
    println!(
        "cargo:rustc-env=TRI_8_2_1_EVAL_API_SRC={}",
        api_src.to_str().unwrap()
    );
    println!("cargo:rerun-if-changed=build.rs");
}
