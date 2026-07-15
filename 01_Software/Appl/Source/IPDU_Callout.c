#include "Com_Cot.h"
uint8 msg_0x200_cnt = 0;
uint8 msg_0x210_cnt = 0;
FUNC(boolean, COM_APPL_CODE) msg_0x200_Callout(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    msg_0x200_cnt++;
}

/* Configurable interface RxPduCallout */
FUNC(boolean, COM_APPL_CODE) msg_0x210_Callout(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
    msg_0x210_cnt++;
}

