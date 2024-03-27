//! Generates the environment '.env' and 'src/wrapper.h'
//!
//! SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
//! 
//! SPDX-License-Identifier: Apache-2.0
//! 
use std::env;
use std::path::PathBuf;
use std::io::Write;
use std::ffi::OsString;
use std::fs::read_dir;
use std::io::ErrorKind;


fn main() {

 for (n,v) in std::env::vars() {
        println!("{}: {}", n,v);
    }

    let src = PathBuf::from(std::env::var("CARGO_MANIFEST_DIR").unwrap());
    let pxroot = src.join("tricore/v8.2.1.eval/kernel");
    let incl = pxroot.join("include");
    let pxutil = src.join("tricore/v8.2.1.eval/utilities");
    let pxuincl = pxutil.join("include");

    println!("cargo:rerun-if-changed=build.rs");

    match  env::current_exe() {
        Ok(p) => println!("EXE-DIR={:?}", p),
        Err(e) => println!("Error {:?}", e)
    }
    match  env::current_dir() {
        Ok(p) => println!("RUN-DIR={:?}", p),
        Err(e) => println!("Error {:?}", e)
    }
    let wrapper = src.join("src/wrapper.h");
    let mut w = std::fs::File::create(wrapper).expect("Couldn't create wrapper.h");
    writeln!(&mut w, "#define __TC162__").expect("write to wrapper.h failed");
    writeln!(&mut w, "#include \"{}/pxdef.h\"", incl.to_str().unwrap()).expect("write to wrapper.h failed");
    writeln!(&mut w, "#include \"{}/pxname.h\"", pxuincl.to_str().unwrap()).expect("write to wrapper.h failed");
    writeln!(&mut w, "#include \"{}/pxhndcall.h\"", pxuincl.to_str().unwrap()).expect("write to wrapper.h failed");
    writeln!(&mut w, "#include \"{}/pxinfo.h\"", incl.to_str().unwrap()).expect("write to wrapper.h failed");
    _ = w.flush();

    let root = get_project_root().expect("No Project Root found");
    let envfile = root.join(".env");
    let mut file = std::fs::File::create(envfile).expect("Couldn't create some.txt");
    writeln!(&mut file, "export PXROS_ROOT_PATH={}", pxroot.to_str().unwrap()).expect("write to .env failed");
    writeln!(&mut file, "export PXROS_UTILS={}", pxutil.to_str().unwrap()).expect("write to .env failed");
    _ = file.flush();

}


/// Get the project root (relative to closest Cargo.lock file)
/// ```rust
/// match get_project_root() {
///     Ok(p) => println!("Current project root is {:?}", p),
///     Err(e) => println!("Error obtaining project root {:?}", e)
/// };
/// ```
pub fn get_project_root() -> std::io::Result<PathBuf> {
    let exe = env::current_exe()?;
    let path = exe.as_path().parent().unwrap();
    let mut path_ancestors = path.ancestors();


    while let Some(p) = path_ancestors.next() {
        println!("DIR: {}", p.to_str().unwrap());
        let has_cargo =
            read_dir(p)?
                .into_iter()
                .any(|p| p.unwrap().file_name() == OsString::from("Cargo.toml"));
        if has_cargo {
            return Ok(PathBuf::from(p))
        }
    }
    Err(std::io::Error::new(ErrorKind::NotFound, "Ran out of places to find Cargo.toml"))
}
