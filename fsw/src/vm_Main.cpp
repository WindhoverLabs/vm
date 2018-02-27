#include "vm_Main.h"
#include "vm_events.h"
#include "vm_app.h"

VM_Main::VM_Main(VM &inApp) :
    FSM(*this),
    App(inApp)
{

}


VM_Main::~VM_Main()
{

}


uint32 VM_Main::GetCurrentStateID()
{
	return FSM.getState().getId();
}


void VM_Main::EnteredManual()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_MANUAL_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::Manual");
}


void VM_Main::EnteredAltitudeControl()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_ALTITUDE_CONTROL_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AltitudeControl");
}


void VM_Main::EnteredPositionControl()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_POSITION_CONTROL_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::PositionControl");
}


void VM_Main::EnteredAutoMission()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_MISSION_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AutoMission");
}


void VM_Main::EnteredAutoLoiter()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_LOITER_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AutoLoiter");
}


void VM_Main::EnteredAutoLand()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_LAND_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::EnteredAutoLand");
}


void VM_Main::EnteredAutoTakeoff()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_TAKEOFF_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AutoTakeoff");
}


void VM_Main::EnteredAutoReturnToLaunch()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_RTL_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AutoReturnToLaunch");
}


void VM_Main::EnteredAutoFollowTarget()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_FOLLOW_TARGET_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AutoFollowTarget");
}


void VM_Main::EnteredAutoPrecland()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_AUTO_PRECLAND_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::AutoPrecland");
}


void VM_Main::EnteredAcrobatic()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_ACROBATIC_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::Acrobatic");
}


void VM_Main::EnteredOffboard()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_OFFBOARD_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::Offboard");
}


void VM_Main::EnteredRattitude()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_RATTITUDE_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::Rattitude");
}


void VM_Main::EnteredStabilize()
{
    CFE_EVS_SendEvent(VM_MAIN_ENTERED_STABILIZE_INFO_EID, CFE_EVS_INFORMATION,
    		"Main::Stabilize");
}


void VM_Main::DoAction()
{
	if(strcmp(FSM.getState().getName(),"VM_MainMap::Manual") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AltitudeControl") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::PositionControl") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoMission") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoLoiter") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoReturnToLaunch") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::Acrobatic") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::Offboard") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::Stabilize") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::Rattitude") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoTakeoff") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoLand") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoFollowTarget") == 0)
	{
		/* TODO */
	}
	else if(strcmp(FSM.getState().getName(),"VM_MainMap::AutoPrecland") == 0)
	{
		/* TODO */
	}
	else
	{
	    CFE_EVS_SendEvent(VM_IN_UNKNOWN_STATE_ERR_EID, CFE_EVS_ERROR,
	    		"VM_MainMap is in unknown state (%u, '%s')", FSM.getState().getId(), FSM.getState().getName());
	}
}