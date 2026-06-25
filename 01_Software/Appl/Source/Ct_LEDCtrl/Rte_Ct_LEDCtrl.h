/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ct_LEDCtrl.h
 *        Config:  D:/NXP_S32K144_AutoSAR_Development/NXP_S32K144_AutoSAR_Development/01_Software/S32K144_Development_Start.dpa
 *     SW-C Type:  Ct_LEDCtrl
 *  Generated at:  Thu Jun 25 23:27:50 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <Ct_LEDCtrl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CT_LEDCTRL_H
# define _RTE_CT_LEDCTRL_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Ct_LEDCtrl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Ct_LEDCtrl
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Ct_LEDCtrl, RTE_CONST, RTE_CONST) Rte_Inst_Ct_LEDCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Ct_LEDCtrl, TYPEDEF, RTE_CONST) Rte_Instance;


# define Ct_LEDCtrl_START_SEC_CODE
# include "Ct_LEDCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Ct_LEDCtrl_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Ct_LEDCtrl_Init Ct_LEDCtrl_Init
FUNC(void, Ct_LEDCtrl_CODE) Ct_LEDCtrl_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LedCtrl_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_LedCtrl_Runnable LedCtrl_Runnable
FUNC(void, Ct_LEDCtrl_CODE) LedCtrl_Runnable(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Ct_LEDCtrl_STOP_SEC_CODE
# include "Ct_LEDCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CT_LEDCTRL_H */
