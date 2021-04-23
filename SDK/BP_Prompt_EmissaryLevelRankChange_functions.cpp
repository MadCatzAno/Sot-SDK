﻿// Name: SoT, Version: 2.1.0.1

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

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryLevelRankChange NewParam                       (Parm)
void UBP_Prompt_EmissaryLevelRankChange_C::OnEmissaryLevelRankChange(const struct FEmissaryLevel_FEmissaryLevelRankChange& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange");

	UBP_Prompt_EmissaryLevelRankChange_C_OnEmissaryLevelRankChange_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryLevelRankChange NewParam                       (Parm)
void UBP_Prompt_EmissaryLevelRankChange_C::EmissaryLevelRankChange(const struct FEmissaryLevel_FEmissaryLevelRankChange& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange");

	UBP_Prompt_EmissaryLevelRankChange_C_EmissaryLevelRankChange_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryLevelRankChange_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate");

	UBP_Prompt_EmissaryLevelRankChange_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryLevelRankChange_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryLevelRankChange_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryLevelRankChange_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryLevelRankChange_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryLevelRankChange_C::ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange");

	UBP_Prompt_EmissaryLevelRankChange_C_ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
