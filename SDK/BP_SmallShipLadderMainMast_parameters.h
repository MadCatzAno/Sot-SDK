﻿#pragma once

// Name: SoT, Version: 2.1.0.1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.GetDockableInfo
struct ABP_SmallShipLadderMainMast_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.Setup Spline
struct ABP_SmallShipLadderMainMast_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Positions;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.CanInteract
struct ABP_SmallShipLadderMainMast_C_CanInteract_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C.UserConstructionScript
struct ABP_SmallShipLadderMainMast_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
