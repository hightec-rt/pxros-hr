//!
//! SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
//!
//! SPDX-License-Identifier: Apache-2.0
//!

/// PXROS v8.2.1.eval header.h contents.
pub const TRI_8_2_1_EVAL_WRAPPER: &str = "#define __TC162__\n\
    #include \"pxdef.h\"\n\
    #include \"pxname.h\"\n\
    #include \"pxhndcall.h\"\n\
    #include \"pxinfo.h\"\n
    ";

/// PXROS v8.2.1.eval root/kernel directory.
pub const TRI_8_2_1_EVAL_KERNEL: &str = env!("TRI_8_2_1_EVAL_KERNEL");
/// PXROS v8.2.1.eval root/kernel includes directory.
pub const TRI_8_2_1_EVAL_KERNEL_INCL: &str = env!("TRI_8_2_1_EVAL_KERNEL_INCL");
/// PXROS v8.2.1.eval utils directory.
pub const TRI_8_2_1_EVAL_UTILS: &str = env!("TRI_8_2_1_EVAL_UTILS");
/// PXROS v8.2.1.eval utils include directory.
pub const TRI_8_2_1_EVAL_UTILS_INCL: &str = env!("TRI_8_2_1_EVAL_UTILS_INCL");
/// PXROS v8.2.1.eval API documentation directory.
pub const TRI_8_2_1_EVAL_API_SRC: &str = env!("TRI_8_2_1_EVAL_API_SRC");
