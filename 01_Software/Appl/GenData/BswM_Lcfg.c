/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: BswM
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2026-06-25 23:03:38
 *           Project: S32K144_Development_Start - Version 1.0
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId  Id of the rule to execute.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId);


/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId   Id of the timer to update.
 * \param[in]   value     New value of the timer.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
#define BswM_ActionList_ESH_AL_PostRunToPrepShutdown BswM_ActionList_ESH_AL_WakeupToPrep
#define BswM_ActionList_ESH_AL_InitToWakeup BswM_ActionList_ESH_AL_WaitForNvMWakeup
#define BswM_ActionList_ESH_AL_PostRunToRun BswM_ActionList_ESH_AL_WakeupToRun
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(void);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_BswM_0779 */ 

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


BSWM_LOCAL VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;

BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_1_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_1_requestedMode;
BSWM_LOCAL VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode;



#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BswM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[12] = {
    /* Index    FctPtr                                                 Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_ESH_AL_RunToPostRun             },  /* [Priority: 0] */  /* [AL_ESH_AL_RunToPostRun] */
  { /*     1 */ BswM_ActionList_ESH_AL_WaitForNvMToShutdown     },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*     2 */ BswM_ActionList_ESH_AL_WakeupToPrep             },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToPrep] */
  { /*     3 */ BswM_ActionList_ESH_AL_WaitForNvMWakeup         },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*     4 */ BswM_ActionList_ESH_AL_WakeupToRun              },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToRun] */
  { /*     5 */ BswM_ActionList_ESH_AL_InitToWakeup             },  /* [Priority: 0] */  /* [AL_ESH_AL_InitToWakeup] */
  { /*     6 */ BswM_ActionList_ESH_AL_PostRunToPrepShutdown    },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*     7 */ BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck   },  /* [Priority: 0] */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*     8 */ BswM_ActionList_ESH_AL_PostRunToRun             },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToRun] */
  { /*     9 */ BswM_ActionList_ESH_AL_ExitPostRun              },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitPostRun] */
  { /*    10 */ BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM },  /* [Priority: 0] */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    11 */ BswM_ActionList_INIT_AL_Initialize              }   /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[7] = {
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       0u },  /* [NoPartitions, R_ESH_RunToPostRun] */
  { /*     1 */       1u },  /* [NoPartitions, R_ESH_WaitToShutdown] */
  { /*     2 */       2u },  /* [NoPartitions, R_ESH_WakeupToPrep] */
  { /*     3 */       3u },  /* [NoPartitions, R_ESH_WaitToWakeup] */
  { /*     4 */       4u },  /* [NoPartitions, R_ESH_WakeupToRun] */
  { /*     5 */       8u },  /* [NoPartitions, R_ESH_PostRun] */
  { /*     6 */       9u }   /* [NoPartitions, R_ESH_PrepToWait] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element    Description
  Id         External id of rule.
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[10] = {
    /* Index    Id  FctPtr                                   Referable Keys */
  { /*     0 */ 5u, BswM_Rule_ESH_RunToPostRun        },  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ModeNotification, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer, NoPartitions] */
  { /*     1 */ 6u, BswM_Rule_ESH_WaitToShutdown      },  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, NoPartitions] */
  { /*     2 */ 8u, BswM_Rule_ESH_WakeupToPrep        },  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ModeNotification, NoPartitions] */
  { /*     3 */ 7u, BswM_Rule_ESH_WaitToWakeup        },  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, NoPartitions] */
  { /*     4 */ 9u, BswM_Rule_ESH_WakeupToRun         },  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ModeNotification, NoPartitions] */
  { /*     5 */ 0u, BswM_Rule_ESH_InitToWakeup        },  /* [R_ESH_InitToWakeup, MRP_ESH_State, NoPartitions] */
  { /*     6 */ 3u, BswM_Rule_ESH_PostRunToPrepNested },  /* [R_ESH_PostRunToPrepNested, NoPartitions] */
  { /*     7 */ 2u, BswM_Rule_ESH_PostRunNested       },  /* [R_ESH_PostRunNested, NoPartitions] */
  { /*     8 */ 1u, BswM_Rule_ESH_PostRun             },  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
  { /*     9 */ 4u, BswM_Rule_ESH_PrepToWait          }   /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[8] = {
  /* Index    RulesInd      Referable Keys */
  /*     0 */       0u,  /* [MRP_ESH_State] */
  /*     1 */       1u,  /* [MRP_ESH_State] */
  /*     2 */       2u,  /* [MRP_ESH_State] */
  /*     3 */       3u,  /* [MRP_ESH_State] */
  /*     4 */       4u,  /* [MRP_ESH_State] */
  /*     5 */       5u,  /* [MRP_ESH_State] */
  /*     6 */       8u,  /* [MRP_ESH_State] */
  /*     7 */       9u   /* [MRP_ESH_State] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesOfConfig
**********************************************************************************************************************/
/** 
  \var    BswM_RulesOfConfig
  \details
  Element        Description
  InitActions
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesOfConfigType, BSWM_CONST) BswM_RulesOfConfig[1] = {
    /* Index    InitActions                       Comment                    Referable Keys */
  { /*     0 */ BswM_Init_Gen_NoPartitions }   /* [NoPartitions] */  /* [NoPartitions] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [AL_ESH_AL_RunToPostRun] */
  /*     1 */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  /*     2 */  /* [AL_ESH_AL_WakeupToPrep] */
  /*     3 */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  /*     4 */  /* [AL_ESH_AL_WakeupToRun] */
  /*     5 */  /* [AL_ESH_AL_InitToWakeup] */
  /*     6 */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  /*     7 */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  /*     8 */  /* [AL_ESH_AL_PostRunToRun] */
  /*     9 */  /* [AL_ESH_AL_ExitPostRun] */
  /*    10 */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  /*    11 */  /* [AL_INIT_AL_Initialize] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ForcedActionListPriority
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ForcedActionListPriorityType, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [GENERIC_0, MRP_ESH_State] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_NOINIT) BswM_Initialized[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_State, GENERIC_0] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueSemaphore
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_QueueSemaphoreType, BSWM_VAR_NOINIT) BswM_QueueSemaphore[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueWritten
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_QueueWrittenType, BSWM_VAR_NOINIT) BswM_QueueWritten[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[10];
  /* Index        Referable Keys  */
  /*     0 */  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ModeNotification, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer, NoPartitions] */
  /*     1 */  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, NoPartitions] */
  /*     2 */  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ModeNotification, NoPartitions] */
  /*     3 */  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, NoPartitions] */
  /*     4 */  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ModeNotification, NoPartitions] */
  /*     5 */  /* [R_ESH_InitToWakeup, MRP_ESH_State, NoPartitions] */
  /*     6 */  /* [R_ESH_PostRunToPrepNested, NoPartitions] */
  /*     7 */  /* [R_ESH_PostRunNested, NoPartitions] */
  /*     8 */  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
  /*     9 */  /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK;
  
  if (handleId < BswM_GetSizeOfRules())
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_GetFctPtrOfRules(handleId)(); /* SBSW_BSWM_RULEFCTPTR */
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists())
    {
      retVal = BswM_GetFctPtrOfActionLists(actionListIndex)(); /* SBSW_BSWM_ACTIONLISTFCTPTR */
    }
    else
    {
      retVal = E_OK;
    }
  }
  return retVal;
} 


