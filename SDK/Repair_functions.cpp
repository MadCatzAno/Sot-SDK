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

// Function Repair.RepairableInterface.HandleDestroy
// (Native, Public)
void URepairableInterface::HandleDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.HandleDestroy");

	URepairableInterface_HandleDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Repair.RepairableInterface.GetRepairType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* URepairableInterface::GetRepairType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairType");

	URepairableInterface_GetRepairType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float URepairableInterface::GetRepairTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairTime");

	URepairableInterface_GetRepairTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairableState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Repair_ERepairableState> URepairableInterface::GetRepairableState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairableState");

	URepairableInterface_GetRepairableState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Repair.RepairingInterface.GetRepairType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* URepairingInterface::GetRepairType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Repair.RepairingInterface.GetRepairType");

	URepairingInterface_GetRepairType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
