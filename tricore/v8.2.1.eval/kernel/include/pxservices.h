/*************************************************************************
 *
 *  Project:		PXROS HR
 *  Function:		Service names as used by "PXTrace"
 *
 ************************************************************************/
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


#ifndef __pxservices__
#define __pxservices__

typedef enum
{



	





 PXSvSetMessageFun ,
 PXSvMbxInstallHnd ,
 PXSvMcTakeBlk ,
 PXSvMcReturnBlk ,
 PXSvMcInsertBlk ,
 PXSvMsgReceive ,
 PXSvMsgReceive_Waiting ,
 PXSvMsgReceive_EvWait ,
 PXSvMsgReceive_EvWait_Waiting ,
 PXSvMsgReceive_NoWait ,
 PXSvMsgSend ,
 PXSvMsgSend_Prio ,
 PXSvMsgRequest ,
 PXSvMsgRequest_EvWait ,
 PXSvMsgRequest_NoWait ,
 PXSvMsgEnvelop ,
 PXSvMsgEnvelop_EvWait ,
 PXSvMsgEnvelop_NoWait ,
 PXSvMsgRelease ,
 PXSvMsgSetSize ,
 PXSvMsgInstallRelmbx ,
 PXSvMsgAwaitRel ,
 PXSvMsgAwaitRel_Waiting ,
 PXSvMsgAwaitRel_EvWait ,
 PXSvMsgAwaitRel_EvWait_Waiting ,
 PXSvMsgAwaitRel_NoWait ,
 PXSvMsgSetToAwaitRel ,
 PXSvMsgReleaseAllMsg ,
 PXSvTaskGetModebits ,
 PXSvSetModebits ,
 PXSvClearModebits ,
 PXSvSetError ,
 PXSvSetAppinfo ,
 PXSvSetTimeslices ,
 PXSvDie ,
 PXSvAwaitEvents ,
 PXSvAwaitEvents_Waiting ,
 PXSvResetEvents ,
 PXSvTaskCreate ,
 PXSvTaskSuspend ,
 PXSvTaskResume ,
 PXSvTaskSetPrio ,
 PXSvSetTraceFunc ,
 PXSvTraceAssignBuffer ,
 PXSvTraceGetBuffer ,
 PXSvTraceCtrl ,
 PXSvTrace ,
 PXSvGetCoreId ,
 PXSvGetGlobalServerMbx ,
 PXSvObjSetName ,
 PXSvPxmReadRegNo ,  
 PXSvPxmWriteRegNo ,  
 PXSvAbortSetup ,
 PXSvAbortSetjmp ,
 PXSvAbortCleanup ,
 PXSvDelaySched ,
 PXSvTaskSignalEvents ,
 PXSvGetPrivileges ,
 PXSvSetPrivileges ,
 PXSvIntEnable ,
 PXSvIntDisable ,
 PXSvMcGetSize ,
 PXSvMcGetType ,
 PXSvMcResolveDefault ,
 PXSvMsgGetData ,
 PXSvMsgRelDataAccess ,
 PXSvMsgGetSize ,
 PXSvMsgGetBuffersize ,
 PXSvMsgGetOwner ,
 PXSvOpoolGetCurrentCapacity ,
 PXSvOpoolGetType ,
 PXSvOpoolResolveDefault ,
 PXSvGetSavedEvents ,
 PXSvGetAbortingEvents ,
 PXSvGetId ,
 PXSvGetError ,
 PXSvGetAppinfo ,
 PXSvGetTimeslices ,
 PXSvTaskGetPrio ,
 PXSvTaskGetMbx ,
 PXSvTickGetCount ,
 PXSvTickSetTicksPerSecond ,
 PXSvTickGetTimeInMilliSeconds ,
 PXSvTickGetTicksFromMilliSeconds ,
 PXSvVersion ,
 PXSvGetObjsize ,
 PXSvGetAbortFrameSize ,
 PXSvTaskGetSize ,
 PXSvMcGetVarsizedOverhead ,
 PXSvObjGetName ,
 PXSvToRequest ,
 PXSvToStart ,
 PXSvToStop ,
 PXSvToRelease ,
 PXSvToChange ,
 PXSvPeRequest ,
 PXSvPeStart ,
 PXSvPeStop ,
 PXSvPeRelease ,
 PXSvPeChange ,
 PXSvDelayRequest ,
 PXSvDelayRequest_EvWait ,
 PXSvDelayRequest_NoWait ,
 PXSvDelayRelease ,
 PXSvInterruptRequest ,
 PXSvInterruptRequest_EvWait ,
 PXSvInterruptRequest_NoWait ,
 PXSvInterruptRelease ,
 PXSvMbxRequest ,
 PXSvMbxRequest_EvWait ,
 PXSvMbxRequest_NoWait ,
 PXSvMbxRelease ,
 PXSvMcRequest ,
 PXSvMcRequest_EvWait ,
 PXSvMcRequest_NoWait ,
 PXSvMcRelease ,
 PXSvOpoolRequest ,


 PXSvOpoolRequest_NoWait ,
 PXSvOpoolRelease ,
 PXSvTrapInstallHandler ,
 PXSvIntInstallHandler ,
 PXSvIntInstallService ,
 PXSvIntInstallFastHandler ,
 PXSvIntInstallFastContextHandler ,
 PXSvSysInfoGetTaskInfo ,
 PXSvSysInfoGetMsgsInMbx ,
 PXSvSysInfoGetMsgInfo ,
 PXSvSysInfoGetMCInfo ,
 PXSvSysInfoGetMbxInfo ,
 PXSvSysInfoGetDelayInfo ,
 PXSvSysInfoGetOpoolInfo ,
 PXSvSysInfoGetNumberOfObjects ,
 PXSvSysInfoGetObjType ,
 PXSvSysInfoGetPeInfo ,
 PXSvSysInfoGetToInfo ,
 PXSvMsgGetProtection ,
 PXSvMsgSetProtection ,
 PXSvSysInfoGetInterruptInfo ,
 PXSvDieService ,
 PXSvServiceTaskInit ,
 PXSvTaskForceTermination ,
 PXSvMsgForceRelease ,
 PXSvSysObjReleaseAllObjects ,
 PXSvMbxRequestMbx ,
 PXSvMbxRegisterMbx ,
 PXSvRegisterRead ,
 PXSvRegisterWrite ,
 PXSvRegisterSetMask ,
 PXSvMbxCheck ,
 PXSvTaskCheck ,
 PXSvMsgSetData ,
 PXSvToRequest_NoWait ,
 PXSvToRequest_EvWait ,
 PXSvPeRequest_NoWait ,
 PXSvPeRequest_EvWait ,
 PXSvTaskGetAccessRights ,
 PXSvRemoveAccessRights ,
 PXSvRestoreAccessRights ,
 PXSvMsgGetSender ,
 PXSvMsgGetMetadata ,
 PXSvMsgSetMetadata ,
 PXSvMcReturnAllBlks ,

 PXSvMessage ,
 PXSvDiesrvInit ,

 PXSvTickDefine_Hnd ,
 PXSvTaskSignalEvents_Hnd ,
 PXSvTaskSuspend_Hnd ,
 PXSvDelaySched_Hnd ,
 PXSvMsgGetData_Hnd ,
 PXSvMsgSend_Hnd ,
 PXSvMsgSend_PrioHnd ,
 PXSvMsgRelease_Hnd ,
 PXSvPeStart_Hnd ,
 PXSvPeStop_Hnd ,
 PXSvToStart_Hnd ,
 PXSvToStop_Hnd ,
 PXSvTrace_Hnd ,
 PXSvRegisterRead_Hnd ,
 PXSvRegisterWrite_Hnd ,
 PXSvRegisterSetMask_Hnd ,
 PXSvMsgGetMetadata_Hnd ,
 PXSvMsgSetMetadata_Hnd ,




    PXSvTraceEnterScheduling,
    /* define special service numbers for interrupt enter and exit for tracing */
    PXSvIntEntry,
    PXSvIntExit,
    PXSvObjRequest_Waiting,
    PXSvRdyFromWait,
    PXSvLastService,
    /* ensure 32-bit size */
    PXSvSERVICE_END_MASK = 0x10000
} PxService_t;

#endif /* __pxservices__ */

