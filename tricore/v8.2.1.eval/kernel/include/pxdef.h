/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		PXROS Object Description
 *
 *************************************************************************/

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

/*************************************************************************/
#ifndef __pxdef__
#define __pxdef__

/*************************************************************************
 *
 *	Standard PXROS Definitions
 *	(to be included in all PXROS application modules)
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/
#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

/*******************************************************************************
 *
 *  _PXWORD_SIZE   modifier for enumeration types to indicate a 32-bit type.
 *
 ******************************************************************************/
#define _PXWORD_SIZE    __attribute__ ((mode(__word__)))


/*******************************************************************************
********************************************************************************
PXROS Generation Options

*/






/*******************************************************************************
********************************************************************************
PXROS Error Codes

*/


/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		Error codes
 *
 *************************************************************************
 *
 *	Error information is collected in "gen/PxErrnos.g"; "errgen" in this
 *	directory is used to extract the error codes into "Chdr/_pxerrnos.h".
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

#ifndef __pxerrors__
#define __pxerrors__

typedef enum
{



 




#define	_PXWarning	0
#define	_PXLogError	1
#define	_PXError	2
#define	_PXFatal	3

/* 	0 */	PXERR_NOERROR	/*"no error occured"*/,
/* 1 */	PXERR_TIMESLOTLIST_OVERFLOW	/*"*TIME*"*/,

/* 2 */	PXERR_ABORTSTACK_OVERFLOW	/*"Abortstack overflow"*/,
/* 3 */	PXERR_ABORT_ILLEGAL_CALL	/*"PxExpectAbort: corrupted call chain in task %d"*/,
/* 4 */	PXERR_DELAY_ILLDELAY	/*"Invalid delay object `%d'"*/,
/* 5 */	PXERR_DELAY_USED_BY_INTERRUPT	/*"Delay object %d currently in use by interrupt handler"*/,
/* 6 */	PXERR_DLQU_ILLELEM	/*"Invalid doubly linked queue element `%p'"*/,
/* 7 */	PXERR_DLQU_ILLQUEUE	/*"Invalid doubly linked queue `%p'"*/,
/* 8 */	PXERR_EVENT_ZERO	/*"Event must not be zero"*/,
/* 9 */	PXERR_GENID_NOT_INITED	/*"`PxGenidObtain' called without previous `PxGenidInit'"*/,
/* 10 */	PXERR_INIT_ILLALIGN	/*"Invalid memory block or size alignment in initialization `%p' `%d'"*/,
/* 11 */	PXERR_INIT_ILLMCTYPE	/*"Type `%d' for PXMcSystemdefault is different from PXMcVarsized and PXMcVarsizedAdjusted"*/,
/* 12 */	PXERR_INIT_NOMEM	/*"Not enough memory for initialization"*/,
/* 13 */	PXERR_ILL_NULLPOINTER_PARAMETER	/*"illegal nullpointer parameter in call"*/,
/* 14 */	PXERR_INIT_SEGBOUNDARY	/*"Block `%p[%x]' crosses segment boundary"*/,
/* 15 */	PXERR_INTERRUPT_ILLINTERRUPT	/*"Invalid interrupt object `%d'"*/,
/* 16 */	PXERR_INTERRUPT_USED_BY_INTERRUPT	/*"Interrupt object %d currently in use by interrupt handler"*/,
/* 17 */	PXERR_INTR_ILL	/*"Only the installing task may override its installed interrupt handlers"*/,
/* 18 */	PXERR_MBX_HNDINSTALLED	/*"Mailbox handler already installed"*/,
/* 19 */	PXERR_MBX_ILLMBX	/*"Invalid maibox `%d' in mailbox command"*/,
/* 20 */	PXERR_MBX_ILLMODE	/*"Invalid mailbox handler mode `%d'"*/,
/* 21 */	PXERR_MBX_LEFTMESSAGES	/*"Mailbox delete failed: messages left in mailbox"*/,
/* 22 */	PXERR_MBX_PRIVMBXDELETE	/*"Mailbox delete failed: private mailbox"*/,
/* 23 */	PXERR_MBX_TASKWAITS	/*"Mailbox delete failed: task(s) waiting at mailbox"*/,
/* 24 */	PXERR_MC_ILLALIGN	/*"Invalid memory block or size alignment in memory insert `%p' `%d'"*/,
/* 25 */	PXERR_MC_ILLMC	/*"Invalid memory class `%d' in memory class operation"*/,
/* 26 */	PXERR_MC_ILLSIZE	/*"Insufficient block size `%d < %d'"*/,
/* 27 */	PXERR_MC_ILLTYPE	/*"Invalid memory class type `%d'"*/,
/* 28 */	PXERR_MC_INCONSISTENCY	/*"Inconsistency in memory class `%d': blk `%p'"*/,
/* 29 */	PXERR_MC_NOMEM	/*"Insufficient memory to satisfy request"*/,
/* 30 */	PXERR_MC_NOTEMPTY	/*"Memory class delete failed: not empty"*/,
/* 31 */	PXERR_MC_SIZETOOBIG	/*"Fixed block size to small to satisfy request `%d < %d'"*/,
/* 32 */	PXERR_MC_SEGBOUNDARY	/*"Block `%p[%x]' crosses segment boundary"*/,
/* 33 */	PXERR_MC_DAMAGED_BLOCK	/*"Block %p in memory class %d has been damaged"*/,
/* 34 */	PXERR_MC_USE_BUDDY_FOR_MSG_ONLY	/*"Use Buddy memory classes for messages only!"*/,
/* 35 */	PXERR_MC_NOT_ALLOCATED	/*"Task has not allocated the memory block %p"*/,
/* 36 */	PXERR_MC_NOT_ALLOCATED_FROM	/*"Task has not allocated the memory block %p from class %d"*/,
/* 37 */	PXERR_MSG_ABORTED	/*"Message command aborted"*/,
/* 38 */	PXERR_MSG_ILLMSG	/*"Invalid message `%d'"*/,
/* 39 */	PXERR_MSG_ILLOWNER	/*"Invalid message owner `%d'"*/,
/* 40 */	PXERR_MSG_ILLSIZE	/*"Message size would exceed buffer size"*/,
/* 41 */	PXERR_MSG_ILLUSER	/*"Invalid user `%d' for message `%d'"*/,
/* 42 */	PXERR_MSG_NOMSG	/*"Insufficient memory to satisfy message request"*/,
/* 43 */	PXERR_MSG_NOT_IMPLEMENTED	/*"request not implemented"*/,
/* 44 */	PXERR_MSG_RELMBX_INSTALLED	/*"release mailbox already installed"*/,
/* 45 */	PXERR_MSG_NOT_CLOSED	/*"message was not closed before open"*/,
/* 46 */	PXERR_MSG_ILL_NEW_DATA	/*"Illegal new message data pointer"*/,
/* 47 */	PXERR_MSG_ILL_ALIGN	/*"Illegal aligned data pointer for PxMsgEnvelop"*/,
/* 48 */	PXERR_MSG_ILL_SIZE	/*"Illegal data size for PxMsgEnvelop"*/,
/* 49 */	PXERR_OBJ_ABORTED	/*"Object command aborted"*/,
/* 50 */	PXERR_OBJ_ILLOBJ	/*"Invalid object `%d'"*/,
/* 51 */	PXERR_OBJ_NOOBJ	/*"No object available to satisfy request"*/,
/* 52 */	PXERR_OPOOL_ILLCAPACITY	/*"Insufficient capacity in source object pool"*/,
/* 53 */	PXERR_OPOOL_ILLDELETE	/*"Object pool delete failed: no superior object pool"*/,
/* 54 */	PXERR_OPOOL_ILLOPOOL	/*"Invalid object pool `%d'"*/,
/* 55 */	PXERR_OPOOL_ILLSRC	/*"Source of a real object pool must be real"*/,
/* 56 */	PXERR_OPOOL_ILLTYPE	/*"Invalid object pool type"*/,
/* 57 */	PXERR_OPOOL_TASKWAITS	/*"Object pool delete failed: task(s) waiting at object pool"*/,
/* 58 */	PXERR_PE_ILLPE	/*"Perodic: invalid reference to a periodic object"*/,
/* 59 */	PXERR_PXHND_ILLCALL	/*"PXROS handler service called by task or interrupt handler"*/,
/* 60 */	PXERR_SELF_ABORTED	/*"Request aborted"*/,
/* 61 */	PXERR_TASK_RETURNS	/*"Task %d returns without `PxExit'"*/,
/* 62 */	PXERR_TASK_DYING_WHILE_IN_USE	/*"Dying task still in use"*/,
/* 63 */	PXERR_TASK_DIESRV_INITIALIZED	/*"Exitserver already initialized"*/,
/* 64 */	PXERR_TASK_DIESRV_NOT_INITED	/*"Exitserver not yet initialized"*/,
/* 65 */	PXERR_TASK_ILLCALL	/*"Task service called by handler"*/,
/* 66 */	PXERR_TASK_ILLPRIO	/*"Invalid priority `%d >= %d'"*/,
/* 67 */	PXERR_TASK_ILLRDYFUN	/*"Invalid ready function detected"*/,
/* 68 */	PXERR_TASK_ILLSTACKSPECTYPE	/*"Invalid stack type `%d'"*/,
/* 69 */	PXERR_TASK_ILLTASK	/*"Invalid task `%d'"*/,
/* 70 */	PXERR_TASK_SCHEDEXT_NOT_CONFIGURED	/*"Task extensions not configured in this PXROS version"*/,
/* 71 */	PXERR_TASK_STACKOVERFLOW	/*"Stack overflow for task `%d'"*/,
/* 72 */	PXERR_TASK_STACKUNKNOWN	/*"Stack begin could not be determined: specify stack size"*/,
/* 73 */	PXERR_TASK_STKMEM	/*"Insufficient memory to allocate task stack"*/,
/* 74 */	PXERR_TASK_TCBMEM	/*"Insufficient memory to allocate task control block"*/,
/* 75 */	PXERR_TASK_ILLPRIV	/*"Illegal privilege for tasks"*/,
/* 76 */	PXERR_TASK_STACK_SEGBOUNDARY	/*"Task stack `%p[%x]' crosses segment boundary"*/,
/* 77 */	PXERR_TASK_STACK_ILLALIGN	/*"Invalid task stack alignment `%p[%x]'"*/,
/* 78 */	PXERR_TASK_ILLREGION	/*"The task requires memory protection regions that are not a subset of its parent"*/,
/* 79 */	PXERR_TO_ILLTO	/*"Timeout: invalid reference to a timeout object"*/,
/* 80 */	PXERR_TRACE_ILLCTRL	/*"Invalid trace control"*/,

/* 81 */	PXERR_NAME_UNDEFINED	/*"Nameserver: name not defined"*/,
/* 82 */	PXERR_NAME_BUFOVERFLOW	/*"Nameserver: information buffer too small"*/,
/* 83 */	PXERR_NAME_DEFINED	/*"Nameserver: name already defined -- use `PxNameRedefine'"*/,
/* 84 */	PXERR_NAME_MEM	/*"Nameserver: memory shortage"*/,
/* 85 */	PXERR_NAME_ILL_REQUEST	/*"Nameserver: illegal nameserver request"*/,
/* 86 */	PXERR_NAME_NOT_INITIALIZED	/*"Nameserver: not yet initialized"*/,

/* 87 */	PXERR_MSGREL_INITED	/*"MsgRelServer: already initialized"*/,
/* 88 */	PXERR_MSGREL_NOT_INITED	/*"MsgRelServer: not yet initialized"*/,

/* 89 */	PXERR_MEMORY_SHORTAGE	/*"Memory shortage"*/,
/* 90 */	PXERR_OBJECT_SHORTAGE	/*"Object shortage"*/,
/* 91 */	PXERR_RESOURCE_SHORTAGE	/*"Resource shortage"*/,
/* 92 */	PXERR_CONNECTION_FAILED	/*"Connection failed"*/,
/* 93 */	PXERR_COMMUNICATION_FAILED	/*"Communication failed"*/,
/* 94 */	PXERR_REQUEST_FAILED	/*"Request failed"*/,
/* 95 */	PXERR_REQUEST_ILLEGAL	/*"Request illegal"*/,
/* 96 */	PXERR_REQUEST_INVALID	/*"Request invalid"*/,
/* 97 */	PXERR_REQUEST_INVALID_PARAMETER	/*"Request with invalid parameter"*/,
/* 98 */	PXERR_REQUEST_INVALID_CONTEXT	/*"Request in invalid context"*/,
/* 99 */	PXERR_REQUEST_CONFIGURATION_LIMITATION	/*"Request exceeds some configuration limitation"*/,
/* 100 */	PXERR_REQUEST_IMPLEMENTATION_RESTRICTION	/*"Request violates some implementation restriction"*/,
/* 101 */	PXERR_REQUEST_TIMEOUT	/*"Request timed out"*/,
/* 102 */	PXERR_REQUEST_ABORTED	/*"Request aborted"*/,
/* 103 */	PXERR_REQUEST_CANCELED	/*"Request canceled"*/,
/* 104 */	PXERR_SERVICE_NOT_CONFIGURED	/*"Service %d has not been configured into your PXROS"*/,
/* 105 */	PXERR_ILLEGAL_SERVICE_CALLED	/*"Service %d is not defined in PXROS"*/,
/* 106 */	PXERR_PROT_NOFREE_ENTRY	/*"no free protection entry"*/,
/* 107 */	PXERR_PROT_ILL_HANDLE	/*"illegal protection handle %d"*/,
/* 108 */	PXERR_PROT_ILL_REGION	/*"illegal protection region definition"*/,
/* 109 */	PXERR_PROT_PERMISSION	/*"Tried to set a protection without permission"*/,
/* 110 */	PXERR_ILLEGAL_ACCESS	/*"Access through parameter pointer %p in size %d is illegal"*/,
/* 111 */	PXERR_ACCESS_RIGHT	/*"No access right for this service"*/,
/* 112 */	PXERR_SYSJOBLIST_INCONSISTENCY	/*"Inconsistency in the system job list"*/,
/* 113 */	PXERR_GLOBAL_SYSJOBLIST_INCONSISTENCY	/*"Inconsistency in the global system job list"*/,
/* 114 */	PXERR_GLOBAL_MSG_RELMBX_NOT_INSTALLED	/*"release mailbox for global messages not installed"*/,
/* 115 */	PXERR_GLOBAL_ILLEGAL_CORE	/*"access illegal core"*/,
/* 116 */	PXERR_GLOBAL_OBJLIST_INCONSISTENCY	/*"Inconsistency between local and global object list initialization"*/,
/* 117 */	PXERR_INTERNAL_INCONSISTENCY	/*"Inconsistency of internal structures"*/,


    PXERR_LAST_ERRNO, PXERR_ERROR_SIZE = 0x1000
} _PXWORD_SIZE PxError_t;   // ensure 32-bit size

