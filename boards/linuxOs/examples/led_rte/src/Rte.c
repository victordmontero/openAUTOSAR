/********************************************************************
 * (C) DaVinci Engineering GmbH 2022
 ********************************************************************/
#include "Os.h"
#include "Rte_Type.h"
#include "Rte_Data.h"
#include <string.h>
#include "Rte_Blinker_Internal.h"
#include "Rte_EcuAbstraction_Internal.h"

void Rte_BlinkerRunnable(void) {
	BlinkerRunnable();
}

Std_ReturnType Rte_DigitalOutput_Set(IoHwAb_SignalType SignalId,
		const DigitalLevel value) {
	Std_ReturnType retVal = DigitalOutput_Set(SignalId, value);
	return retVal;
}

Std_ReturnType Rte_Start(void) {
	return RTE_E_OK;
}

void Scheduled(void) {
	EventMaskType eventMask = 0;
	while (1) {
		WaitEvent (EVENT_MASK_ScheduleEvent);
		GetResource (RES_SCHEDULER);
		GetEvent(TASK_ID_Scheduled, &eventMask);
		ClearEvent(EVENT_MASK_ScheduleEvent);
		ReleaseResource(RES_SCHEDULER);
		if (eventMask & EVENT_MASK_ScheduleEvent) {
			Rte_BlinkerRunnable();
		}
	}
}
