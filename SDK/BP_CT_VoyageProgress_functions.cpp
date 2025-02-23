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

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_VoyageProgress_C::IsPurchaseable(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable");

	UBP_CT_VoyageProgress_C_IsPurchaseable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> NewProgress                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_VoyageProgress_C::SetProgress(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> NewProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress");

	UBP_CT_VoyageProgress_C_SetProgress_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_VoyageProgress_C::IsCurrently(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently");

	UBP_CT_VoyageProgress_C_IsCurrently_Params params;
	params.ProgressState = ProgressState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_VoyageProgress_C::IsPast(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast");

	UBP_CT_VoyageProgress_C_IsPast_Params params;
	params.ProgressState = ProgressState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CT_VoyageProgress_C::PopulateExistingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState");

	UBP_CT_VoyageProgress_C_PopulateExistingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_VoyageProgress_C::Initialise(bool Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise");

	UBP_CT_VoyageProgress_C_Initialise_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CT_VoyageProgress_C::ExecuteUbergraph_BP_CT_VoyageProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress");

	UBP_CT_VoyageProgress_C_ExecuteUbergraph_BP_CT_VoyageProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
