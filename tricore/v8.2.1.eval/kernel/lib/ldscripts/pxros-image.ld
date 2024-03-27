/* 
 * @(#)  PXROS-HR Kernel v8.2.1.eval HighTec EDV-Systeme GmbH 
 * @(#)  Revision:  dc7dfc829592d884 
 * @(#)  AURIX TC3xx, TriCore TC1.6.2 
 * @(#)  Enabled Features: TRICORE MONITOR_TASKS MONITOR_OBJECTS SAFE_LISTS TRACE EVALUATION_VERSION 
 */
SECTIONS
{
  /*
   * the section .sbss4.pxros and .sdata4.pxros are only used to create section
   * images. the real section allocation will be done in pxros-core.ld into the
   * core specific sections CORE_SEC(.sdata4.pxros) and CORE_SEC(sbss4.pxros)
   */
  PROVIDE(PXROS_SYSTEM_STACK_SIZE = 0x100 );
  .sbss4.pxros 0 (NOLOAD) :
  {
    __SMALL_DATA4__ = . + 0x8000;
    *(.bss_a9.pxros*)
    *(.bss_a9.system*)
  } > pxros_mem
  .pxinit :
  {
    . = ALIGN(4);
    PROVIDE(__PxInitializeTable = .);
    KEEP (*(.pxinit*))
    LONG(0);
  } > RODATA_MEM
}
