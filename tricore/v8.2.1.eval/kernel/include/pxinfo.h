/* 
 * @(#)  PXROS-HR Kernel v8.2.1.eval HighTec EDV-Systeme GmbH 
 * @(#)  Revision:  dc7dfc829592d884 
 * @(#)  AURIX TC3xx, TriCore TC1.6.2 
 * @(#)  Enabled Features: TRICORE MONITOR_TASKS MONITOR_OBJECTS SAFE_LISTS TRACE EVALUATION_VERSION 
 */
/*************************************************************************
 *  Project:		PXROS HR
 *  Function:		PXROS: access to PXROS internal structures by applications
 *
 *************************************************************************
 *
 *  SPDX-FileCopyrightText: HighTec EDV-Systeme GmbH
 *
 *  SPDX-License-Identifier: Apache-2.0
 *
 ************************************************************************/

#ifndef __pxinfo__
#define __pxinfo__

#ifdef __cplusplus
extern "C"
{
#endif

    /*
     *	Task
     */

    /*
     *	Task state
     */
    typedef enum
    {
        TaskState_Unknown,
        TaskState_Ready,
        TaskState_Waiting,
        TaskState_Waiting_PxAwaitEvents,
        TaskState_Waiting_PxMsgRcv,
        TaskState_Waiting_PxObjReq,
        TaskState_Waiting_PxMcTakeBlk,
        TaskState_Suspended,
        TaskState_Suspended_PxAwaitEvents,
        TaskState_Suspended_PxMsgRcv,
        TaskState_Suspended_PxObjReq,
        TaskState_Suspended_PxMcTakeBlk
    } PxInfoTaskState_t;

    /*
     *	Task info
     */
    typedef struct PxInfoTask_t
    {
        PxChar_t PxInfoTask_Name[TASK_NAME_SIZE];
        PxPrio_t PxInfoTask_Priority;
        PxError_t PxInfoTask_Error;
        PxTmode_t PxInfoTask_Mode;
        PxInfoTaskState_t PxInfoTask_State _PXWORD_SIZE;
        PxEvents_t PxInfoTask_SavedEvents;
        PxEvents_t PxInfoTask_EventMask;
        PxMc_t PxInfoTask_Mc;
        PxOpool_t PxInfoTask_Opool;
        PxMbx_t PxInfoTask_PrivateMailbox;
        PxInt_t PxInfoTask_ExtremeStackSize;
        PxInt_t PxInfoTask_CurrentStackSize;
        PxInt_t PxInfoTask_TotalStackSize;
        PxInt_t PxInfoTask_AbortStackSize;
        PxTask_t PxInfoTask_Creator;
        PxUInt_t PxInfoTask_AccessRights;

    } PxInfoTask_t;

    /*
     *	Function to get task info
     */
    PxError_t
    PxSysInfoGetTaskInfo(PxInfoTask_t *TaskInfo, PxTask_t);

    /*
     *	Messages
     */

    /*
     *	Message type
     */
    typedef enum
    {
        MsgType_Unknown,
        MsgType_Enveloped,
        MsgType_Requested,
        MsgType_McmpSrc,
        MsgType_ScmpSrc,
        MsgType_Borrowed
    } PxInfoMsgType_t;

    /*
     *	Message info
     */
    typedef struct
    {
        PxInfoMsgType_t PxInfoMsg_Type _PXWORD_SIZE;
        PxTask_t PxInfoMsg_Owner;
        PxTask_t PxInfoMsg_User;
        PxMbx_t PxInfoMsg_Mbx;
        PxUChar_t *PxInfoMsg_Data;
        PxULong_t PxInfoMsg_Size;
        PxULong_t PxInfoMsg_BufSize;
        PxTask_t PxInfoMsg_RequestingTask;
        PxMbx_t PxInfoMsg_RelMbx;
    } PxInfoMsg_t;

    /*
     *	Function to get message info
     */
    PxError_t
    PxSysInfoGetMsgInfo(PxInfoMsg_t *MsgInfo, PxMsg_t msg);

    /*
     *	Memory class
     */

    /*
     *	Memory class type
     */
    typedef enum
    {
        MCType_FixSized, MCType_VarSized
    } PxInfoMCType_t;

    /*
     *	Memory class info
     */
    typedef struct
    {
        PxInfoMCType_t PxInfoMC_Type _PXWORD_SIZE;
        PxUChar_t *PxInfoMC_FirstBlock;
        PxULong_t PxInfoMC_FreeMem;
        PxULong_t PxInfoMC_MinCapacity;
        PxTask_t PxInfoMC_RequestingTask;
    } PxInfoMC_t;

    /*
     *	Function to get memory class info
     */
    PxError_t
    PxSysInfoGetMCInfo(PxInfoMC_t *MCInfo, PxMc_t mclass);

    /*
     *	Mailboxes
     */

    typedef struct
    {
        PxULong_t PxInfoMbx_NormalMsgs;
        PxMsg_t PxInfoMbx_FirstNormalMsg;
        PxULong_t PxInfoMbx_PrioMsgs;
        PxMsg_t PxInfoMbx_FirstPrioMsg;
        PxULong_t PxInfoMbx_WaitingTasks;
        PxTask_t PxInfoMbx_FirstWaitingTask;
        PxTask_t PxInfoMbx_RequestingTask;
    } PxInfoMbx_t;

    /*
     *	Function to get object pool info
     */
    PxError_t
    PxSysInfoGetMbxInfo(PxInfoMbx_t *MbxInfo, PxMbx_t Mbx);

    PxInt_t
    PxSysInfoGetMsgsInMbx(PxMbx_t mbxId, PxMsgType_t Type, PxObjId_t *MsgArray, PxUInt_t Max);

    /*
     *	Object pool
     */

    /*
     *	Object pool type
     */
    typedef enum
    {
        OpoolType_Real, OpoolType_Virtual
    } PxInfoOpoolType_t;

    /*
     *	Object pool info
     */
    typedef struct
    {
        PxInfoOpoolType_t PxInfoOpool_Type _PXWORD_SIZE;
        PxOpool_t PxInfoOpool_Superior;
        PxULong_t PxInfoOpool_Capacity;
        PxULong_t PxInfoOpool_MinCapacity;
        PxTask_t PxInfoOpool_RequestingTask;
    } PxInfoOpool_t;

    /*
     *	Function to get object pool info
     */
    PxError_t
    PxSysInfoGetOpoolInfo(PxInfoOpool_t *OpoolInfo, PxOpool_t opool);

    /*
     *	Delay structures
     */

    /*
     *	Delay type
     */
    typedef enum
    {
        DelayType_InUse, DelayType_NotUsed
    } PxInfoDelayType_t;

    /*
     *	delay info
     */
    typedef struct
    {
        PxInfoDelayType_t PxInfoDelay_Type _PXWORD_SIZE;
        void (*PxInfoDelay_Handler)(PxArg_t);
        PxULong_t PxInfoDelay_Param;
        PxULong_t PxInfoDelay_Ticks;
        PxULong_t PxInfoDelay_RestTicks;
        PxTask_t PxInfoDelay_RequestingTask;
    } PxInfoDelay_t;

    /*
     *	Function to get delay info
     */
    PxError_t
    PxSysInfoGetDelayInfo(PxInfoDelay_t *DelayInfo, PxDelay_t delay);

    /*
     *	pe info
     */
    typedef struct
    {
        PxTask_t PxInfoPe_Task;
        PxEvents_t PxInfoPe_Event;
        PxULong_t PxInfoPe_Period;
        PxULong_t PxInfoPe_RestTicks;
        PxTask_t PxInfoPe_RequestingTask;
    } PxInfoPe_t;

    /*
     *	Function to get Pe info
     */
    PxError_t
    PxSysInfoGetPeInfo(PxInfoPe_t *PeInfo, PxPe_t Pe);

    /*
     *	to info
     */
    typedef struct
    {
        PxTask_t PxInfoTo_Task;
        PxEvents_t PxInfoTo_Event;
        PxULong_t PxInfoTo_Timeout;
        PxULong_t PxInfoTo_RestTicks;
        PxTask_t PxInfoTo_RequestingTask;
    } PxInfoTo_t;

    /*
     *	Function to get To info
     */
    PxError_t
    PxSysInfoGetToInfo(PxInfoTo_t *ToInfo, PxTo_t To);

    /*
     *	interrupt info
     */
    typedef struct
    {
        PxUInt_t PxInfoInterrupt_Number;
        void (*PxInfoInterrupt_Handler)(PxArg_t);
        PxULong_t PxInfoInterrupt_Param;
        PxTask_t PxInfoInterrupt_RequestingTask;
    } PxInfoInterrupt_t;

    /*
     *	Function to get Interrupt info
     */
    PxError_t
    PxSysInfoGetInterruptInfo(PxInfoInterrupt_t *InterruptInfo, PxInterrupt_t interrupt);

    /*
     * get general information about objects
     */
    /* request the number of available PXROS objects */
    PxUInt_t PxSysInfoGetNumberOfObjects(void);

    /* request the type of an object */
    _PxObjType_t PxSysInfoGetObjType(PxObj_t);

    /*
     * define a union which includes all existent Info structures
     */
    typedef union
    {
        PxInfoMC_t McInfo; /* memory class information struct	*/
        PxInfoOpool_t OpoolInfo; /* Opool information struct	*/
        PxInfoMsg_t MsgInfo; /* message information struct	*/
        PxInfoMbx_t MbxInfo; /* mailbox information struct		*/
        PxInfoDelay_t DelayInfo; /* delay object information struct	*/
        PxInfoPe_t PeInfo; /* periodic event information struct	*/
        PxInfoTo_t ToInfo; /* timeout object information struct	*/
        PxInfoInterrupt_t InteruptInfo; /* interrupt object information struct 	*/
        PxInfoTask_t TaskInfo; /* task object information struct */
    } PxObjInfo_T;

    /* release all objects requested by the calling task */
    PxError_t PxSysObjReleaseAllObjects(void);

#ifdef __cplusplus
}
#endif

#endif /* __pxinfo__ */
