/* 
 * @(#)  PXROS-HR Kernel v8.2.1.eval HighTec EDV-Systeme GmbH 
 * @(#)  Revision:  dc7dfc829592d884 
 * @(#)  AURIX TC3xx, TriCore TC1.6.2 
 * @(#)  Enabled Features: TRICORE MONITOR_TASKS MONITOR_OBJECTS SAFE_LISTS TRACE EVALUATION_VERSION 
 */
SECTIONS
{
  /* 
   * Define the kernel data 
   * .pxros.system.stack  - section for the system stack used by the kernel, interrupts and traps
   *                      - The system stack can be increased for each core by a core specific
   *                      symbol CORE_SYM(USER_SYSTEM_STACK_SIZE)
   * .sbss4.pxros         - zero initialized kernel data
   * .sdata4.pxros        - initialized kernel data
   * .systemmemory        - memory area for the system memory class, used to allocated TCBs
   * .pxros_object_mem    - memory area for the PXROS objects
   *
   * Each of these section will be allocated for each core instance as .CPUX.<section name>
   * The symbols:
   *    CORE_SYM(PxTricSystemDataLowerBound), i.e PxTricSystemDataLowerBound_CPUX_
   *    CORE_SYM(PxTricSystemDataUpperBound)
   *    will define the lower and upper address of the system area
   */
  PROVIDE(CORE_SYM(USER_SYSTEM_STACK_SIZE) = 0) ;
  CORE_SEC(.pxros.system.stack) (NOLOAD): ALIGN(8)
  {
    CORE_SYM(PxTricSystemDataLowerBound) = .;
    CORE_SYM(PXROS_SYSTEM_STACK_BEGIN) = . ;
    CORE_SYM(PXROS_SYSTEM_STACK_SIZE) = PXROS_SYSTEM_STACK_SIZE + CORE_SYM(USER_SYSTEM_STACK_SIZE);
    . += CORE_SYM(PXROS_SYSTEM_STACK_SIZE) ;
    CORE_SYM(PXROS_SYSTEM_STACK) = . ;
  } > CORE_SYM(PXDATA)
  /* 
   * PXROS data will be addressed relative to A9
   * allocate space for the pxros data sections .sdata4.pxros and .sbss4.pxros in the
   * core specific memory area CORE_SYM(PXDATA). i.e PXDATA_CPU0_, PXDATA_CPU1_ etc.
   */
  CORE_SEC(.sbss4.pxros) (NOLOAD):
  {
    CORE_SYM(_SMALL_DATA4) = . + 0x8000;
    . += SIZEOF(.sbss4.pxros);
  } > CORE_SYM(PXDATA)
  CORE_SEC(.systemmemory) (NOLOAD) :
  {
   *(.systemmemory.*)
   *(CORE_SEC(.systemmemory*))
  } > CORE_SYM(PXDATA)
  /*
   * allocate space for the core specific global data and the objectlists into the
   * core specific memory area CORE_SYM(PXDATA). i.e PXDATA_CPU0_, PXDATA_CPU1_ etc.
   * if __NUM_OF_PXOBJS__CPU[012]_ is not defined no space will be allocated
   * and the space for the object memory has to be defined inside a section .objectmemory.*
   * with the appropriate core specific flags
   */
  PROVIDE(CORE_SYM(__NUM_OF_PXOBJS_) = 0) ;
  PROVIDE(CORE_SYM(__NUM_OF_GLOBAL_PXOBJS_) = 0);
  PROVIDE(__PXROS_NAMESIZE__ = 0);
  PROVIDE(CORE_SYM(__PXROS_NAMESIZE__) = __PXROS_NAMESIZE__);
  PROVIDE(__NO_OF_CORES = __PX_NO_OF_CORES);
  CORE_SYM(PX_LOCAL_OBJMEMSIZE) = ALIGN (__PXOBJ_SIZE__ * (CORE_SYM(__NUM_OF_PXOBJS_) - CORE_SYM(__NUM_OF_GLOBAL_PXOBJS_)), 8);
  CORE_SYM(PX_GLOBAL_OBJMEMSIZE) = ALIGN (__PXOBJ_SIZE__ * CORE_SYM(__NUM_OF_GLOBAL_PXOBJS_), 8);
  CORE_SYM(PX_OBJNAME_MEMSIZE) = ALIGN (CORE_SYM(__PXROS_NAMESIZE__) * CORE_SYM(__NUM_OF_PXOBJS_), 8);
  CORE_SYM(PX_OBJMEMSIZE) = CORE_SYM(PX_LOCAL_OBJMEMSIZE) + CORE_SYM(PX_GLOBAL_OBJMEMSIZE) + CORE_SYM(PX_OBJNAME_MEMSIZE);
  CORE_SYM(__PXSYSJOB_SIZE) = 32 * ( __PX_NO_OF_CORES - 1) ;
  CORE_SEC(.pxros_object_mem) (NOLOAD) : ALIGN(64)
  {
    CORE_SYM(PxGlobalMem_begin) = .;
    . = ALIGN(64) ;
    /* Sysjoblist entries for other cores */
    CORE_SYM(PxSysjobList_Array) = .;
    . += CORE_SYM(__PXSYSJOB_SIZE) ;
    . = ALIGN(64) ;
    /* Begin of the Object Memory area */
    CORE_SYM(PxObjmem) = .;
   *(.objectmemory.*)
   *(CORE_SEC(.objectmemory*))
    . += CORE_SYM(PX_LOCAL_OBJMEMSIZE);
    /* Begin of the global available object memory area */
    CORE_SYM(PxGlobalObjmem) = .;
    . += CORE_SYM(PX_GLOBAL_OBJMEMSIZE);
    CORE_SYM(PxGlobalObjmem_end) = . ;
    /* Begin of object name area */
    CORE_SYM(PxObjNameSpace) = . ;
    . += CORE_SYM(PX_OBJNAME_MEMSIZE);
    /* end of the object memory area */
    CORE_SYM(PxGlobalMem_end) = .;
    CORE_SYM(PxTricSystemDataUpperBound) = .;
  } > CORE_SYM(PXDATA)
  /* clear the bss section .sbss4.pxros, .systemmemory and .pxros.system.stack */
  #define CLEAR_PXROS_MEMORY(C) LONG(0 + ADDR(.C..sbss4.pxros)); LONG(SIZEOF(.C..sbss4.pxros)); LONG(0 + ADDR(.C..systemmemory)); LONG(SIZEOF(.C..systemmemory)); LONG(0 + ADDR(.C..pxros.system.stack)); LONG(SIZEOF(.C..pxros.system.stack));
}
