/*************************************************************************
 *
 *  Project:            PXROS HR
 *  Function:           Include header for pxros object sizes
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

#ifndef _PXOBJSIZES_H_
#define _PXOBJSIZES_H_

#define PXOBJ_SIZE	64
#define PXTASK_SIZE	288
#define PXMCFIXBLK_OVERHEAD	PXMEM_ADJUST(24+PXALLOC_SECURITY_PAD)

#endif /* _PXOBJSIZES_H_ */

