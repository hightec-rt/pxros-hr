

 


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


#ifndef ___errno__
#define	___errno__

static	char	const * const errtext[]={

#define	_PXWarning	0
#define	_PXLogError	1
#define	_PXError	2
#define	_PXFatal	3

	/* PXERR_NOERROR=	0 */		"no error occured",
	/* PXERR_TIMESLOTLIST_OVERFLOW=1 */		"*TIME*",

	/* PXERR_ABORTSTACK_OVERFLOW=2 */		"Abortstack overflow",
	/* PXERR_ABORT_ILLEGAL_CALL=3 */		"PxExpectAbort: corrupted call chain in task %d",
	/* PXERR_DELAY_ILLDELAY=4 */		"Invalid delay object `%d'",
	/* PXERR_DELAY_USED_BY_INTERRUPT=5 */		"Delay object %d currently in use by interrupt handler",
	/* PXERR_DLQU_ILLELEM=6 */		"Invalid doubly linked queue element `%p'",
	/* PXERR_DLQU_ILLQUEUE=7 */		"Invalid doubly linked queue `%p'",
	/* PXERR_EVENT_ZERO=8 */		"Event must not be zero",
	/* PXERR_GENID_NOT_INITED=9 */		"`PxGenidObtain' called without previous `PxGenidInit'",
	/* PXERR_INIT_ILLALIGN=10 */		"Invalid memory block or size alignment in initialization `%p' `%d'",
	/* PXERR_INIT_ILLMCTYPE=11 */		"Type `%d' for PXMcSystemdefault is different from PXMcVarsized and PXMcVarsizedAdjusted",
	/* PXERR_INIT_NOMEM=12 */		"Not enough memory for initialization",
	/* PXERR_ILL_NULLPOINTER_PARAMETER=13 */		"illegal nullpointer parameter in call",
	/* PXERR_INIT_SEGBOUNDARY=14 */		"Block `%p[%x]' crosses segment boundary",
	/* PXERR_INTERRUPT_ILLINTERRUPT=15 */		"Invalid interrupt object `%d'",
	/* PXERR_INTERRUPT_USED_BY_INTERRUPT=16 */		"Interrupt object %d currently in use by interrupt handler",
	/* PXERR_INTR_ILL=17 */		"Only the installing task may override its installed interrupt handlers",
	/* PXERR_MBX_HNDINSTALLED=18 */		"Mailbox handler already installed",
	/* PXERR_MBX_ILLMBX=19 */		"Invalid maibox `%d' in mailbox command",
	/* PXERR_MBX_ILLMODE=20 */		"Invalid mailbox handler mode `%d'",
	/* PXERR_MBX_LEFTMESSAGES=21 */		"Mailbox delete failed: messages left in mailbox",
	/* PXERR_MBX_PRIVMBXDELETE=22 */		"Mailbox delete failed: private mailbox",
	/* PXERR_MBX_TASKWAITS=23 */		"Mailbox delete failed: task(s) waiting at mailbox",
	/* PXERR_MC_ILLALIGN=24 */		"Invalid memory block or size alignment in memory insert `%p' `%d'",
	/* PXERR_MC_ILLMC=25 */		"Invalid memory class `%d' in memory class operation",
	/* PXERR_MC_ILLSIZE=26 */		"Insufficient block size `%d < %d'",
	/* PXERR_MC_ILLTYPE=27 */		"Invalid memory class type `%d'",
	/* PXERR_MC_INCONSISTENCY=28 */		"Inconsistency in memory class `%d': blk `%p'",
	/* PXERR_MC_NOMEM=29 */		"Insufficient memory to satisfy request",
	/* PXERR_MC_NOTEMPTY=30 */		"Memory class delete failed: not empty",
	/* PXERR_MC_SIZETOOBIG=31 */		"Fixed block size to small to satisfy request `%d < %d'",
	/* PXERR_MC_SEGBOUNDARY=32 */		"Block `%p[%x]' crosses segment boundary",
	/* PXERR_MC_DAMAGED_BLOCK=33 */		"Block %p in memory class %d has been damaged",
	/* PXERR_MC_USE_BUDDY_FOR_MSG_ONLY=34 */		"Use Buddy memory classes for messages only!",
	/* PXERR_MC_NOT_ALLOCATED=35 */		"Task has not allocated the memory block %p",
	/* PXERR_MC_NOT_ALLOCATED_FROM=36 */		"Task has not allocated the memory block %p from class %d",
	/* PXERR_MSG_ABORTED=37 */		"Message command aborted",
	/* PXERR_MSG_ILLMSG=38 */		"Invalid message `%d'",
	/* PXERR_MSG_ILLOWNER=39 */		"Invalid message owner `%d'",
	/* PXERR_MSG_ILLSIZE=40 */		"Message size would exceed buffer size",
	/* PXERR_MSG_ILLUSER=41 */		"Invalid user `%d' for message `%d'",
	/* PXERR_MSG_NOMSG=42 */		"Insufficient memory to satisfy message request",
	/* PXERR_MSG_NOT_IMPLEMENTED=43 */		"request not implemented",
	/* PXERR_MSG_RELMBX_INSTALLED=44 */		"release mailbox already installed",
	/* PXERR_MSG_NOT_CLOSED=45 */		"message was not closed before open",
	/* PXERR_MSG_ILL_NEW_DATA=46 */		"Illegal new message data pointer",
	/* PXERR_MSG_ILL_ALIGN=47 */		"Illegal aligned data pointer for PxMsgEnvelop",
	/* PXERR_MSG_ILL_SIZE=48 */		"Illegal data size for PxMsgEnvelop",
	/* PXERR_OBJ_ABORTED=49 */		"Object command aborted",
	/* PXERR_OBJ_ILLOBJ=50 */		"Invalid object `%d'",
	/* PXERR_OBJ_NOOBJ=51 */		"No object available to satisfy request",
	/* PXERR_OPOOL_ILLCAPACITY=52 */		"Insufficient capacity in source object pool",
	/* PXERR_OPOOL_ILLDELETE=53 */		"Object pool delete failed: no superior object pool",
	/* PXERR_OPOOL_ILLOPOOL=54 */		"Invalid object pool `%d'",
	/* PXERR_OPOOL_ILLSRC=55 */		"Source of a real object pool must be real",
	/* PXERR_OPOOL_ILLTYPE=56 */		"Invalid object pool type",
	/* PXERR_OPOOL_TASKWAITS=57 */		"Object pool delete failed: task(s) waiting at object pool",
	/* PXERR_PE_ILLPE=58 */		"Perodic: invalid reference to a periodic object",
	/* PXERR_PXHND_ILLCALL=59 */		"PXROS handler service called by task or interrupt handler",
	/* PXERR_SELF_ABORTED=60 */		"Request aborted",
	/* PXERR_TASK_RETURNS=61 */		"Task %d returns without `PxExit'",
	/* PXERR_TASK_DYING_WHILE_IN_USE=62 */		"Dying task still in use",
	/* PXERR_TASK_DIESRV_INITIALIZED=63 */		"Exitserver already initialized",
	/* PXERR_TASK_DIESRV_NOT_INITED=64 */		"Exitserver not yet initialized",
	/* PXERR_TASK_ILLCALL=65 */		"Task service called by handler",
	/* PXERR_TASK_ILLPRIO=66 */		"Invalid priority `%d >= %d'",
	/* PXERR_TASK_ILLRDYFUN=67 */		"Invalid ready function detected",
	/* PXERR_TASK_ILLSTACKSPECTYPE=68 */		"Invalid stack type `%d'",
	/* PXERR_TASK_ILLTASK=69 */		"Invalid task `%d'",
	/* PXERR_TASK_SCHEDEXT_NOT_CONFIGURED=70 */		"Task extensions not configured in this PXROS version",
	/* PXERR_TASK_STACKOVERFLOW=71 */		"Stack overflow for task `%d'",
	/* PXERR_TASK_STACKUNKNOWN=72 */		"Stack begin could not be determined: specify stack size",
	/* PXERR_TASK_STKMEM=73 */		"Insufficient memory to allocate task stack",
	/* PXERR_TASK_TCBMEM=74 */		"Insufficient memory to allocate task control block",
	/* PXERR_TASK_ILLPRIV=75 */		"Illegal privilege for tasks",
	/* PXERR_TASK_STACK_SEGBOUNDARY=76 */		"Task stack `%p[%x]' crosses segment boundary",
	/* PXERR_TASK_STACK_ILLALIGN=77 */		"Invalid task stack alignment `%p[%x]'",
	/* PXERR_TASK_ILLREGION=78 */		"The task requires memory protection regions that are not a subset of its parent",
	/* PXERR_TO_ILLTO=79 */		"Timeout: invalid reference to a timeout object",
	/* PXERR_TRACE_ILLCTRL=80 */		"Invalid trace control",

	/* PXERR_NAME_UNDEFINED=81 */		"Nameserver: name not defined",
	/* PXERR_NAME_BUFOVERFLOW=82 */		"Nameserver: information buffer too small",
	/* PXERR_NAME_DEFINED=83 */		"Nameserver: name already defined -- use `PxNameRedefine'",
	/* PXERR_NAME_MEM=84 */		"Nameserver: memory shortage",
	/* PXERR_NAME_ILL_REQUEST=85 */		"Nameserver: illegal nameserver request",
	/* PXERR_NAME_NOT_INITIALIZED=86 */		"Nameserver: not yet initialized",

	/* PXERR_MSGREL_INITED=87 */		"MsgRelServer: already initialized",
	/* PXERR_MSGREL_NOT_INITED=88 */		"MsgRelServer: not yet initialized",

	/* PXERR_MEMORY_SHORTAGE=89 */		"Memory shortage",
	/* PXERR_OBJECT_SHORTAGE=90 */		"Object shortage",
	/* PXERR_RESOURCE_SHORTAGE=91 */		"Resource shortage",
	/* PXERR_CONNECTION_FAILED=92 */		"Connection failed",
	/* PXERR_COMMUNICATION_FAILED=93 */		"Communication failed",
	/* PXERR_REQUEST_FAILED=94 */		"Request failed",
	/* PXERR_REQUEST_ILLEGAL=95 */		"Request illegal",
	/* PXERR_REQUEST_INVALID=96 */		"Request invalid",
	/* PXERR_REQUEST_INVALID_PARAMETER=97 */		"Request with invalid parameter",
	/* PXERR_REQUEST_INVALID_CONTEXT=98 */		"Request in invalid context",
	/* PXERR_REQUEST_CONFIGURATION_LIMITATION=99 */		"Request exceeds some configuration limitation",
	/* PXERR_REQUEST_IMPLEMENTATION_RESTRICTION=100 */		"Request violates some implementation restriction",
	/* PXERR_REQUEST_TIMEOUT=101 */		"Request timed out",
	/* PXERR_REQUEST_ABORTED=102 */		"Request aborted",
	/* PXERR_REQUEST_CANCELED=103 */		"Request canceled",
	/* PXERR_SERVICE_NOT_CONFIGURED=104 */		"Service %d has not been configured into your PXROS",
	/* PXERR_ILLEGAL_SERVICE_CALLED=105 */		"Service %d is not defined in PXROS",
	/* PXERR_PROT_NOFREE_ENTRY=106 */		"no free protection entry",
	/* PXERR_PROT_ILL_HANDLE=107 */		"illegal protection handle %d",
	/* PXERR_PROT_ILL_REGION=108 */		"illegal protection region definition",
	/* PXERR_PROT_PERMISSION=109 */		"Tried to set a protection without permission",
	/* PXERR_ILLEGAL_ACCESS=110 */		"Access through parameter pointer %p in size %d is illegal",
	/* PXERR_ACCESS_RIGHT=111 */		"No access right for this service",
	/* PXERR_SYSJOBLIST_INCONSISTENCY=112 */		"Inconsistency in the system job list",
	/* PXERR_GLOBAL_SYSJOBLIST_INCONSISTENCY=113 */		"Inconsistency in the global system job list",
	/* PXERR_GLOBAL_MSG_RELMBX_NOT_INSTALLED=114 */		"release mailbox for global messages not installed",
	/* PXERR_GLOBAL_ILLEGAL_CORE=115 */		"access illegal core",
	/* PXERR_GLOBAL_OBJLIST_INCONSISTENCY=116 */		"Inconsistency between local and global object list initialization",
	/* PXERR_INTERNAL_INCONSISTENCY=117 */		"Inconsistency of internal structures",
	0};
#endif
