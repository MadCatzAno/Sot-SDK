﻿#pragma once

// Name: S, Version: 2.2.1

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

// Function Describables.DescribableComponent.SetTooltipActive
struct UDescribableComponent_SetTooltipActive_Params
{
	bool                                               IsActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Describables.DescribableComponent.OnRep_TooltipActive
struct UDescribableComponent_OnRep_TooltipActive_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
