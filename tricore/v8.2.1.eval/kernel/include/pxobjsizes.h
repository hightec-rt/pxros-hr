/*************************************************************************
 *
 *  Project:            PXROS HR
 *  Function:           Meta include header for architecture-specific
 *                      pxobjsizes header
 *
 *************************************************************************/
/*************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

/* 
 * @(#)  PXROS-HR Kernel v8.2.1.eval HighTec EDV-Systeme GmbH 
 * @(#)  Revision:  dc7dfc829592d884 
 * @(#)  AURIX TC3xx, TriCore TC1.6.2 
 * @(#)  Enabled Features: TRICORE MONITOR_TASKS MONITOR_OBJECTS SAFE_LISTS TRACE EVALUATION_VERSION 
 */
/*
 * SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __PXOBJSIZES_H_META__
#define __PXOBJSIZES_H_META__

#if defined(__TC161__)
#   include "pxobjsizes-tc161.h"
#elif defined(__TC162__)
#   include "pxobjsizes-tc162.h"
#else
#   error "TriCore architecture missing!"
#endif

#endif /*__PXOBJSIZES_H_META__ */