/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue())
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED)); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
}

/**********************************************************************************************************************
 *  BswM_Init_Gen_NoPartitions
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Init_Gen_NoPartitions(void)
{

  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFF;
  Request_ESH_RunRequest_0_requestedMode = RELEASED;
  Request_ESH_RunRequest_1_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_0_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_1_requestedMode = RELEASED;
  BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_STARTUP;

  (void)BswM_ActionList_INIT_AL_Initialize();
}

/**********************************************************************************************************************
 *  BswM_ModeNotificationFct
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ModeNotificationFct(void)
{
  if(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode != 0xFF)
  {
    if(Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode) == RTE_E_OK)
    {
      BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFF;
    }
  }
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();
  if (mode != RTE_TRANSITION_ESH_Mode)
  {
    BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = (Rte_ModeType_ESH_Mode)mode;
  }
  (void)Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Request_ESH_RunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Request_ESH_RunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Request_ESH_PostRunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Request_ESH_PostRunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  EcuM_ClearValidatedWakeupEvent(ECUM_WKSOURCE_ALL_SOURCES);
  /*lint -restore */
  BswM_ESH_OnEnterPostRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_POSTRUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(void)
{
  BswM_ESH_OnEnterShutdown();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)EcuM_GoToSelectedShutdownTarget();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(void)
{
  BswM_ESH_OnEnterPrepShutdown();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(void)
{
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_SelfRunRequestTimer, 10uL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(void)
{
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunToPrepNested);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(void)
{
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunNested);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(void)
{
  BswM_ESH_OnEnterWaitForNvm();
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_INIT_AL_Initialize
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)Rte_Start();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_RunToPostRunTransition. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if(((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_RUN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_RUN)) && (((Request_ESH_RunRequest_0_requestedMode == RELEASED) && (Request_ESH_RunRequest_1_requestedMode == RELEASED)) && (BswM_GetTimerState(0) == BSWM_TIMER_EXPIRED)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_RunToPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_RunToPostRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WaitForNvMToShutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && (EcuM_GetValidatedWakeupEvents() == 0u))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMToShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMToShutdown;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WakeupToPrepShutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && (EcuM_GetPendingWakeupEvents() == 0u) && (EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToPrep. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToPrep;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WaitForNvMToWakeup. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && (EcuM_GetValidatedWakeupEvents() != 0u))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMWakeup;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WakeupToRun. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && (EcuM_GetValidatedWakeupEvents() != 0u) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToRun. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_InitToWakeup. */
  if(BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_INIT)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_InitToWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_InitToWakeup;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunToPrepNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PostRunToPrep. */
  if((Request_ESH_PostRunRequest_0_requestedMode == RELEASED) && (Request_ESH_PostRunRequest_1_requestedMode == RELEASED))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToPrepShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToPrepShutdown;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(void)
{
  BswM_HandleType retVal;
  /* Evaluate logical expression ESH_LE_PostRunToRun. */
  if(((Request_ESH_RunRequest_0_requestedMode == REQUESTED) || (Request_ESH_RunRequest_1_requestedMode == REQUESTED)) || (EcuM_GetValidatedWakeupEvents() != 0u))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToRun. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToRun;
  }
  else
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck. */
    retVal = BSWM_ID_AL_ESH_AL_ESH_PostRunToPrepCheck;
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PostRun. */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_POSTRUN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitPostRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PrepToWait
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PrepShutdownToWaitForNvM. */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_SHUTDOWN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM. */
    retVal = BSWM_ID_AL_ESH_AL_PrepShutdownToWaitForNvM;
  }
  /* No false action list configured. */
  return retVal;
}



#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

