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

 #ifndef __pxtrc_int__
 #define __pxtrc_int__

#ifdef __cplusplus
extern "C"
{
#endif

    extern PxTask_t IPxTraceGetRunTaskID(void);
    extern PxTask_t IPxTraceGetHandlerTaskID(void);
    extern PxBool_t IPxTraceCheckTask( PxTask_t );
    extern PxBool_t IPxTraceCheckService( PxULong_t );
    extern PxULong_t IPxTraceGetGroupMask(void);
    extern PxAligned_t * IPxTraceGetNextEntry( void);

#ifdef __cplusplus
}
#endif

#endif