typedef enum
{
    PXWarning = _PXWarning, PXLogError = _PXLogError, PXError = _PXError, PXFatal = _PXFatal
} PxMessageClass_t;

#endif /* __pxerrors__ */






/*******************************************************************************
********************************************************************************
Basic PXROS types

*/



#ifndef __pxtypes_p_h__
#define __pxtypes_p_h__



/*******************************************************************************
 Base Types

 */

typedef unsigned char PxUChar_t;
typedef signed char PxChar_t;
typedef unsigned short PxUShort_t;
typedef short PxShort_t;
typedef unsigned int PxUInt_t;
typedef int PxInt_t;
typedef unsigned long PxULong_t;
typedef long PxLong_t;

typedef long long PxInt64_t;
typedef unsigned long long PxUInt64_t;
typedef PxLong_t PxInt32_t;
typedef PxULong_t PxUInt32_t;
typedef PxShort_t PxInt16_t;
typedef PxUShort_t PxUInt16_t;
typedef PxChar_t PxInt8_t;
typedef PxUChar_t PxUInt8_t;

#if defined __bool_true_false_are_defined
#undef bool
#undef true
#undef false
#endif


#if defined(__cplusplus)
typedef bool PxBool_t;
#else
typedef PxUInt_t PxBool_t;
#define true    1
#define false   0
#endif

typedef PxUShort_t PxGenid_t;



#define PXCOREID_SHIFT      12
#define PXCOREID_MASK       7
//!defines the type of a core ID
typedef PxUChar_t PxCoreId_t;

//!defines the type of the index into the Object array
typedef PxUShort_t PxObjId_t;

//!basic user type for objects

typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxObj_t;

typedef PxULong_t PxEvents_t;

typedef struct
{
    PxEvents_t events;
    PxError_t error;
} PxEventsOrError_t;

//!Return an object and/or events from a system call
/*
typedef struct
{
    PxObj_t     obj;
    PxEvents_t  events;
} PxObjEvent_t;
*/

#define _PXIllegalObjId ((PxObjId_t)0x8000)

/*!define access functions to the various object id's
 this macro should be used in every public object header to
 generate the type specific access function
 */
/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdIsValid return TRUE if !OBJ! holds a valid !OBJ! handle

 \synopsis int Px!OBJ!IdIsValid(Px!OBJ!_t !OBJ!);

 \param !OBJ! a !OBJ! handle

 \return TRUE if !OBJ! is a valid !OBJ! handle
 */

/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdInvalidate return an invalid !OBJ! handle for initialization

 \synopsis Px!OBJ!_t Px!OBJ!IdInvalidate(void);

 \return an invalid !OBJ! handle
 */

/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdSet return an object handle which holds id as the object ID

 \synopsis Px!OBJ!_t Px!OBJ!IdSet(PxObjId_t id);

 \param id the object id

 \return !OBJ! handle
 */

/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdGet return the object ID of the object handle !OBJ!

 \synopsis PxObjId_t Px!OBJ!IdGet(Px!OBJ!_t !OBJ!);

 \param !OBJ! a !OBJ! handle

 \return object ID of the object handle !OBJ!
 */

/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdError return the last error of the object handle !OBJ!

 \synopsis PxError_t Px!OBJ!IdError(Px!OBJ!_t !OBJ!);

 \param !OBJ! a !OBJ! handle

 \return the last error of the object handle !OBJ!
 */

/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdResetError reset the last error of the object handle !OBJ!

 \synopsis PxError_t Px!OBJ!IdResetError(Px!OBJ!_t *!OBJ!);

 \param !OBJ! pointer to the !OBJ! handle

 \return the last error of the object handle !OBJ!
 */

/*! replace !OBJ! Delay Msg Mc Opool Task To Pe Mbx Interrupt

 \brief Px!OBJ!IdErrorSet set the error of the object handle !OBJ!

 \synopsis void Px!OBJ!IdErrorSet(Px!OBJ!_t *!OBJ!, PxError_t error);

 \param *!OBJ! pointer to the !OBJ! handle
 */

#define __PXOBJ_ACCESS_FUNCTION(type) 								\
__attribute__ ((always_inline)) static inline int P ## type ## IdIsValid(P##type##_t obj) 	\
{	return !((PxShort_t)(obj.id) <= 0);}		\
												\
