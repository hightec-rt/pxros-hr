/*******************************************************************************
 *
 *  Project:        PXROS-HR Utilities
 *  Component:      Name Server
 *
 *******************************************************************************
 *
 *  This header specifies the Name Server API.
 *  Names are IDs composed of 4 parts from the range 0..254.
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

#ifndef __PXNAME_H__
#define __PXNAME_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef union
{
    unsigned char part[4];
    unsigned int id;
} PxNameId_t;

PxTask_t  PxNamesrvInit(PxPrio_t srvprio, PxMemAligned_t *membase, PxSize_t memsize);
PxError_t PxNameQuery(PxNameId_t, PxSize_t, void *, PxSize_t *);
PxError_t PxNameRegister(PxNameId_t, PxSize_t, void const *);
PxError_t PxNameReRegister(PxNameId_t, PxSize_t, void const *);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __PXNAME_H__ */
