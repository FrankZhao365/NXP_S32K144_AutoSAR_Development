/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Ct_LEDCtrl.c
 *        Config:  D:/NXP_S32K144_AutoSAR_Development/NXP_S32K144_AutoSAR_Development/01_Software/S32K144_Development_Start.dpa
 *     SW-C Type:  Ct_LEDCtrl
 *  Generated at:  Thu Jul  9 01:21:11 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <Ct_LEDCtrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * BswM_ESH_RunRequest
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_Ct_LEDCtrl.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "Com.h"
#include "CanIf.h"
#include "ComStack_Cfg.h" 
PduInfoType PDUInfo;
uint8 PDU_DATA = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dio.h"
#include "Dio_Cfg.h"
#define RELEASED  (0U)
#define REQUESTED (1U)

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 *   RELEASED (0U)
 *   REQUESTED (1U)
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 *
 *********************************************************************************************************************/


#define Ct_LEDCtrl_START_SEC_CODE
#include "Ct_LEDCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Ct_LEDCtrl_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Ct_LEDCtrl_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Ct_LEDCtrl_CODE) Ct_LEDCtrl_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Ct_LEDCtrl_Init
 *********************************************************************************************************************/
    // (void)Rte_Write_CtLed_Request_ESH_RunRequest_0_requestedMode(REQUESTED);  
    (void)Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(COMM_FULL_COMMUNICATION);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LedCtrl_Runnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
uint8 led_step = 0;  // 当前亮的LED编号 (0~3)
void Timer_ISR(void)
{
        switch(led_step)
        {
            case 0:
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDB_4_PTD0_P4, 0);  // 蓝灯亮
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDR_2_PTD15_P22, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDY_3_PTD1_P3, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel__LEDG_1_PTD16_P21, 1);
                break;
            case 1:
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDB_4_PTD0_P4, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDR_2_PTD15_P22, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDY_3_PTD1_P3, 0);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel__LEDG_1_PTD16_P21, 1);
                break;
            case 2:
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDB_4_PTD0_P4, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDR_2_PTD15_P22, 0);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDY_3_PTD1_P3, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel__LEDG_1_PTD16_P21, 1);
                break;
            case 3:
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDB_4_PTD0_P4, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDR_2_PTD15_P22, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel_LEDY_3_PTD1_P3, 1);
                Dio_WriteChannel(DioConf_DioChannel_DioChannel__LEDG_1_PTD16_P21, 0);
                break;
            default:
                break;
        }

        // 3. 步进+1，循环到0~3
        led_step++;
        if(led_step >= 4)
        {
            led_step = 0;
        }
}

FUNC(void, Ct_LEDCtrl_CODE) LedCtrl_Runnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LedCtrl_Runnable
 *********************************************************************************************************************/
    static unsigned char led_state = 0;
    led_state ^= 1;
    PDUInfo.SduDataPtr = &PDU_DATA;
    PDUInfo.SduLength = 8;
    // CanIf_Transmit(0x200,&PDUInfo);
    Timer_ISR();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Ct_LEDCtrl_STOP_SEC_CODE
#include "Ct_LEDCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