__attribute__ ((always_inline)) static inline P##type##_t P##type##IdInvalidate(void)  		\
{	return (P##type##_t){_PXIllegalObjId,PXERR_NOERROR}; }   									\
												\
__attribute__ ((always_inline)) static inline P##type##_t P##type##IdSet(PxObjId_t id) 		\
{	return (P##type##_t){id,PXERR_NOERROR}; }   									\
												\
__attribute__ ((always_inline)) static inline PxObjId_t P##type##IdGet(P##type##_t obj) 	\
{	return obj.id;}								\
												\
												\
__attribute__ ((always_inline)) static inline PxError_t P##type##IdError(P##type##_t obj) 	\
{ 	return obj.error;}							\
												\
__attribute__ ((always_inline)) static inline void P##type##IdErrorSet(P##type##_t *obj,PxError_t err) 	\
{ 	obj->error = err; } 						\
												\
__attribute__ ((always_inline)) static inline PxError_t P##type##IdResetError(P##type##_t *obj) 	\
{ 												\
	PxError_t err = obj->error; 				\
	obj->error = PXERR_NOERROR;					\
	return err; 								\
} \
__attribute__ ((always_inline)) static inline P##type##_t P##type##Id(PxObjId_t id,PxError_t err) \
{    return (P##type##_t){id,err}; } \
__attribute__ ((always_inline)) static inline PxCoreId_t P##type##CoreId(P##type##_t obj) \
{	return (PxInt_t)((obj.id>>PXCOREID_SHIFT) & PXCOREID_MASK);}

/*******************************************************************************
 Globally Storable References (Gsrefs)
 sometimes it is necessary to incorporate references to local data
 into messages sent across processor boundaries to be returned lateron
 and to (quickly) access the local data.
 PXROS version 4 provides two mechanisms for this purpose:
 a more elementary (and more efficient one) --- Globally Storable References
 and a more comfortable one --- Protected References.
 Both mechanisms must cope with the problem that the references may
 be no longer valid (e.g. because the local processor has been reset).
 Both use version numbers to detect such cases.

 Globally Storable References consist of two parts, a (local) reference and
 a generation id. The current implementation uses 16 bit version numbers
 (of type "PxGenid_t") and a reference (of type "PxOpaque_t") of up to 48 bit.
 Maybe, that future processor architectures will force us some day
 to allow even longer references.
 */

#define PXGsrefSize	8		/* bytes */

typedef struct
{
    PxUChar_t gi_gsref[PXGsrefSize];
} PxGsref_T, *PxGsref_t;

/*
 "PXGsref(gsref,ref,genid)" stores "(PxOpaque_t) ref" and "(PxGenid_t) genid"
 in the Globaly Storable Reference "*gsref"
 */
#define PXGsrefInit(gsref,ref,genid)			\
do {							\
 	PXGsrefRef(gsref)	= (ref);		\
 	PXGsrefGenid(gsref)	= (genid);		\
} while(0)

/*
 "PXGsrefClear(gsref) (fully) clears and (invalidates) the Gsref
 "*gsref"
 */
#define PXGsrefClear(gsref)					\
{								\
 	PxBzero((PxUChar_t *)gsref,(PxSize_t) sizeof(*gsref));	\
}

/* the reference part of "(PxGsref_t) gsref" */
#define PXGsrefRef(gsref)						\
	(* (PxOpaque_t *) &(gsref)->gi_gsref[0])

/* the version part of "(PxGsref_t) gsref" */
#define PXGsrefGenid(gsref)						\
	(* (PxGenid_t *) &(gsref)->gi_gsref[PXGsrefSize-sizeof(PxGenid_t)])

/***************************************************************************
 Processor dependent type definitions

 */



#ifndef __pxtypes_p_hp
#define __pxtypes_p_hp

/***************************************************************************
 The type of memory blocks used by PXROS internally (e.q. memory management,
 stacks ...)

 On some machines (those which are unable to address unaligned words/
 double words) memory blocks of this type must be aligned.
 But also for other machines alignment is usually better.
 */

typedef PxULong_t PxAligned_t;
#if defined(__TC161__) || defined(__TC162__)
#define PXMEM_ALIGN     8
#define PXMEM_TYPE      PxUInt64_t
#else /* other architecture */
#error "non supported TriCore architecture"
#endif /* __TC161__ || __TC162__ */

#define PXMEM_ALIGN_MASK    ((PXMEM_ALIGN) - 1)
#define PXMEM_ADJUST(size)  (((size) + (PXMEM_ALIGN) - 1) & ~(PXMEM_ALIGN_MASK))
#define PXMEM_ALIGNED       __attribute__((aligned(PXMEM_ALIGN)))
typedef PXMEM_TYPE PXMEM_ALIGNED PxMemAligned_t;

/* The stack must be 8-byte aligned on tricore */
#define PXSTACK_ALIGN     8
#define PXSTACK_ALIGN_MASK    ((PXSTACK_ALIGN) - 1)
#define PXSTACK_ADJUST(size)  (((size) + (PXSTACK_ALIGN) - 1) & ~(PXSTACK_ALIGN_MASK))
#define PXSTACK_ALIGNED       __attribute__((aligned(PXSTACK_ALIGN)))
typedef PxUInt64_t PXSTACK_ALIGNED PxStackAligned_t;

#define PXMAXUINT         ((PxUInt_t) 0xFFFFFFFF)

/******************************************************************************
 Opaque argument type
 can hold a "PxLong_t" and a pointer!

 To obtain fully portable code you should always use explicite casts
 for parameters of this type!
 */

typedef PxLong_t PxArg_t;
typedef void *PxOpaque_t;

/******************************************************************************
 Type of Sizes

 can be "PxUInt_t" or "PxULong_t";

 To obtain fully portable code you should always use explicite casts
 for parameters of this type!
 */

typedef PxUInt_t PxSize_t;

/*******************************************************************************
 Global PXROS Types
 With version 4 PXROS supports interprocessor communication on a low
 (and supposedly efficient) level. This implies that some data structures
 are interpreted on different processors with possibly different type
 representations.
 PXROS version 4 therefore defines Global Types, i.e. types with
 a fixed processor independent representation and processor dependent
 macros to convert between the global and local representation.

 Global representation uses 2's complement to realized integers,
 less significant bytes occupy lower adresses, less significant
 bits in a byte are to the right of the byte. I.E. the global
 representation uses INTEL-format.
 The global representation defines sizes for the various types.
 This solves the problem for base types.

 For structures the problem is not yet solved satisfactorily, because
 different compilers may have different alignment strategies.
 Inside PXROS, data structures interpreted on different processors
 avoid types other than "PxGlbULong_t", substructures are
 enlarged artificially to 8 byte boundaries, if necessary.
 Although not fully satisfactory, this is supposed to work on
 a wide range of processors.

 The current PXROS implementation REQUIRES (for both local and
 global structures) that structure components are NOT reordered
 by the compiler (Never use a compiler doing this to
 save space under the restriction of alignment requirement).
 */

typedef PxULong_t   PxGlbULong_t;   /* 4 bytes */
typedef PxLong_t    PxGlbLong_t;    /* 4 bytes */
typedef PxUShort_t  PxGlbUShort_t;  /* 2 bytes */
typedef PxShort_t   PxGlbShort_t;   /* 2 bytes */
typedef PxUChar_t   PxGlbUChar_t;   /* 1 byte */
typedef PxChar_t    PxGlbChar_t;    /* 1 byte */

/* conversion macros */

#define PXGlbLong(local)	(local)
#define PXGlbULong		PXGlbLong
#define PXGlbShort		PXGlbLong
#define PXGlbUShort		PXGlbLong
#define PXGlbChar		PXGlbLong
#define PXGlbUChar		PXGlbLong

#define PXLocLong(global)	(global)
#define PXLocULong		PXLocLong
#define PXLocShort		PXLocLong
#define PXLocUShort		PXLocLong
#define PXLocChar		PXLocLong
#define PXLocUChar		PXLocLong

/* type used to implement flags */
typedef PxUInt_t PxFlag_t;

typedef PxUChar_t *PxDataAddr_t;

/******************************************************************************
 CSA structure necessary to access trap context

 */

/* CSFR, PCXI, Previous Context Information Register */
typedef union
{ /* 32 bits */
    struct
    {
        unsigned int PCXO   : 16;   /* [ 0:15] previous context offset */
        unsigned int PCXS   :  4;   /* [16:19] PCX segment address */
        unsigned int UL     :  1;   /* [20:20] UPPER/LOWER context 0 = lower */
        unsigned int PIE    :  1;   /* [21:21] previous interrupt enabled */
        unsigned int PCPN   :  8;   /* [22:29] previous CPU priority number */
        unsigned int _res0  :  2;   /* [30:31] reserved */
    } bits;
    unsigned long reg;
} __attribute__((aligned(4))) PxPCXI_t;

/* structure for upper and lower context blocks */
/* valid for architectures TCV1.2 up to TCV1.6.1 */

/* upper CSA */
typedef struct
{
    PxPCXI_t PCXI;      /* < link word */
    unsigned int PSW;   /* < program status word */
    unsigned int A10;   /* < SP */
    unsigned int A11;   /* < return address */
    unsigned int D8;
    unsigned int D9;
    unsigned int D10;
    unsigned int D11;
    unsigned int A12;
    unsigned int A13;
    unsigned int A14;
    unsigned int A15;
    unsigned int D12;
    unsigned int D13;
    unsigned int D14;
    unsigned int D15;
} TC_CSA_UPPER_T;

/* lower CSA */
typedef struct
{
    PxPCXI_t PCXI;      /* < link word */
    unsigned int PC;    /* < saved PC */
    unsigned int A2;
    unsigned int A3;
    unsigned int D0;
    unsigned int D1;
    unsigned int D2;
    unsigned int D3;
    unsigned int A4;
    unsigned int A5;
    unsigned int A6;
    unsigned int A7;
    unsigned int D4;
    unsigned int D5;
    unsigned int D6;
    unsigned int D7;
} TC_CSA_LOWER_T;

/* CSA block */
typedef union
{
    TC_CSA_UPPER_T upper;   /* < upper CSA block */
    TC_CSA_LOWER_T lower;   /* < lower CSA block */
} TC_CSA_t;

/******************************************************************************/
//! get the absolute pointer to the csa
static inline __attribute__((always_inline)) TC_CSA_t *CSA2PTR(PxPCXI_t csa)
{
    TC_CSA_t *pcsa;
    __asm__ volatile (
            "sha.h	%0, %1, 12\n\t" // shift segment into bit 28-31
            "insert	%0, %0, %1, 6,16" // move offset into bits 0-22
            : "=&d" (pcsa) : "d" (csa) );
    return pcsa;
}

#endif /* __pxtypes_pub_hp */


/* to disable unused warnings */
#define ATTRIBUTE_UNUSED    __attribute__ ((unused))
#define ARG_UNUSED          ATTRIBUTE_UNUSED

/*
 enumeration of PXROS service calls
 */
typedef enum
{
    SV_SERVICE = 1,
    SV_HNDCALL,
    SV_BRKACT
} PxSvc_t;

__PXOBJ_ACCESS_FUNCTION(xObj)

#endif /* __pxtypes_p_h__ */




/*******************************************************************************
********************************************************************************
Processor Characteristics

*/



#ifndef __pxproc_p__
#define __pxproc_p__


/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		Processor characteristics (for TriCore)  --- public part
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

#ifndef __pxproc_p_hp__
#define __pxproc_p_hp__

/*******************************************************************************
 Processor identification

 */
#ifndef TRICORE
# define TRICORE
#endif

/*******************************************************************************
 Type Qualifiers

 On some processors, data can be accessed as "near", "far" or "huge" data;
 functions can be accessed as "near" or "far" functions.

 To support these processors in a processor independent way, PXROS defines
 type qualifiers to specify the required access types for PXROS data
 or functions:

 PXData_q	indicates data interpreted by PXROS (usually "far" data)
 PXDptr_q	indicates a pointer to data interpreted by PXROS
 PXMem_q	indicates a general memory area (usually "far" or "huge" data)
 PXMptr_q	indicates a pointer to a general memory area
 PXFun_q	indicates a PXROS function or an application function
 activated by PXROS.
 SYSTEM_MEM	indicates a PXROS variable allocated into SYSTEM Memory
 normaly for fast memory access

 All these qualifiers are usually empty and only defined for some processors/
 PXROS implementations
 *******************************************************************************
 (not needed for TriCore)
 */

#define PXData_q
#define PXDptr_q
#define PXMem_q
#define PXMptr_q
#define PXFun_q

/*******************************************************************************
 Aborting a PXROS application
 --- by a breakpoint instruction
 */
#define PXProcAbort()	do { __asm__ volatile("debug\n\t0: wait\n\tj 0b");} while(0)

#if defined(__TC161__)
/* Core definitions */
// No of cores supported
#define PX_NO_OF_CORES  3
#define PXCORE_0        0
#define PXCORE_1        1
#define PXCORE_2        2

#define TC_NO_OF_DPRS   8
#define TC_NO_OF_CPRS   4

#elif defined(__TC162__)
/* Core definitions */
// No of cores supported
#define PX_NO_OF_CORES  6
#define PXCORE_0        0
#define PXCORE_1        1
#define PXCORE_2        2
#define PXCORE_3        3
#define PXCORE_4        4
#define PXCORE_5        5

#define TC_NO_OF_DPRS   9
#define TC_NO_OF_CPRS   5

#else /* other architecture */
#error "non supported TriCore architecture"
#endif /* __TC161__ */

extern char _MASTER_CORE_;
#define PXCORE_MASTER  ((unsigned int)&_MASTER_CORE_)


/******************************************************************************
 Stack handling

 */
#define PXProcFallingStack  1   /* Stacks are falling */
#define PXProcGrowingStack  0
#define PXProcStackType     PXStackFall

/******************************************************************************
 Stack Adjustment

 The macro "PXProcAdjustStack" tries to adjust these differences in stack
 sizes for different processors.

 Please keep in mind that this adjustment is heuristic only.
 */

#define PXProcAdjustStack(STACKSIZE)					\
	(PXProcAdjustStack_Add						\
	 + ((PxULong_t) PXProcAdjustStack_PerCent * (STACKSIZE) + 99L) / 100L)

#define PXProcAdjustStack_Add		100
#define PXProcAdjustStack_PerCent	100

//! the base type of a protection handle
typedef unsigned char PxProtHandle_t;

#define PROT_HANDLE_ILL     0xff
#define PROT_HANDLE_0       0
#define PROT_HANDLE_1       1
#define PROT_HANDLE_2       2
#define PROT_HANDLE_3       3
#define PROT_HANDLE_4       4
#define PROT_HANDLE_5       5
#define PROT_HANDLE_6       6
#define PROT_HANDLE_7       7
#if (TC_NO_OF_DPRS > 8)
#define PROT_HANDLE_8       8
#endif /* TC_NO_OF_DPRS > 8 */

/* TriCore Memory Protection specific definitions */
//! the access rights
#define NO_ACCESS_MASK      0
#define READ_ACCESS_MASK    1
#define WRITE_ACCESS_MASK   2
#define RW_ACCESS_MASK      (READ_ACCESS_MASK | WRITE_ACCESS_MASK)
#define READ_ACCESS_OFF     0
#define WRITE_ACCESS_OFF    1
typedef enum
{
    NoAccessProtection = NO_ACCESS_MASK,    // disable the access
    ReadProtection = READ_ACCESS_MASK,      // only readable
    WriteProtection = WRITE_ACCESS_MASK,    // only writable
    WRProtection = RW_ACCESS_MASK           // readable and writable
} PxProtectType_t;
#define	XProtection         ReadProtection  // executable (only for code protection
#define MASK_Protection     0x3             // protection type has only 2-Bit
// Macros to get read, write access value
#define READ_ACCESS(prot)   ((prot & READ_ACCESS_MASK) >> READ_ACCESS_OFF)
#define WRITE_ACCESS(prot)  ((prot & WRITE_ACCESS_MASK) >> WRITE_ACCESS_OFF)

//! Memory region description
typedef struct _PxProtectRegion_T
{
    unsigned int lowerBound;    // the first valid region address
    unsigned int upperBound;    // the first non valid address
    // lowerBound <= address < upperBound
    PxProtectType_t prot _PXWORD_SIZE;  // access type to this region ensure 32-bit size
} PxProtectRegion_T;

#if defined (__TC161__) || defined (__TC162__)
/* the structure of the protecion mode register */
typedef union _PxProtConfReg_T
{
    struct _bits
    {
        unsigned int dp0 : 1;
        unsigned int dp1 : 1;
        unsigned int dp2 : 1;
        unsigned int dp3 : 1;
        unsigned int dp4 : 1;
        unsigned int dp5 : 1;
        unsigned int dp6 : 1;
        unsigned int dp7 : 1;
        unsigned int dp8 : 1;
        unsigned int dp9 : 1;
        unsigned int dp10 : 1;
        unsigned int dp11 : 1;
        unsigned int dp12 : 1;
        unsigned int dp13 : 1;
        unsigned int dp14 : 1;
        unsigned int dp15 : 1;
#if defined(__TC162__)
        unsigned int dp16 : 1;
        unsigned int dp17 : 1;
#endif
    } bits;
    unsigned int reg;
} PxProtConfReg_T;

typedef struct _PxProtectMode_T
{
    PxProtConfReg_T dpre;
    PxProtConfReg_T dpwe;
} PxProtectMode_T;

typedef struct _PxCodeProtectMode_T
{
    PxProtConfReg_T cpxe;
} PxCodeProtectMode_T;

#else /* other architecture */
#error "non supported TriCore architecture"
#endif /* __TC161__ */

typedef union _PxProtRegion_T
{
    struct
    {
        unsigned int lower; // lower bound of memory region
        unsigned int upper; // upper bound of memory region
    } s;
    unsigned long long entry;
} PxProtRegion_T;

/* the Data Protection Register ranges */
/* ranges 0..7 are assigned to the system */
typedef struct _PxDataProtectSet_T
{
    PxProtRegion_T dpr[TC_NO_OF_DPRS];
    PxProtectMode_T dpmr; // data protection mode register
} PxDataProtectSet_T;

/* the code Protection registers pairs */
/* Pairs 0..3 are assigned to the system */
typedef struct _PxCodeProtectSet_T
{
    PxProtRegion_T cpr[TC_NO_OF_CPRS];
    PxCodeProtectMode_T cpmr;
} PxCodeProtectSet_T;

/* data protection description used in InitSpec to
   define the protection areas of the kernel and
   the system
 */
typedef struct _PxDataProtectSetInit {
  PxProtRegion_T dpr[TC_NO_OF_DPRS]; // data protection regions
  PxProtectMode_T dpmr_kernel;     // data protection set kernel mode
  PxProtectMode_T dpmr_system;     // data protection set supervisor mode
} PxDataProtectSetInit_T;




#ifndef __pxproc_asm_p_hp__
#define __pxproc_asm_p_hp__

/*******************************************************************************
 Processor identification

 */
#ifndef TRICORE
# define TRICORE
#endif

/* mode bits in the PSW */
#define PSW_IO_SHIFT            10
#define PSW_IO_LEN              2
#define PSW_IO_MASK             (3 << PSW_IO_SHIFT)
#define PSW_IS_SHIFT            9
#define PSW_IS_LEN              1
#define PSW_IS_MASK             (1 << PSW_IS_SHIFT)
#define PSW_PRS_SHIFT           12
#define PSW_PRS_LEN             2
#define PSW_PRS_MASK 	        (3 << PSW_PRS_SHIFT)

/* address spaces */
#define PRS_SYS                 0
#define PRS_KERNEL              1
#define PRS_TSK                 2
#define PRS_TSK_KERNEL          3

#define PSW_PRS_SYS             (PRS_SYS << PSW_PRS_SHIFT)
#define PSW_PRS_KERNEL          (PRS_KERNEL << PSW_PRS_SHIFT)
#define PSW_PRS_TSK             (PRS_TSK << PSW_PRS_SHIFT)
#define PSW_PRS_TSK_KERNEL      (PRS_TSK_KERNEL << PSW_PRS_SHIFT)

/* Disable Count Depth Counting */
#define PSW_DISABLE_CDC		0x7f

/* ICR bits */
#define ICR_IE_SHIFT            15
#define ICR_IE_LEN              1
#define ICR_IE_MASK             (1 << ICR_IE_SHIFT)
#define ICR_CCPN_SHIFT          0
#define ICR_CCPN_LEN            8
#define ICR_CCPN_MASK           (((1 << ICR_CCPN_LEN) - 1) << ICR_CCPN_SHIFT)

/* some special function register addresses */
#define TC_SYSCON               0xFE14  /* Short Address of Register SYSCON */
#define TC_SYSCON_PROTEN        0x2     /* Bitmsk of PROTEN in SYSCON register */
#define TC_PCXI		        0xFE00  /* Short Address of Register PCXI */
#define TC_PSW		        0xFE04  /* Short Address of Register PSW */
#define TC_CPU_ID               0xFE18  /* "CPU Identification Register" */
#define TC_BIV                  0xFE20  /* "Interrupt Vector Table Pointer" */
#define TC_BTV                  0xFE24  /* "Trap Vector Table Pointer" */
#define TC_ISP                  0xFE28  /* "Interrupt Stack Pointer" */
#define TC_ICR                  0xFE2C  /* "ICU Interrupt Control Register" */
#define TC_FCX                  0xFE38  /* "Free Context List Head Pointer" */
#define TC_LCX                  0xFE3C  /* "Free Context List Limit Pointer" */

#define BIV_VSS                 1       /* use 8-byte vectorsize entries */

#endif /* __pxproc_asm_p_hp__ */


/*! On the tricore we need a memory hole behind each memory allocation
 for safety reasons
 */
#define PXALLOC_SECURITY_PAD    6

/*******************************************************************************
 Parameter Passing Control

 On some processors, "PxExpectAbort" requires that both it and the function
 activated by it, must pass parameters on stack rather than in registers
 The macro below is the processor independant way to specify this requirement.
 It usually is empty and defined in processor dependent parts, if required.

 Some compilers do not provide means to declare functions as having
 their arguments passed on stack but implicitely pass ALL arguments
 on stack for functions with variable argument number.
 To support such compilers, "PXStackparmThroughVarargs" is used.
 It is empty, if not defined in the processor dependent header.
 */
#define PXStackParm

#define PXStackparmThroughVarargs

#endif /* __pxproc_p_hp__ */


#endif /* __pxproc__ */



#define PXROS_EVALUATION_VERSION
/* The Evaluation Version only supports up to 2 cores */
#undef PX_NO_OF_CORES
#define PX_NO_OF_CORES 3



/*******************************************************************************
********************************************************************************
Special PXROS privileges

*/



#ifndef __pxsysm_pub_hp__
#define __pxsysm_pub_hp__

/* PXROS Privileges
 are extremely processor dependent and dangerous;
 their use is strongly discouraged.
 the lowerorder 2 bits in ts_privileges will define the privileg mode of
 the created Task
 The "PXSupervisorPrivilege" entails:
 Interrupts enabled, User Stack (required!), Supervisor mode
 Supervisor privileg is only used by PXROS kernel Task may not be created
 run in Supervisormode
 The "PXUser1Privilege" entails:
 Interrupts enabled, User Stack (required!), User1 mode
 with Peripherial access
 The "PXUser0Privilege" entails:
 Interrupts enabled, User Stack (required!), User0 mode
 without Peripherial access the least privileged mode
 */

#define PXSupervisorPrivilege	__TRIC_SUPERVISOR_MODE
#define PXUserExtPrivilege	__TRIC_USER1_MODE
#define PXUserPrivilege	__TRIC_USER0_MODE

/*
 *	Keep the original tricore privileges
 */
#define PXUser0Privilege	PXUserPrivilege
#define PXUser1Privilege	PXUserExtPrivilege

#define PXPrivilegeMask		0x3

static inline __attribute__ ((always_inline)) PxInt_t PxIsOnHndLvl(void)
{
	PxUInt_t icr;
	__asm__ ("mfcr	%0, $icr":"=d" (icr));
	return icr & 0xff;
}

#endif /*  __pxsysm_pub_hp__ */








/*******************************************************************************
********************************************************************************
Definitions for "PxSetMessageFun"

*/



#ifndef __pxsetmessagefun__
#define __pxsetmessagefun__

#ifdef __cplusplus
extern "C"
{
#endif
    /* the type of the PXROS Message function */
    typedef void (*PxMessageFun_t)(PxMessageClass_t, PxError_t, PxArg_t, PxArg_t);

    extern PxError_t PxSetMessageFun(PxMessageFun_t);
#ifdef __cplusplus
}
#endif
#endif /* __pxsetmessagefun__ */



/*******************************************************************************
********************************************************************************
Ticks

*/



#ifndef __pxticks__
#define __pxticks__

typedef PxULong_t PxTicks_t;

#ifdef __cplusplus
extern "C"
{
#endif
    //! PxRos ticks related function prototypes

    extern void PxTickDefine_Hnd(void);
    extern void PxTickDefine_IntHnd(PxArg_t, PxEvents_t);
    extern PxTicks_t PxTickGetCount(void);
    extern PxError_t PxTickSetTicksPerSecond(PxUInt_t);
    extern PxULong_t PxTickGetTimeInMilliSeconds(void);
    extern PxTicks_t PxTickGetTicksFromMilliSeconds(PxULong_t);

#ifdef __cplusplus
}
#endif

#endif /* __pxticks__ */




/*******************************************************************************
********************************************************************************
Processor Id's

*/



#ifndef __pxprocid__
#define __pxprocid__

/* type of Processor-Id's */
typedef PxULong_t PxProcid_t;
typedef PxGlbULong_t PxGlbProcid_t;

/* special processor descriptions */
#define PXProcInvalid	((PxProcid_t) -1L)
#define PXProcLocal	PXProcInvalid

/* conversion macro between local and global description */
#define PXProcGlb(proc)	PXGlbULong(proc)
#define PXProcLoc(proc)	PXLocULong(proc)

#endif /* __pxprocid__ */



/*******************************************************************************
********************************************************************************
Protected References

*/



#ifndef __pxprefs__
#define __pxprefs__

/*******************************************************************************
 Data Type

 */

typedef PxGlbULong_t PxPref_t; /* 4 bytes but internal representation */

#endif /* __pxprefs__ */




/*************
******************************************************************
********************************************************************************
PXROS Objects Types

*/


#ifndef _PXPUBLIC_H_
#define _PXPUBLIC_H_



#ifndef __pxobjtypes_pub_h__
#define __pxobjtypes_pub_h__

/*******************************************************************************
 Object types

 */

typedef enum
{
    _PXObjUnused,
    _PXObjObj,
    _PXObjMsg,
    _PXObjDelay,
    _PXObjMc,
    _PXObjMbx,
    _PXObjPrivMbx,
    _PXObjOpool,
    _PXObjTask,
    _PXObjTo,
    _PXObjPe,
    _PXObjInterrupt,
    _PXObjInValidtype,
    _PXObjDlElem,
    _PXObjDlQueue,
    _PXObjSdlElem,
    _PXObjSdlQueue,
    _PXObjInterCoreComm,
    _PXObjGlobalData,
    _PXObjIllObject
} _PxObjType_t;

#endif // __pxobjtypes_pub_h__


#ifndef __pxopool_pub__
#define __pxopool_pub__

//!Object Pool Data Type

typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxOpool_t;

//!Return an object pool and/or events from a system call
typedef struct
{
    PxOpool_t opool;
    PxEvents_t events;
} PxOpoolEvent_t;

__PXOBJ_ACCESS_FUNCTION(xOpool)

//!Object pool types
typedef enum
{
    PXOpoolReal,
    PXOpoolVirtual,
    PXOpoolIllegalType
} PxOpoolType_t;

/******************************************************************************
 Default object pool objects

 */

#define _PXOpoolTaskdefaultId             2
#define _PXOpoolSystemdefaultId           1
#define _PXOpoolGlobalSystemdefaultId     5
#define PXOpoolTaskdefaultId              (0x8000 + _PXOpoolTaskdefaultId)
#define PXOpoolSystemdefaultId            (0x8000 + _PXOpoolSystemdefaultId)
#define PXOpoolGlobalSystemdefaultId      (0x8000 + _PXOpoolGlobalSystemdefaultId)
//!Default Task object pool
// usage: initialization value of structures
#define PXOpoolTaskdefaultInit      {PXOpoolTaskdefaultId, PXERR_NOERROR}
// usage: argument of functions
#define PXOpoolTaskdefault          ((PxOpool_t)PXOpoolTaskdefaultInit)
//!Default System object pool
// usage: initialization value of structures
#define PXOpoolSystemdefaultInit          {PXOpoolSystemdefaultId, PXERR_NOERROR}
#define PXOpoolGlobalSystemdefaultInit    {PXOpoolGlobalSystemdefaultId, PXERR_NOERROR}
// usage: argument of functions
#define PXOpoolSystemdefault        ((PxOpool_t)PXOpoolSystemdefaultInit)
#define PXOpoolGlobalSystemdefault  ((PxOpool_t)PXOpoolGlobalSystemdefaultInit)

#ifdef __cplusplus
extern "C"
{
#endif

    extern PxError_t PxObjGetName(PxObjId_t, PxChar_t *, PxUInt_t);
    extern PxError_t PxObjSetName(PxObjId_t, const PxChar_t *, PxUInt_t);

    extern PxUInt_t PxOpoolGetCurrentCapacity(PxOpool_t);
    extern PxOpoolType_t PxOpoolGetType(PxOpool_t);
    extern PxOpool_t PxOpoolRelease(PxOpool_t);
    extern PxOpool_t PxOpoolRequest_NoWait(PxOpoolType_t, PxUInt_t, PxOpool_t, PxOpool_t);
    extern PxOpool_t PxOpoolRequest(PxOpoolType_t, PxUInt_t, PxOpool_t, PxOpool_t);
    extern PxOpool_t PxOpoolResolveDefault(PxOpool_t);
    extern PxSize_t PxGetObjsize(void);

#define PXObjSize       PxGetObjsize()

    static inline PxError_t PxOpoolGetName(PxOpool_t opool, PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjGetName(PxOpoolIdGet(opool), buffer, bufsize);
    }
    static inline PxError_t PxOpoolSetName(PxOpool_t opool, const PxChar_t *buffer,
                                           PxUInt_t bufsize)
    {
        return PxObjSetName(PxOpoolIdGet(opool), buffer, bufsize);
    }

#ifdef __cplusplus
}
#endif

#endif /* __pxopool_pub__ */



#ifndef __pxdel_pub__
#define __pxdel_pub__

//!Delay Job Data Type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxDelay_t;

//!Return a delay and/or events from a system call
typedef struct
{
    PxDelay_t delay;
    PxEvents_t events;
} PxDelayEvent_t;

__PXOBJ_ACCESS_FUNCTION(xDelay)


#ifdef __cplusplus
extern "C"
{
#endif
extern PxDelay_t PxDelayRelease(PxDelay_t);
extern PxDelayEvent_t PxDelayRequest_EvWait(PxOpool_t,PxEvents_t);
extern PxDelay_t PxDelayRequest_NoWait(PxOpool_t);
extern PxDelay_t PxDelayRequest(PxOpool_t);
extern PxError_t PxDelaySched_Hnd(PxDelay_t delay,PxTicks_t ticks,
        void PXFun_q (*hnd)(PxArg_t), PxArg_t arg);
extern PxError_t PxDelaySched(PxDelay_t delay, PxTicks_t ticks,
        void PXFun_q (*handler)(PxArg_t), PxArg_t arg);

static inline PxError_t PxDelayResched_Pxhnd(PxDelay_t delay, PxTicks_t ticks,
                                             void PXFun_q (*handler)(PxArg_t), PxArg_t arg)
    {
       return PxDelaySched_Hnd(delay, ticks, handler, arg); 
    }

static inline PxError_t PxDelayGetName(PxDelay_t delay, PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjGetName(PxDelayIdGet(delay),buffer,bufsize);
}
static inline PxError_t PxDelaySetName(PxDelay_t delay, const PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjSetName(PxDelayIdGet(delay),buffer,bufsize);
}

#ifdef __cplusplus
}
#endif
#endif /* __pxdel_pub__ */


/*************************************************************************
 *
 *  Project:        PXROS HR
 *  Function:       public definition for memory classes
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

#ifndef __pxmc_pub__
#define __pxmc_pub__

//!Memory Class Data Type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxMc_t;

typedef struct
{
    PxMc_t mc;
    PxEvents_t events;
} PxMcEvent_t;

__PXOBJ_ACCESS_FUNCTION(xMc)

//!Memory Pointer Data Type
typedef PxAligned_t *PxMptr_t;
//!Aligned Memory Data Pointer Type
typedef PxMemAligned_t *PxMemPtr_t;

//!PXROS memory class types
typedef enum
{
    PXMcFixsized,
    PXMcVarsized,
    PXMcVarsizedAligned,
    PXMcVarsizedAdjusted,
    PXMcBuddyMemory,
    PXMcTypeLast,
    /* ensure 32-bit size */
    PXMcTypeMax = 0x10000
} PxMcType_t;

#define _PXMcTaskdefaultId      4
#define _PXMcSystemdefaultId    3
#define PXMcTaskdefaultId       ((PxObjId_t)(0x8000 + _PXMcTaskdefaultId))
#define PXMcSystemdefaultId     ((PxObjId_t)(0x8000 + _PXMcSystemdefaultId))
//!Default Task memory class
// usage: initialization value of structures
#define PXMcTaskdefaultInit     {PXMcTaskdefaultId, PXERR_NOERROR}
// usage: argument of functions
#define PXMcTaskdefault         ((PxMc_t)PXMcTaskdefaultInit)
//!Default System memory class
// usage: initialization value of structures
#define PXMcSystemdefaultInit   {PXMcSystemdefaultId, PXERR_NOERROR}
// usage: argument of functions
#define PXMcSystemdefault       ((PxMc_t)PXMcSystemdefaultInit)

#ifdef __cplusplus
extern "C"
{
#endif
    //! the memory class object related function prototypes
    extern PxMc_t PxMcRequest(PxMcType_t, PxSize_t, PxOpool_t);
    extern PxMc_t PxMcRelease(PxMc_t);
    extern PxMcEvent_t PxMcRequest_EvWait(PxMcType_t, PxSize_t, PxOpool_t, PxEvents_t);
    extern PxMc_t PxMcRequest_NoWait(PxMcType_t, PxSize_t, PxOpool_t);

    extern PxError_t PxMcInsertBlk(PxMc_t, PxMptr_t, PxSize_t);
    extern PxMptr_t PxMcTakeBlk(PxMc_t, PxSize_t);
    extern PxError_t PxMcReturnBlk(PxMc_t, PxMptr_t);

    extern PxSize_t PxMcGetSize(PxMc_t);
    extern PxMcType_t PxMcGetType(PxMc_t);
    extern PxSize_t PxMcGetVarsizedOverhead(PxMc_t);
    extern PxMc_t PxMcResolveDefault(PxMc_t);
    extern PxError_t PxMcReturnAllBlks(void);

    static inline PxError_t PxMcGetName(PxMc_t mc, PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjGetName(PxMcIdGet(mc), buffer, bufsize);
    }
    static inline PxError_t PxMcSetName(PxMc_t mc, const PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjSetName(PxMcIdGet(mc), buffer, bufsize);
    }

#ifdef __cplusplus
}
#endif
#endif /* __pxmc_pub__ */


#ifndef __pxmbx_pub__
#define __pxmbx_pub__

//!Mailbox Data Type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxMbx_t;

//!Return a mailbox and/or events from a system call
typedef struct
{
    PxMbx_t mbx;
    PxEvents_t events;
} PxMbxEvent_t;

__PXOBJ_ACCESS_FUNCTION(xMbx)



#ifdef __cplusplus
extern "C"
{
#endif
extern PxBool_t PxMbxCheck(PxMbx_t);
extern PxMbx_t PxMbxRelease(PxMbx_t);
extern PxMbxEvent_t PxMbxRequest_EvWait(PxOpool_t,PxEvents_t);
extern PxMbx_t PxMbxRequest_NoWait(PxOpool_t);
extern PxMbx_t PxMbxRequest(PxOpool_t);

static inline PxError_t PxMbxGetName(PxMbx_t mbx, PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjGetName(PxMbxIdGet(mbx),buffer,bufsize);
}
static inline PxError_t PxMbxSetName(PxMbx_t mbx, const PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjSetName(PxMbxIdGet(mbx),buffer,bufsize);
}

#ifdef __cplusplus
}
#endif
#endif /* __pxmbx_pub__ */



#ifndef __pxtmode_p__
#define __pxtmode_p__

typedef PxUShort_t PxTmode_t;

#define PXTmodeSoftAborts       ((PxTmode_t)(1<<0))  /* aborts only ready the task, without
                                                      * changing registers, including sp and pc
                                                      */
#define PXTmodeDisableAborts    ((PxTmode_t)(1<<1))  /* aborts are inhibited completely */

#define PXTmodeTdisableAborts   ((PxTmode_t)(1<<2))  /* aborts are inhibited completely,
                                                      * used by PXROS, in order to avoid
                                                      * saving and restoring `PXTmodeDisableAbort'
                                                      */
#define PXTmodeAborted          ((PxTmode_t)(1<<3))  /* set, if a task with `PXTmodeSoftAbort'
                                                      * set is aborted  */

#define PXTmodeDisableTrace     ((PxTmode_t)(1<<5))     /* set, if a task should NOT be traced */

#define PXTmodeAwaitMsgrel      ((PxTmode_t)(1<<7))  /* set, while a task is waiting for
                                                      * a `PxMsgRelease'  */
#define PXTmodeDisableTimeslicing ((PxTmode_t)(1<<8)) /* disables counting down the timeslice
                                                       * account of the task */
#define PXTmodeTdisableTimeslicing ((PxTmode_t)(1<<9))/* disables counting down the timeslice account
                                                       * of the task --- set iff "tcb_timeslices==0",
                                                       * used to efficiently test whether timeslicing
                                                       * is enabled */
#define PXTmodeSuspended        ((PxTmode_t)(1<<10)) /* task suspended (can only be resumed
                                                      * by "PxTaskResume" */
#define PXTmodeDoSuspend        ((PxTmode_t)1<<11)   /* task has to be suspended used in Task service to suspend
                                                      * the task */
#define PXTmodeDoAbort          ((PxTmode_t)(1<<12))   /* set if the task has get an aborting event and has to be
                                                      * aborted. Cleared if the abort has been handled */
#define PXTmodeDoTermination    ((PxTmode_t)(1<<13))    /* task has to be terminated */
#define PXTmodeSVCMode          ((PxTmode_t)(1<<14)) /* task is in svc mode  */
#define PXTmodeServiceMode      ((PxTmode_t)(1<<15)) /* task is in service mode with additional
                                                        protection set this mode is only used internal
                                                      */

#define	PXTmodeUserbits	(PXTmodeDisableAborts           \
                         | PXTmodeDisableTimeslicing    \
                         | PXTmodeDisableTrace \
			)
/* That part of the mode changable
 by the user
 */

#define PXTmodeDisabledAborts(mode)                                     \
                ((PxTmode_t) (mode & (PXTmodeDisableAborts | PXTmodeTdisableAborts)))
#define PXTmodeDisabledTimeslicing(mode)                                \
                ((PxTmode_t) (mode & (PXTmodeDisableTimeslicing|PXTmodeTdisableTimeslicing)))

#define PXTmodeEnabledAborts(mode)	(!PXTmodeDisabledAborts(mode))
#define PXTmodeEnabledTimeslicing(mode)	(!PXTmodeDisabledTimeslicing(mode))

/* The following definitions allow GDB-Subprograms to access modebits
 by their name; the names have a prepended "_" to avoid name
 clashes with the corresponding macro definitions
 */
typedef enum
{
    _PXTmodeSoftAborts = PXTmodeSoftAborts,
    _PXTmodeDisableAborts = PXTmodeDisableAborts,
    _PXTmodeTdisableAborts = PXTmodeTdisableAborts,
    _PXTmodeAborted = PXTmodeAborted,
        
    _PXTmodeDisableTrace = PXTmodeDisableTrace,    

    _PXTmodeAwaitMsgrel = PXTmodeAwaitMsgrel,

    _PXTmodeDisableTimeslicing = PXTmodeDisableTimeslicing,
    _PXTmodeTdisableTimeslicing = PXTmodeTdisableTimeslicing,

    _PXTmodeSuspended = PXTmodeSuspended,
    _PXTmodeDoSuspend = PXTmodeDoSuspend,
    _PXTmodeDoAbort = PXTmodeDoAbort,
    _PXTmodeSVCMode = PXTmodeSVCMode,
    _PXTmodeServiceMode = PXTmodeServiceMode
} _PxTmodebits;

#endif /* __pxtmode_p__ */



#ifndef __pxtask_pub__
#define __pxtask_pub__

//!Task data type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxTask_t;

__PXOBJ_ACCESS_FUNCTION(xTask)

/* the size of a task name stored in the task control block */
#define TASK_NAME_SIZE      12
//! the priority type
typedef unsigned int
PxPrio_t;

#ifdef __cplusplus
extern "C"
{
#endif
    //! the task object related function prototypes
    extern PxTask_t PxGetId(void);

    extern PxError_t PxGetError(void);
    extern void PxSetError(PxError_t);

    extern PxArg_t PxGetAppinfo(void);
    extern void PxSetAppinfo(PxArg_t);

    extern PxError_t PxTaskSuspend_Hnd(PxTask_t);
    extern PxError_t PxTaskSuspend(PxTask_t);
    extern PxError_t PxTaskResume(PxTask_t);

    extern PxError_t PxTaskSetPrio(PxTask_t, PxPrio_t);
    extern PxPrio_t PxTaskGetPrio(PxTask_t);

    extern PxMbx_t PxTaskGetMbx(PxTask_t);
    extern PxTmode_t PxTaskGetModebits(PxTask_t);
    extern PxSize_t PxTaskGetSize(void);
    extern PxBool_t PxTaskCheck(PxTask_t);

    extern PxEvents_t PxGetSavedEvents(void);
    extern PxEvents_t PxGetAbortingEvents(void);
    extern PxEvents_t PxResetEvents(PxEvents_t);
    extern PxError_t PxTaskSignalEvents_Hnd(PxTask_t, PxEvents_t);
    extern PxError_t PxTaskSignalEvents(PxTask_t task, PxEvents_t events);
    extern void PxTaskSignalEvents_IntHnd(PxArg_t arg, PxEvents_t events);
    extern PxEvents_t PxAwaitEvents(PxEvents_t);

    extern PxTmode_t PxSetModebits(PxTmode_t);
    extern PxTmode_t PxClearModebits(PxTmode_t);
    extern PxUInt_t PxTaskGetAccessRights(PxTask_t);
    extern PxUInt_t PxRemoveAccessRights(PxUInt_t accessrights);
    extern PxError_t PxRestoreAccessRights(PxUInt_t accessrights);
    extern PxTicks_t PxGetTimeslices(void);
    extern void PxSetTimeslices(PxTicks_t);

    /* service events for dieing and handler releases */
#define PXSERVICE_TASK_DIED  (1u<<31)
#define PXSERVICE_HND_MSGREL (1u<<30)

    extern PxError_t PxServiceTaskInit(void);
    extern PxError_t PxTerminate(PxBool_t);
    extern PxError_t PxDie(void);
    extern PxError_t PxDieService(void);
    extern PxError_t PxTaskForceTermination(PxTask_t);

#define PXTaskSize      PxTaskGetSize()

    static inline PxError_t PxTaskGetName(PxTask_t task, PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjGetName(PxTaskIdGet(task), buffer, bufsize);
    }
    static inline PxError_t PxTaskSetName(PxTask_t task, const PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjSetName(PxTaskIdGet(task), buffer, bufsize);
    }
    static inline PxError_t PxTaskSignalEvents_Pxhnd(PxTask_t task, PxEvents_t events)
    {
        return PxTaskSignalEvents_Hnd(task, events);
    }
    static inline PxError_t PxTaskSuspend_Pxhnd(PxTask_t task)
    {
        return PxTaskSuspend_Hnd(task);
    }

#ifdef __cplusplus
}
#endif
#endif // __pxtask_pub__



#ifndef __pxmsg_pub__
#define __pxmsg_pub__

//!Message data type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxMsg_t;

//!Return a message and/or events from a system call
typedef struct
{
    PxMsg_t msg;
    PxEvents_t events;
} PxMsgEvent_t;

__PXOBJ_ACCESS_FUNCTION(xMsg)

__attribute__ ((always_inline)) static inline PxEvents_t PxMsgEventEvents(PxMsgEvent_t msg)
{
  return msg.events;
}
__attribute__ ((always_inline)) static inline PxMsgEvent_t PxMsgEventEventsSet(PxMsgEvent_t msg, PxEvents_t ev)
{
    msg.events = ev;
    return msg;
}
__attribute__ ((always_inline)) static inline PxMsg_t PxMsgEventMsg(PxMsgEvent_t msg)
{
  return msg.msg;
}
__attribute__ ((always_inline)) static inline PxMsgEvent_t PxMsgEventMsgSet(PxMsgEvent_t msgEv, PxMsg_t msg)
{
    msgEv.msg = msg;
    return msgEv;
}

//!Message Types used to specify activation conditions for mailbox handler
/*
 * if PxMsgType_t changes, it must be checked, if the following modules
 * are affected: pxmbx.cpp, pxmsgsend.cpp, pxsysinfo.cpp, trichandler.cpp
 */
typedef enum
{
     PXMsgNoMsg = 0x0, PXMsgNormalMsg = 0x1, PXMsgPrioMsg = 0x2, PXMsgAnyMsg = PXMsgNormalMsg | PXMsgPrioMsg
} PxMsgType_t;

//!Message Data Areas the content of messages
typedef void PXMptr_q *PxMsgData_t;

//!Message metadata
typedef unsigned long long PxMsgMetadata_t;

#ifdef __cplusplus
extern "C"
{
#endif
    //! the message object related function prototypes
    extern PxMsgEvent_t PxMsgEnvelop_EvWait(PxMsgData_t, PxSize_t, PxOpool_t, PxEvents_t);
    extern PxMsg_t PxMsgEnvelop_NoWait(PxMsgData_t, PxSize_t, PxOpool_t);
    extern PxMsg_t PxMsgEnvelop(PxMsgData_t, PxSize_t, PxOpool_t);
    extern PxSize_t PxMsgGetBuffersize(PxMsg_t);
    extern PxMsgData_t PxMsgGetData_Hnd(PxMsg_t);
    extern PxMsgData_t PxMsgGetData(PxMsg_t);
    extern PxError_t PxMsgRelDataAccess(PxMsg_t msgid);
    extern PxSize_t PxMsgGetSize(PxMsg_t);
    extern PxError_t PxMsgSetData(PxMsg_t, PxMsgData_t);
    extern PxError_t PxMsgInstallRelmbx(PxMsg_t, PxMbx_t);
    extern PxMsgEvent_t PxMsgReceive_EvWait(PxMbx_t, PxEvents_t);
    extern PxMsg_t PxMsgReceive_NoWait(PxMbx_t);
    extern PxMsg_t PxMsgReceive(PxMbx_t);
    extern PxMsg_t PxMsgRelease_Hnd(PxMsg_t);
    extern PxMsg_t PxMsgRelease(PxMsg_t);
    extern PxMsgEvent_t PxMsgRequest_EvWait(PxSize_t, PxMc_t, PxOpool_t, PxEvents_t);
    extern PxMsg_t PxMsgRequest_NoWait(PxSize_t, PxMc_t, PxOpool_t);
    extern PxMsg_t PxMsgRequest(PxSize_t, PxMc_t, PxOpool_t);
    extern PxMsg_t PxMsgSend_Hnd(PxMsg_t, PxMbx_t);
    extern PxMsg_t PxMsgSend_PrioHnd(PxMsg_t, PxMbx_t);
    extern PxMsg_t PxMsgSend_Prio(PxMsg_t, PxMbx_t);
    extern PxMsg_t PxMsgSend(PxMsg_t, PxMbx_t);
    extern PxError_t PxMsgSetSize(PxMsg_t, PxSize_t);
    extern PxMsg_t PxMsgAwaitRel(PxMsg_t);
    extern PxMsg_t PxMsgAwaitRel_NoWait(PxMsg_t);
    extern PxMsgEvent_t PxMsgAwaitRel_EvWait(PxMsg_t, PxEvents_t);
    extern PxError_t PxMsgSetToAwaitRel(PxMsg_t);
    extern PxError_t PxMsgReleaseAllMsg(void);
    extern PxError_t PxMsgForceRelease(PxMsg_t);
    extern PxProtectType_t PxMsgGetProtection(PxMsg_t);
    extern PxError_t PxMsgSetProtection(PxMsg_t, PxProtectType_t);
    extern PxTask_t PxMsgGetOwner(PxMsg_t);
    extern PxTask_t PxMsgGetSender(PxMsg_t);
    extern PxError_t PxMsgSetMetadata(PxMsg_t, PxMsgMetadata_t);
    extern PxMsgMetadata_t PxMsgGetMetadata(PxMsg_t);
    extern PxError_t PxMsgSetMetadata_Hnd(PxMsg_t, PxMsgMetadata_t);
    extern PxMsgMetadata_t PxMsgGetMetadata_Hnd(PxMsg_t);

    extern PxError_t PxMbxInstallHnd(PxMbx_t, PxMsg_t(*hnd)(PxMsg_t, PxMsgType_t, PxArg_t),
                                     PxMsgType_t, PxArg_t);

    static inline PxError_t PxMsgGetName(PxMsg_t msg, PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjGetName(PxMsgIdGet(msg), buffer, bufsize);
    }
    static inline PxError_t PxMsgSetName(PxMsg_t msg, const PxChar_t *buffer, PxUInt_t bufsize)
    {
        return PxObjSetName(PxMsgIdGet(msg), buffer, bufsize);
    }

#ifdef __cplusplus
}
#endif

#endif /* __pxmsg_pub__ */



#ifndef __pxtask_p_hp__
#define __pxtask_p_hp__

#define __TRIC_SUPERVISOR_MODE	0x2	/* set mode to supervisor */
#define __TRIC_USER1_MODE	0x1	/* set mode to user1 */
#define __TRIC_USER0_MODE	0x0	/* set mode to user0 */

/*******************************************************************************
 Task context data structure
 The context data structure defines the 2 protection areas of a task
 - the first entry defines the readonly area and
 - the second entry defines the read write data of the task
 if the first entry is 0  the task inherits the readonly protection
 from the creator
 */
typedef struct PxTaskContext_T
{
    PxProtectRegion_T protection[2];
} PxTaskContext_T;

#endif /* __pxtask_p_hp__ */




#ifndef __pxto_pub__
#define __pxto_pub__

//!Timeout Job Data Type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxTo_t;

//!Return a to and/or events from a system call
typedef struct
{
    PxTo_t to;
    PxEvents_t events;
} PxToEvent_t;

__PXOBJ_ACCESS_FUNCTION(xTo)


#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

extern PxTo_t PxToRequest(PxOpool_t, PxTicks_t, PxEvents_t);
extern PxTo_t PxToRequest_NoWait(PxOpool_t, PxTicks_t, PxEvents_t);
extern PxToEvent_t PxToRequest_EvWait(PxOpool_t , PxTicks_t, PxEvents_t, PxEvents_t);

extern PxError_t PxToStart(PxTo_t);
extern PxError_t PxToStop(PxTo_t);
extern PxTo_t PxToRelease(PxTo_t );
extern PxError_t PxToChange(PxTo_t, PxTicks_t, PxEvents_t);

extern PxError_t PxToStart_Hnd(PxTo_t);
extern PxError_t PxToStop_Hnd(PxTo_t);

static inline PxError_t PxToGetName(PxTo_t to, PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjGetName(PxToIdGet(to),buffer,bufsize);
}
static inline PxError_t PxToSetName(PxTo_t to, const PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjSetName(PxToIdGet(to),buffer,bufsize);
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __pxto_pub__ */



#ifndef __pxpe_pub__
#define __pxpe_pub__

//!Timeout Job Data Type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxPe_t;

//!Return a pe and/or events from a system call
typedef struct
{
    PxPe_t pe;
    PxEvents_t events;
} PxPeEvent_t;

__PXOBJ_ACCESS_FUNCTION(xPe)



#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

extern PxPe_t PxPeRequest(PxOpool_t, PxTicks_t, PxEvents_t);
extern PxPe_t PxPeRequest_NoWait(PxOpool_t, PxTicks_t, PxEvents_t);
extern PxPeEvent_t PxPeRequest_EvWait(PxOpool_t, PxTicks_t, PxEvents_t, PxEvents_t);
extern PxError_t PxPeStart(PxPe_t);
extern PxError_t PxPeStop(PxPe_t);
extern PxPe_t PxPeRelease(PxPe_t);
extern PxError_t PxPeChange(PxPe_t, PxTicks_t, PxEvents_t);

extern PxError_t PxPeStart_Hnd(PxPe_t);
extern PxError_t PxPeStop_Hnd(PxPe_t);

static inline PxError_t PxPeGetName(PxPe_t pe, PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjGetName(PxPeIdGet(pe),buffer,bufsize);
}
static inline PxError_t PxPeSetName(PxPe_t pe, const PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjSetName(PxPeIdGet(pe),buffer,bufsize);
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __pxpe_pub__ */



#ifndef __pxinterrupt_pub__
#define __pxinterrupt_pub__

//!Interrupt Job Data Type
typedef struct
{
    PxObjId_t id;
    PxError_t error :16;
} PxInterrupt_t;

//!Return an interrupt and/or events from a system call
typedef struct
{
    PxInterrupt_t interrupt;
    PxEvents_t events;
} PxInterruptEvent_t;

__PXOBJ_ACCESS_FUNCTION(xInterrupt)


#ifdef __cplusplus
extern "C"
{
#endif
extern PxInterrupt_t PxInterruptRelease(PxInterrupt_t);
extern PxInterruptEvent_t PxInterruptRequest_EvWait(PxOpool_t,PxEvents_t);
extern PxInterrupt_t PxInterruptRequest_NoWait(PxOpool_t);
extern PxInterrupt_t PxInterruptRequest(PxOpool_t);

static inline PxError_t PxInterruptGetName(PxInterrupt_t interrupt, PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjGetName(PxInterruptIdGet(interrupt),buffer,bufsize);
}
static inline PxError_t PxInterruptSetName(PxInterrupt_t interrupt, const PxChar_t *buffer, PxUInt_t bufsize)
{
    return PxObjSetName(PxInterruptIdGet(interrupt),buffer,bufsize);
}

#ifdef __cplusplus
}
#endif
#endif /* __pxinterrupt_pub__ */


/* ATTENTION: DO NOT REMOVE (needed by MP) !! */

#ifndef __pxabort_pub_hp__
#define __pxabort_pub_hp__

/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif
    extern PxEventsOrError_t PxAbortCleanup(void);
    extern PxEventsOrError_t PxAbortSetup(PxEvents_t);
    extern PxSize_t PxGetAbortFrameSize(void);

/*!
 \brief PxExpectAbort call a function and expect abort during the call

 \synopsis PxEvents_t PxExpectAbort (PxEvents_t ev, void func, parms...);

 \param ev events that make the call return
 \param func function to call
 \param parms... parameters to function

 \return events that made the call return.
 */

#define PxExpectAbort(ev, func, parms...) \
 ({ PxEventsOrError_t __t__; \
    __t__ = PxAbortSetup(ev);  \
    (!(__t__.events || __t__.error )) ? \
            func(parms),  \
            PxAbortCleanup()  \
            : __t__; \
  })

#define breakpt PxExpectAbort
#ifdef __cplusplus
}
#endif

typedef struct PxAbortFrame_T PXDptr_q *PxAbortFrame_t;

#endif /* __pxabort_pub_hp__ */


//

#endif /* _PXPUBLIC_H_ */




#ifndef __pxaccessrights__
#define __pxaccessrights__

/*
 the access right classes define the right to access different PXROS
 services.
 The PXROS services are grouped in classes by their effects to the safety
 requirements
 */

/* the right to execute PxHndcalls and install interrupt handlers with
 system privileges
 */
#define PXACCESS_HANDLERS		(1<<0)

/* the right to install interrupt handlers which are executed as PXROS
 handlers like delay jobs and normal interrupts
 */
#define PXACCESS_INSTALL_HANDLERS 	(1<<1)

/* the right to install PXROS services as handlers
 */
#define PXACCESS_INSTALL_SERVICES	(1<<2)

/* the right to execute system functions with access to special
 core registers. These functions are normally processor dependent.
 */
#define PXACCESS_REGISTERS		(1<<3)

/* the right to allocate from the system default resources
 PXMcSystemdefault and PXOpoolSystemdefault
 Tasks which have the Taskdefaults set to Systemdefaults must have
 also set this access right
 */
#define PXACCESS_SYSTEMDEFAULT		(1<<4)

/* the right to access resources which are not owned by the task itself
 i.e. not Taskdefault and not created by the task
 */
#define PXACCESS_RESOURCES		(1<<5)

/* the right to create new resources, i.e. new objectpools and
 memory classes
 */
#define PXACCESS_NEW_RESOURCES		(1<<6)

/* the right to execute special system functions which can influence
 the system behaviour (e.g. PxSetMessagefun, PxTaskSuspend)
 */
#define PXACCESS_SYSTEM_CONTROL         (1<<7)

/* the right for a task to set its modebits
 (a task may always clear its modebits)
 */
#define PXACCESS_MODEBITS         (1<<8)

/* the right to override the aborting events from PxExpectAbort
 * task can use aborting events itself inside a supervised function
 */
#define PXACCESS_OVERRIDE_ABORT_EVENTS  (1<<9)

/* the right to create a task
 */
#define PXACCESS_TASK_CREATE  (1<<10)

/* the right to create a task with a higher priority
 */
#define PXACCESS_TASK_CREATE_HIGHER_PRIO  (1<<11)

/* the right for a task to set its priority to a higher priority than the one it has been created with
*/
#define PXACCESS_TASK_SET_HIGHER_PRIO   (1<<12)

/* the right for a task to change its priority to a lower priority than the one it has been created with
*/
#define PXACCESS_CHANGE_PRIO   (1<<13)

/* the right for a task to restore its access rights to those it has been created with
*/
#define PXACCESS_TASK_RESTORE_ACCESS_RIGHTS   (1<<14)

/* the right to create a task without respecting memory inheritance rule
 */
#define PXACCESS_TASK_CREATE_HIGHER_ACCESS   (1<<15)

/* the right for a task to use PxTraceCtrl
 */
#define PXACCESS_TRACECTRL   (1<<16)

/* the right for a task to allocate global objects
 */
#define PXACCESS_GLOBAL_OBJECTS   (1<<17)

#endif // __pxaccessrights__



/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		Public Task specification declarations
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

#ifndef __pxtaskspec__
#define __pxtaskspec__

/*!
 Stack specifications


 The stack of a newly created task can be specified in several ways:

 - "PXStackAlloc": by its size (in integers) and the memory class,
 where the stack area should be taken from,

 - "PXStackGrow": by its starting address and (optionally) its size
 in integers

 - "PXStackFall": by the address following the stack area and
 (optionally) its size in integers.

 If the size should not be specified, it may be given as "PXStackDontCheck".
 Furthermore, the stack specification type ("PXStackGrow/PXStackFall")
 must in this case agree with the way the target processor handles stacks
 (if the target processor uses falling stacks, the stack specification
 must use "PXStackFall", because without size information PXROS is
 unable to determine the upper stack end).

 All tasks require their own task stack. Besides, some tasks require
 a further stack, the so called "abort stack". Such a stack is
 required for tasks using the PXROS abort mechanism.
 The abort stack consists of "abort frames". Each call to "PxExpectAbort"
 uses one abort frame to save the context to be restored in case of
 an abortion. The abort frame is release, as soon "PxExpectAbort" returns.
 Thus, for each nested call to "PxExpectAbort" one abort frame is
 needed.
 */

typedef enum
{
    PXStackAlloc, PXStackGrow, PXStackFall,
    /* ensure 32-bit size */
    PXStackTypeMax = 0x10000
} PxStackSpecType_t;

#define PXStackDontCheck	((PxSize_t) -1)

//! stack specification
typedef struct
{
    //! specification type
    PxStackSpecType_t stk_type;
    //! stacksize in "PxInt_t" units
    PxSize_t stk_size;
    //! stack source: "PxMc_t" for PXStackAlloc, "PxMemAligned_t *" otherwise
    union
    {
        PxStackAligned_t *stk;
        PxMc_t mc;
    } stk_src;
} PxStackSpec_T;

typedef PxStackSpec_T PXDptr_q *PxStackSpec_t;
typedef PxStackSpec_T const PXDptr_q *PxStackSpec_ct;

/*!
 Scheduling extensions for tasks

 PXROS versions generated with the "TASKEXTENSION" attribute allow
 a scheduling extension. This extension allows:
 -  to increase the size of the tcb by a specifiable amount: the
 "task extension"
 -  to initialize this extension area
 -  to activate a save function for the extension whenever the task
 context is saved
 -  to activate a restore function for the extension whenever the
 task context is restored

 The functions are called on system stack; they must only use
 handler services.
 The save and restore functions are called with two parameters:
 -  a pointer to the task extension
 -  an indication on what caused the context change; currently
 the following causes are defined:

 PXSchedExtForeignHnd_Bgn
 a (delay, remote or mailbox) handler
 of a foreign task will be activated
 PXSchedExtForeignHnd_Bgn
 a (delay, remote or mailbox) handler
 of a foreign task has ended
 PXSchedExtOwnHnd_Bgn	a (delay, remote or mailbox) handler
 of the current task will be activated
 PXSchedExtOwnHnd_End	a (delay, remote or mailbox) handler
 of the current task has ended
 PXSchedExtSched	a task switch will/has occur/ed

 The save function must be idempotent, i.e. the effect to call it
 several times in succession must be the same as one call.

 The task extension size, the initalization function and the save
 and restore functions can be specified on a by task base by
 means of the following structure:

 NOTE: current implementations of PXROS do not garantee, that scheduling
 extension function activations caused by remote procedure activations
 are executed on system stack in system mode.
 They may also be executed on user stack or in user mode (this is a bug).

 */

typedef enum
{
    PXSchedExtForeignHnd_Bgn,
    PXSchedExtForeignHnd_End,
    PXSchedExtOwnHnd_Bgn,
    PXSchedExtOwnHnd_End,
    PXSchedExtSched,

    PXSchedExt_Lastcode
} PxSchedExtCause_t;

typedef struct
{
    //! extension size in bytes
    PxUInt_t tse_size;
    //! initialization function
void PXFun_q (*tse_init)(PxDataAddr_t, PxArg_t );
//! save function
void PXFun_q (*tse_save)(PxDataAddr_t, PxSchedExtCause_t);
//! restore function
void PXFun_q (*tse_restore)(PxDataAddr_t, PxSchedExtCause_t);
} PxTaskSchedExt_T;

typedef PxTaskSchedExt_T PXDptr_q *PxTaskSchedExt_t;
typedef PxTaskSchedExt_T const PXDptr_q *PxTaskSchedExt_ct;

typedef void (*PxTaskfun_t)(PxTask_t, PxMbx_t, PxEvents_t);

/*!
 The actual cause for scheduling. Currently, these are

 PXSchedCauseWait
 the previous task waits for a resource
 PXSchedCausePreemption
 a task with an higher priority became ready
 PXSchedCauseIdle
 there was no running task
 */

typedef enum
{
	PXSchedCauseWait = PXSchedExt_Lastcode,
	PXSchedCausePreemption,
	PXSchedCauseIdle
} PxSchedCause_t;

/*!
 Task contexts

 currently highly processor dependent,
 Only for those PXROS variants "struct PxTaskContext_T" is defined in "pxtask_p.hp"
 */

typedef struct PxTaskContext_T PXDptr_q * PxTaskContext_t;
typedef struct PxTaskContext_T PXDptr_q const * PxTaskContext_ct;

typedef PxProtectRegion_T PXDptr_q * PxProtectRegion_t;
typedef PxProtectRegion_T PXDptr_q const * PxProtectRegion_ct;

//! specification of task properties used to create a task according to this specification
typedef struct
{
    //! task name --- for debugging
    const PxChar_t PXDptr_q *ts_name;
    //! task function
    PxTaskfun_t ts_fun;
    //! the tasks "PXMcTaskdefault"
    PxMc_t ts_mc;
    //! the tasks "PXOpoolTaskdefault"
    PxOpool_t ts_opool;
    //! task stack specification
    PxStackSpec_T ts_taskstack;
    //! task interrupt stack specification
    PxStackSpec_T ts_inttaskstack;
    //! the tasks priority
    PxPrio_t ts_prio;
    //! events activating the task if "0" the task is activated immediately, otherwise it waits for one of these events
    PxEvents_t ts_actevents;
    /*! reload value for timeslice account
     if "0" the default is used
     (currently "0", i.e. not
     participating at the timeslicing
     mechanism
     ) */
    PxTicks_t ts_timeslices;
    /*! size of the abortstack in number of abortframes
     PXROS allocates memory for the abortstack of size
     PXAbortFrameSize * ts_abortstacksize
     */
    PxSize_t ts_abortstacksize;
    //! scheduling extension
    PxTaskSchedExt_ct ts_sched_extension;
    //! parameter for the scheduling extensions initialization function
    PxArg_t ts_sched_initarg;
    /*! privileges for the task; its
     interpretation is processor
     dependend;
     use "0" to obtain fully portable
     code */
    PxArg_t ts_privileges;
    /*! access rights of the task
     the access rights are described by mask of allowed access classes
     the mask is always masked with the rights of the creator.
     A mask of 1's inherits all rights from the creator
     */
    PxUInt_t ts_accessrights;
    /*! processor dependent task context
     On the TriCore the initial Task Context defines the valid address
     range of this task
     */
    PxTaskContext_ct ts_context;
    //! this array defines additional valid memory ranges for the task
    PxProtectRegion_ct ts_protect_region;
} PxTaskSpec_T;

typedef PxTaskSpec_T PXDptr_q *PxTaskSpec_t;
typedef PxTaskSpec_T const PXDptr_q *PxTaskSpec_ct;

typedef enum
{
    PXTaskStack, PXTaskIntStack,

    PXTaskLastStack
} PxTaskStackTypes_t;

#ifdef __cplusplus
extern "C"
{
#endif
    extern PxTask_t PxTaskCreate(PxOpool_t, PxTaskSpec_ct, PxPrio_t, PxEvents_t);
#ifdef __cplusplus
}
#endif
#endif // __pxtaskspec__



/*******************************************************************************
********************************************************************************
PXROS Initialization

*/



#ifndef __pxinit_pub__
#define __pxinit_pub__



#ifndef __pxinitstruct_hp__
#define __pxinitstruct_hp__

/*
 *	Processor dependend part of initstruct.
 */
#define __PDP_InitStruct							\
        /* start address of the core */                                         \
        const unsigned int is_core_start;                                       \
	/*! TriCore Memory Protection initialization				\
		The system has 16 data protection register pair and 		\
		8 code protection register pairs which are 			\
		defined through a lower and upper bound address and the		\
		protection rights						\
		we use 8 data pairs and 4 code pairs for the system             \
                all others are used for tasks                                   \
	*/									\
	/*! the protection register definition for of the PXROS system */	\
        const PxCodeProtectSet_T *is_sys_code;                            \
        const PxDataProtectSetInit_T *is_sys_data;                            \
	/*! the code protection register definition for of the application */	\
        const PxCodeProtectSet_T *is_task_code;                                 \
        /*! the pxros system stack */                                           \
        const PxUInt_t *is_system_stack;                                        \
        const PxUInt_t is_system_stack_size;                                    \
        /*! number of global accessible objects */                             \
        const PxUInt_t is_global_obj_number;

#endif /* __pxinitstruct_hp__ */


/*!
 Global Scheduling Extension specification
 allows to bring user specified save/restore actions into PXROS
 scheduling for all tasks.
 This is essential if more resources should be mulitiplexed for all
 tasks.
 --- usually not supported
 */
typedef struct
{
    //! extension size in bytes
    PxUInt_t gse_size;
    //! initialization function
    void PXFun_q PXStackParm (*gse_init)(PxDataAddr_t PXStackparmThroughVarargs);
    //! save function
    void PXFun_q (*gse_save)(PxDataAddr_t, PxSchedExtCause_t);
    //! restore function
    void PXFun_q (*gse_restore)(PxDataAddr_t, PxSchedExtCause_t);
} PXData_q PxGlobalSchedExt_T;

typedef PxGlobalSchedExt_T PXDptr_q *PxGlobalSchedExt_t;
typedef PxGlobalSchedExt_T const PXDptr_q *PxGlobalSchedExt_ct;

/*!
 Initialization Specification
 Data Structure specifying the initial properties of a PXROS application system
 As current specification items are included

 -  a description of the system memory class and its initial block
 -  the number of PXROS objects and the maximal size of
    their names and the initial task memory class
 -  a specification of the initialization tasks properties

 The data structure is used as parameter to "PxInit".
 */
typedef struct
{
    /*! specification of the system memory class' properties and
     of the first initial block;
     this block must be large enough to allocate the task
     control blocks of all tasks
     */
    /*! type of the system memory class
     currently only "PXMcVarsized", "PXMcVarsizedAdjusted" and "PXMcBuddyMemory" are allowed */
    PxMcType_t is_sysmc_type;
    /*! blocksize/alignment/adjustment of system memory class
     currently only relevant for "PXMcVarsizedAdjusted", it then
     gives the adjustment */
    PxSize_t is_sysmc_size;
    //! first block in system memory
    PxMemAligned_t PXDptr_q *is_sysmc_blk;
    //! size of first block
    PxSize_t is_sysmc_blksize;

    /*! type of the global object memory class
     currently only "PXMcVarsized", "PXMcVarsizedAdjusted" and "PXMcBuddyMemory" are allowed */
    PxMcType_t is_objmc_type;
    /*! blocksize/alignment/adjustment of global memory class
     currently only relevant for "PXMcVarsizedAdjusted", it then
     gives the adjustment */
    PxSize_t is_objlmc_size;
    //! first block in global memory
    PxMemAligned_t PXDptr_q *is_objmc_blk;
    //! size of first block in of global memory
    PxSize_t is_objmc_blksize;

    /*! Specification of the number of PXROS objects (including tasks) and
     the maximal length of object names.
     PXROS needs 2 PXROS objects for internal purposes: the
     default system memory class "PXMcSystemdefault" and
     the default object pool "PXOpoolSystemdefaut".
     The name length specification is only interpreted in PXROS versions
     generated with the "MONITOR_OBJECTS" configuration attribute;
     in these versions the size of object memory area is increased by
     this amount (number of objects * name length).
     Object names larger then the maximum size are truncated to this size.
     */
    /*! number of PXROS objects */
    PxUInt_t is_obj_number;

    /*! maximal length of object names; longer names are truncated;
     only interpreted in version with the "MONITOR_OBJECTS" attribute
     increases the size of objects; */
    PxSize_t is_obj_namelength;

    /*! the PXROS initialization creates the first task of the
     system, the "initial task"; its properties are described by a
     standard task specification structure.
     Some components of the specification are not interpreted,
     others must satisfy some restrictions:
     -  the component "ts_actevents" is not interpreted
     -  "ts_mc" must be "PXMcSystemdefault" or "PXMcTaskdefault"
     -  "ts_opool" must be "PXOpoolSystemdefault"
     -  "ts_taskstack.stk_type" must not be "PXStackAlloc"
     (may lead to stack overflow detection) */
    PxTaskSpec_ct is_inittask;

    /*! enables extended monitoring only interpreted in versions
     with "MONITOR_OBJECTS" defined currently only able to enable
     memory monitoring */
    PxInt_t is_monitoring;

    /*! global scheduling extension ignored, if PXROS does not
     support global scheduling extensions */
    PxGlobalSchedExt_ct is_schedext;

    /*! specification of the task memory class' properties and
     of the first initial block;
     */
    /*! type of the task memory class
     currently only "PXMcVarsized", "PXMcVarsizedAdjusted" and "PXMcBuddyMemory" are allowed */
    PxMcType_t is_taskmc_type;
    /*! blocksize/alignment/adjustment of task memory class
     currently only relevant for "PXMcVarsizedAdjusted", it then
     gives the adjustment */
    PxSize_t is_taskmc_size;
    //! first block in task memory
    PxMemAligned_t PXDptr_q *is_taskmc_blk;
    //! size of first block
    PxSize_t is_taskmc_blksize;

    /*! Processor dependend part of initstruct.
     Defined in pxinitstruct.hp.
     */
    __PDP_InitStruct;

} PXData_q PxInitSpec_T;

typedef PxInitSpec_T PXDptr_q *PxInitSpec_t;
typedef PxInitSpec_T const PXDptr_q *PxInitSpec_ct;
typedef const PxInitSpec_ct PxInitSpecsArray_t[PX_NO_OF_CORES];
#define NULL_PxInitSpec ((PxInitSpec_T *)0)

/*!
 Extended monitoring
 used as selectors for the "is_monitoring" component in "PxInitSpec_T";
 they can be or'ed together
 */

/*! enables monitoring of variable sized
 memory blocks:
 This macro is no longer available and has no affect.
 */
#define PXMonitorMemory             (1 << 0)

/*! enables parameter access checks for
 variants of PXROS that support this */
#define PXMonitorAccess             (1 << 1)

/*! allows timeslicing to be implemented
 by application specific function
 --- usually not supported
 */
#define PXNonstandardTimeslicing    (1 << 15)

#ifdef __cplusplus
extern "C"
{
#endif

    extern PxError_t PxInit(PxInitSpecsArray_t, PxUInt_t);
    extern void PxPanic(void);
    extern const PxChar_t * PxVersion(void);
    extern PxCoreId_t PxGetCoreId(void);
    extern PxError_t _PxInit_Start_Cores(PxUChar_t coreId, PxInitSpec_ct  initspec);
    extern void PxAbort(PxError_t);

#ifdef __cplusplus
}
#endif

#endif /* __pxinit_pub__ */



/*******************************************************************************
********************************************************************************
Trace Support

*/



#ifndef __pxtrc_pub__
#define __pxtrc_pub__


#define PXVT_NONE ((unsigned long) 0) 
#define PXVT_APPINFO ((unsigned long) 1 << 0)
#define PXVT_DELAY ((unsigned long) 1 << 1)
#define PXVT_DIE ((unsigned long) 1 << 2)
#define PXVT_ERROR ((unsigned long) 1 << 3)
#define PXVT_EVENT ((unsigned long) 1 << 4)
#define PXVT_INTERRUPT ((unsigned long) 1 << 5)
#define PXVT_HND ((unsigned long) 1 << 6)
#define PXVT_INTS ((unsigned long) 1 << 7)
#define PXVT_MBX ((unsigned long) 1 << 8)
#define PXVT_MC ((unsigned long) 1 << 9)
#define PXVT_MODE ((unsigned long) 1 << 10)
#define PXVT_MSG ((unsigned long) 1 << 11)
#define PXVT_OBJ ((unsigned long) 1 << 12)
#define PXVT_OPOOL ((unsigned long) 1 << 13)
#define PXVT_PE ((unsigned long) 1 << 14)
#define PXVT_SCHEDULING ((unsigned long) 1 << 15)
#define PXVT_TASK ((unsigned long) 1 << 16)
#define PXVT_TICKS ((unsigned long) 1 << 17)
#define PXVT_TIMESLICE ((unsigned long) 1 << 18)
#define PXVT_TO ((unsigned long) 1 << 19)
#define PXVT_USER ((unsigned long) 1 << 31)

#define PXVT_ALL (PXVT_APPINFO | PXVT_DELAY | PXVT_DIE | PXVT_ERROR | PXVT_EVENT | PXVT_INTERRUPT | PXVT_HND | PXVT_INTS | PXVT_MBX | PXVT_MC | PXVT_MODE | PXVT_MSG | PXVT_OBJ | PXVT_OPOOL | PXVT_PE | PXVT_SCHEDULING | PXVT_TASK | PXVT_TICKS | PXVT_TIMESLICE | PXVT_TO | PXVT_USER)


typedef void (*PxTraceFunc_t)(PxInt_t, PxArg_t, PxArg_t, PxError_t);


/*
 *  PxTraceCtrl command codes
 */
typedef enum
{
    PXTraceSetTraceFunction, /* set the PXROS trace function */
    PXTraceStart, /* start PXROS trace */
    PXTraceStop, /* stop PXROS trace */
    PXTraceGetState, /* returns the current state of PXROS tracing service */
    PXTraceSetGroupMask, /* set the complete PXROS trace group mask */
    PXTraceGetGroupMask, /* get the complete PXROS trace group mask */
    PXTraceEnableGroup, /* enable individual groups */
    PXTraceDisableGroup, /* disable indiviual groups */
    PXTraceEnableTask,     /* enable tracing for a task */
    PXTraceDisableTask, /* disable tracing for a task */
    PXTraceGetTaskState     /* get mode bit for task tracing */
} PxTraceCtrl_t;

#ifdef __cplusplus
extern "C"
{
#endif
    extern PxMsg_t PxTraceGetBuffer(PxOpool_t opool);
    extern PxError_t PxTraceAssignBuffer(PxAligned_t *, PxULong_t, PxULong_t);
    extern PxULong_t PxTraceCtrl(PxTraceCtrl_t, PxArg_t);
    extern void PxTrace(PxInt_t, PxArg_t, PxArg_t, PxError_t);
    extern void PxTrace_Hnd(PxInt_t, PxArg_t, PxArg_t, PxError_t);
    extern PxError_t PxSetTraceFunc(PxTraceFunc_t);
#ifdef __cplusplus
}
#endif

#endif /* __pxtrc_pub__ */





/*******************************************************************************
********************************************************************************
Support Macros

*/



#ifndef __pxsupport_hp__
#define __pxsupport_hp__

/******************************************************************************
 *******************************************************************************
 Size Conversion
 all memory blocks administered by PXROS should be aligned; on some
 processors they MUST be aligned. On the other hand, size specifications
 of memory blocks are usually given in bytes. The following
 macro converts from sizes given in byte units to sizes given in
 PxAligned_t units by rounding up.
 It may support the allocation of such memory blocks,
 as shown in the following example

 #define	MEMBLOCK_SIZE	1000

 PxAligned_t memblock[PXConvertByteToAlignedSize_Up(MEMBLOCK_SIZE)];

 An alternative would be to allocate directly in PxAligned_t units
 and use sizeof(memblock) where sizes in bytes are required.
 */

#define PXConvertByteToAlignedSize_Up(size_in_bytes)			\
	(((size_in_bytes) + (sizeof(PxAligned_t)-1)) / sizeof(PxAligned_t))

/******************************************************************************
 *******************************************************************************
 Conversions to and from PxArg_t
 Many PXROS services use arguments of type "PxArg_t".
 "PxArg_t" is garanteed to be large enough to hold "long" and "pointer"
 values. This allows to pass the usual configuration parameters,
 i.e. integers, events, longs and pointers, to these services through
 a "PxArg_t" argument, if appropriate casting is used.

 Unfortunately, the BSO Tasking compiler for the C16x microcontroller
 family up to release 5.0 does not symmetrically cast
 pointer to "PxArg_t" and back again in the "small" memory model.

 To handle this problem, the following set of macros is defined:
 PXConvertDptrToArg(dptr)		to safely convert data pointer "dptr"
 to "PxArg_t"
 PXConvertIdToArg(pxros_id)		to safely convert "pxros_id" to "PxArg_t"
 PXConvertArgToDptr(arg)		to safely convert "arg" to a dptr
 "arg" must have been coded by
 "PXConvertDptrToArg"
 PXConvertArgToId(arg)		to safely convert "arg" to a PXROS id
 "arg" must have been coded by
 "PXConvertIdToArg"
 */

#define PXConvertDptrToArg(dptr)	((PxArg_t)(dptr))

#define PXConvertIdToArg		PXConvertDptrToArg

#define PXConvertArgToDptr(arg)		((char *)(arg))

#define PXConvertArgToId(arg)		((PxDataAddr_t)(arg))

#endif /* __pxsupport_hp__ */




/* PXROS Handler call */


/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		Implementation of the PXROS Hndcall for TriCore
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

#ifndef __pxhndcall_hp__
#define __pxhndcall_hp__

/* we use a special call interface for PxHndcall. The Trampoline function
 has to be defined with the attribute pxhndcall to force the compiler to
 use a special call mechanism. the handler will be called through a SVC
 and passes the parameters in special registers
 A12 - the function to call, referred to as '___' in this macro
 A13 - the static chain to get access to the local variables of the caller
 Since the compiler expects the parameter sv in D4 and a second parameter in A4
 we have to define the second parameter as a pointer
 */
/*!
 \brief _PxHndcall PXROS handler call

 \synopsis PxArg_t _PxHndcall(handler, task, varsize, parms...);

 \param handler function to be called in supervisor mode
 \param task calling task (not used on tricore)
 \param varsize total size of the arguments in bytes (not used on tricore)
 \param parms... arguments for handler function
 */
#define _PxHndcall(handler, task, varsize, parms...) (PxArg_t)({		\
  __attribute__ ((pxhndcall,noinline)) PxArg_t ___(PxSvc_t sv  __attribute__ ((unused)), unsigned int *tid __attribute__ ((unused))) { return handler(parms); }\
  ___(SV_HNDCALL, 0);							\
  })

#endif /* __pxhndcall_hp__ */



/*******************************************************************************
********************************************************************************
system mailbox service

*/


#ifndef __pxmbx_req_pub__
#define __pxmbx_req_pub__

//!Mailbox Request Ids
typedef enum
{
    /* Start with magic number to prevent accidental mix-up with a
     * zero-initialized variable when this enum type is expected. */
    _PxSrv0_ReqMbxId = 0x76543210,
    _PxSrv1_ReqMbxId,
    _PxSrv2_ReqMbxId,
    _PxSrv3_ReqMbxId,
    _PxSrv4_ReqMbxId,
    _PxSrv5_ReqMbxId,
    _PxSrv6_ReqMbxId,
    _PxSrv7_ReqMbxId,
    _PxSrv_ReqMbxIdMax  /* to identify overflowing values */
} PxMbxReq_t;

#define _PxNameSrvReqMbxId       _PxSrv0_ReqMbxId
#define _PxTcpAccessReqMbxId     _PxSrv1_ReqMbxId
#define _PxEfsSrvReqMbxId        _PxSrv2_ReqMbxId
#define _PxNfsSrvReqMbxId        _PxSrv3_ReqMbxId
#define _PxMsgrelServiceReqMbxId _PxSrv4_ReqMbxId

#ifdef __cplusplus
extern "C"
{
#endif

extern PxMbx_t PxMbxRequestMbx(PxMbxReq_t);
extern PxError_t PxMbxRegisterMbx(PxMbxReq_t, PxMbx_t);
extern PxError_t PxGetGlobalServerMbx(PxCoreId_t ServerCore, PxMbxReq_t);

#ifdef __cplusplus
}
#endif
#endif /* __pxmbx_req_pub__ */



/*******************************************************************************
********************************************************************************
Utility Functions

*/



#if !defined(__pxutil_pub__) && !defined(__pxutil__)
#define __pxutil_pub__

#ifdef __cplusplus
extern "C"
{
#endif

    extern void PxBcopy(PxUChar_t const *, PxUChar_t *, PxSize_t);
    extern PxInt_t PxBcmp(PxUChar_t const *, PxUChar_t const *, PxSize_t);
    extern void PxBzero(PxUChar_t *, PxSize_t);
    extern PxSize_t PxStrlen(PxChar_t const *);
    extern PxSize_t PxStrnlen(PxChar_t const *, PxSize_t);
    extern PxInt_t PxStrcmp(PxChar_t const *, PxChar_t const *);
    extern PxInt_t PxStrncmp(PxChar_t const *, PxChar_t const *, PxSize_t);
    extern PxChar_t * PxStrcpy(PxChar_t *, PxChar_t const *);
    extern PxChar_t * PxStrncpy(PxChar_t *, PxChar_t const *, PxSize_t);
    extern PxChar_t * PxStrncpy_Term(PxChar_t *, PxChar_t const *, PxSize_t);

#ifdef __cplusplus
}
#endif

#endif // __pxutil_pub__



/*******************************************************************************
********************************************************************************
Non SVC Service Functions
*/

#ifndef __pxlib_h__
#define __pxlib_h__

#ifdef __cplusplus
extern "C"
{
#endif

    PxError_t PxSysObjReleaseAllObjects(void);

#ifdef __cplusplus
}
#endif

#endif // __pxlib_h__





#ifndef __pxintsvenum_h__
#define __pxintsvenum_h__

typedef enum
{


	






  
 

  	PxTickDefine_IntHnd_SvNo = 1 , 

	PxTaskSignalEvents_IntHnd_SvNo = 2 , 

#define	PxIntLastService	3



} PxIntSvEnum_t;

#endif /* __pxintsvenum_h__ */


/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		PXROS Interrupt/Trap interface for Protected Systems
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/

#ifndef __pxtrap__
#define __pxtrap__

#ifdef __cplusplus
extern "C"
{
#endif

    /*
     * number of interrupt entries in the vector table IntrDisptab
     * defined in pxinterruptvectortable.cpp
     */
    extern const PxUInt_t PxInt_Max_Intrs;

#define PXTrap_MAX_TRAPS 	8

#define PXTrapMinTrapno		0
#define PXTrapMaxTrapno		(PXTrap_MAX_TRAPS-1)


    // subtracted from real interrupt number as offset into IntrDisptab
    // because the first two real interrupt numbers are reserved
#define PXIntMinIntno		2


/* The Evaluation Version only supports up to 16 interrupts per core */
#define PXInt_MAX_INTRS 	(16 - PXIntMinIntno)


    // last index + 1 into IntrDisptab
#define PXIntMaxIntno		(PxInt_Max_Intrs)

    /* type of interrupt handler
     normal interrupts will be called in the context of the installing task
     fast interrupts will be called in system mode with supervisor protection
     */
    typedef enum
    {
        ILLEGAL_INTERRUPT = 0, NORMAL_INTERRUPT = 1, /* call an interrupt handler as a system job on PXROS level */
        FAST_INTERRUPT = 2, /* call an interrupt handler in system mode */
        SERVICE_INTERRUPT = 3, /* call a PXROS handler service as interrupt handler */
        FAST_CONTEXT_INTERRUPT = 4,
    /* call an interrupt handler on the interrupt level in task context */
    } PxIntType_t;

    /*
     * the function type of an interrupt handler
     */
    typedef void (*PxIntHandler_t)(PxArg_t);

    /* This structure describes trap handlers and their arguments.
     * Trap handler should always return nonzero if they have handled the trap
     */
    typedef union {
        struct {
            PxUShort_t tin;     /* trap identification number */
            PxUShort_t trapno;  /* trap number */
        } t;
        PxUInt_t trapno_tin;
    } PxTrapTin_t;
    typedef struct _TrapHnd_arg
    {
        PxBool_t
        (*hnd_handler)(PxTrapTin_t trapTin, PxUInt_t hnd_arg, PxUInt_t runtaskId,
                       PxUInt_t dstr, PxUInt_t *deadd, TC_CSA_t *csa);
        PxUInt_t hnd_arg;
        void *hnd_task;
    } PxTrapHnd_arg;


    /* This structure describes interrupt handlers and their arguments.  */
    typedef struct _IntHnd_arg
    {
        PxIntType_t hnd_type _PXWORD_SIZE; /* type of the interrupt */
        union
        {
            /*
             * call a PXROS handler service as interrupt handler
             */
            struct __service
            {
                void (*hnd_service)(PxArg_t, PxEvents_t);
                PxArg_t hnd_arg;
                PxEvents_t events;
                void *hnd_task;
            } service;
            /*
             * call an interrupt handler in system mode
             */
            struct __fast
            {
                PxIntHandler_t hnd_handler;
                PxArg_t hnd_arg;
                void *hnd_task;
            } fast;
            /*
             * call an interrupt handler as a system job on PXROS level
             */
            struct __normal
            {
                void *hnd_intObj;
                void *hnd_task;
            } normal;
            /*
             * call an interrupt handler on the interrupt level in task context
             */
            struct __fast_cxt
            {
                PxIntHandler_t hnd_handler;
                PxArg_t hnd_arg;
                void *hnd_task;
            } fast_cxt;
        } type;
    } PxIntHnd_arg;

    /*
     * Initialization must be called before any use of this module
     */
    /*
     *    PxIntInitVectab and PxTrapInitVectab are called during initialisation with PxInit().
     *    These functions may not be called by the application!
     *    These functions may be overwritten by application specific functions.
     */
    void PxIntInitVectab(void);
    void PxTrapInitVectab(void);

    /* Installation of "C"-function as trap/interrupt handler */

    /* installs the "C"-function "handler" as interrupt handler for
     interrupt number "intno". Whenever this interrupt occurs,
     "handler" is called with argument "arg".

     ATTENTION: "handler" MUST FOLLOW the standard GNU "C" calling
     conventions!

     ATTENTION: The function is not protected against the abort mechanism!
     */
    /*
     * Installation of "C"-function as a normal interrupt handler
     * the handler is called as a system job on PXROS level in the context
     * of the installing task
     */
    PxError_t PxIntInstallHandler(PxUInt_t intno, PxInterrupt_t intObj, PxIntHandler_t handler,
                                  PxArg_t arg);
    /*
     * Installation of "C"-function as fast interrupt handler
     * this handler will be called in supervisor mode with supervisor protection
     */
    PxError_t
    PxIntInstallFastHandler(PxUInt_t intno, PxIntHandler_t handler, PxArg_t arg);

    /*
     * installs a PXROS handler service directly as an interrupt handler
     */
    PxError_t
    PxIntInstallService(PxUInt_t intno, PxIntSvEnum_t service, PxArg_t arg, PxEvents_t events);

    /*
     * Installation of "C"-function as a fast interrupt handler  called in the context
     * of the installing task on interrupt level
     */
    PxError_t PxIntInstallFastContextHandler(PxUInt_t intno, PxIntHandler_t handler, PxArg_t arg);

    /* the same for traps. Trap handler gets 6 arguments. The
     * trap number and TIN,
     * user defined Argument
     * ID of the task, that caused the trap
     * contents of DSTR
     * contents of DEADD
     * pointer to the saved CSA
     */
    PxError_t
    PxTrapInstallHandler(PxUInt_t trapno,
                         PxBool_t(* traphandler)(PxTrapTin_t, PxUInt_t, PxUInt_t, PxUInt_t, PxUInt_t *,TC_CSA_t *),
                         PxUInt_t arg);

    /*
     * internal pxros service to be used inside of a trap handler to get the actual
     * protection set of a task.
     * The call is restricted to supervisor mode using protection set PRS_TSK_KERNEL.
     */
    PxDataProtectSet_T *PxTrapGetTaskProtection(PxTask_t);

    /* The default handlers for class 0-7 traps; if the CPU is programmed to
     honor debug instructions, program control will return to the debugger
     and you can see which trap was triggered.  */
    extern void PxTrapAbort(int, int, TC_CSA_t *) __attribute__ ((interrupt_handler));

    extern void __class_0_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_1_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_2_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_3_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_4_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_5_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_6_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));
    extern void __class_7_trap_handler(unsigned short,unsigned int, unsigned int *) __attribute__ ((interrupt_handler));

    // default interrupt handler of PXROS lookup the handler int the interrupt dispatch table
    // IntrDisptab and call the handler/service in the appropriate context
    void _PxHandleInterrupt(void) __attribute__ ((interrupt_handler));
    void _PxServiceEnter(void) __attribute__ ((interrupt_handler));

#ifdef __cplusplus
}
#endif

#endif /* __pxtrap__ */




/*******************************************************************************
********************************************************************************
Processor dependent Functions

*/


#ifndef __px_pdp_hp__
#define __px_pdp_hp__

#ifdef __cplusplus
extern "C"
{
#endif
    /*
     * All register which will be accessed through these funtion must in the valid
     * address range of the calling task. Therefore the address ranges of the peripheral
     * registers must added the valid memory ranges of the calling task
     */

    // read a peripheral register
    PxULong_t PxRegisterRead(volatile PxULong_t *addr);
    // write to a peripheral regsiter
    PxError_t PxRegisterWrite(volatile PxULong_t *addr, PxULong_t val);
    // modify reg with val according to mask
    PxError_t PxRegisterSetMask(volatile PxULong_t *addr, PxULong_t mask, PxULong_t val);

    // the handler versions must be called from handlers,
    // which are executed in task context in mode User0
    // (installed via PxIntInstallHandler)
    PxULong_t PxRegisterRead_Hnd(volatile PxULong_t *addr);
    PxError_t PxRegisterWrite_Hnd(volatile PxULong_t *addr, PxULong_t val);
    PxError_t PxRegisterSetMask_Hnd(volatile PxULong_t *addr, PxULong_t mask, PxULong_t val);

    // call all initialization function from _PxInitializeTable[]
    void PxInitializeBeforePxInit(void);
#ifdef __cplusplus
}
#endif

/*!
 \brief _PxInitcall define a function which can be called before PxInit
 \synopsis _PxInitcall (void func, parms...);

 \param func function to call
 \param parms... parameters to function
 */

// define a wrapper function to call function with the correct parameters from the
// initialization table A pointer to this function will be generated in the
// section .pxinit
#define _PxInitcall(function, parms...)             \
        static __attribute__ ((used)) void function##___(void) { \
        __asm__ (".section .pxinit,\"a\",@progbits\n.word %0\n.previous " :: "i" (function##___)); \
        function(parms);  \
        }

#endif // __px_pdp_hp__


/*******************************************************************************
********************************************************************************
PXROS object sizes

*/

/*************************************************************************
 *
 *  Project:            PXROS HR
 *  Function:           Include header for pxros object sizes
 *
 *************************************************************************
 *
 *  Copyright 2020 by HighTec EDV Systeme GmbH
 *
 ************************************************************************/
#include "pxobjsizes.h"



#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __pxdef__ */

