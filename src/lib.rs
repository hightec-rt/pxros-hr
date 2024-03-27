//!
//! SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
//! 
//! SPDX-License-Identifier: Apache-2.0
//! 
use std::include_str;

// Provide wrapper header for the use by other crates
// wrapper.h will use absolute paths to the API header
pub const WRAPPER: &'static str = include_str!("wrapper.h");