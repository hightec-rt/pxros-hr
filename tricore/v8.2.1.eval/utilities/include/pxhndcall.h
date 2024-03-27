/*******************************************************************************
 *
 *  Project:        PXROS-HR Utilities
 *  Component:      PxHndcall Interface
 *
 *******************************************************************************
 *
 *  This header specifies the PxHndcall Interface usable for C/C++.
 *
 *******************************************************************************
 *
 *  Copyright HighTec EDV-Systeme GmbH 2020
 *
 ******************************************************************************/
/*
 * SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#ifndef __PXU_HNDCALL_H__
#define __PXU_HNDCALL_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/******************************* User Interface *******************************/

/*
 * Calling a variadic function in supervisor mode
 */
extern int _PxHndcallVA(int (*f)(void *), ... );

/*
 * Calling a function with a one pointer argument in supervisor mode
 */
#define _PxHndcallPTR(f, ptr)   \
    _PxHndcallPTR_F((int (*)(void *))(f), (void *)(ptr) )


/************************* Internally Used Functions  *************************/

/*
 * Helper function to pass the handler function and its arguments (referenced by
 * pointer) to the kernel for calling the function in supervisor mode
 */
extern int _PxHndcallPTR_F(int (*f)(void *), void *p );


/************* Mapping the Existing _PxHndcall to This Interface **************/

/*
 * Disable the default _PxHndcall from pxdef.h
 * to use this modified one supporting C/C++ interfaces
 */
#undef _PxHndcall

/*
 * Calling a variadic function in supervisor mode using the default _PxHndcall
 * interface
 * Note: The parameters TaskId and argument size are unused on TriCore(TM)
 */
#define _PxHndcall(f, t, sz, args... )  \
    _PxHndcallVA((int (*)(void *))(f), ## args )

/* Calling a function with one pointer argument in supervisor mode
 * using the default _PxHndcall interface
 * Note: The parameters TaskId and argument size are unused on TriCore(TM)
 */
#define _PxHndcallS(f, t, sz, ptr)      \
    _PxHndcallPTR_F((int (*)(void *))(f), (void *)(ptr) )


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __PXU_HNDCALL_H__ */
