﻿// Name: S, Version: 2.2.1

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
// Functions
//---------------------------------------------------------------------------

// Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                WheelRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          WheelAnimationTime             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<EWheel_EWheel>     EWheel                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          WheelRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_WheelInterface_C::Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel_EWheel> EWheel, float Direction, float WheelRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WheelInterface.BP_WheelInterface_C.Receive Animation State");

	UBP_WheelInterface_C_Receive_Animation_State_Params params;
	params.WheelRotation = WheelRotation;
	params.WheelAnimationTime = WheelAnimationTime;
	params.EWheel = EWheel;
	params.Direction = Direction;
	params.WheelRate = WheelRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
