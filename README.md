## PXROS-HR v8.2.0: Evaluation Version Notes

This PXROS-HR Kernel package is intended to be used for evaluation purposes. Compared to the production version of PXROS-HR it provides restricted functionality with regard to the following aspects. However, the source code of application tasks implemented in the context of evaluation can still be used after purchasing the licensed version.

## Functional Restrictions

 -   Support for three Processor Cores

    PXROS-HR supports only three cores and is limited to AURIX™ TC3x devices.

-    Number of Objects

    The number of system resources, in PXROS-HR terminology called objects, is limited to 30 objects per processor core. All of these objects are considered as global objects, so no local objects are available. In case PXROS-HR is initialized with a larger number of objects, the exceeding ones are ignored.

-    Memory Block Size

    The maximum block size that can be inserted into a Memory Class via the PxMcInsertBlk Kernel-API function is limited to 32 KiB. Larger blocks will be truncated.

-    Number of Interrupts

    The PXROS-HR interrupt interface supports only interrupt priorities in the range from 2 to 15 (inclusive). This allows applications to register 14 interrupt handlers in total.

-    Provided Utilities

    Some of the utilities shipped together with the PXROS-HR Kernel are not included in the evaluation version. This limitation affects the Init Utility and the Task Release Service.

## Generated Environment

This package generates an environment file `.env` in the project root directory including environment variables to access PXROS-HR header files and libraries

-   PXROS_ROOT_PATH:        Absolute path to the PXROS-HR kernel directory

-   PXROS_UTILS:            Absolute path to the PXROS-HR utilities

