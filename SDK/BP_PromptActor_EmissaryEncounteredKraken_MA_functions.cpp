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

// Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_EmissaryEncounteredKraken_MA_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.UserConstructionScript");

	ABP_PromptActor_EmissaryEncounteredKraken_MA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_EmissaryEncounteredKraken_MA_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.ReceiveBeginPlay");

	ABP_PromptActor_EmissaryEncounteredKraken_MA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryEncounteredKraken_MA_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.ReceiveEndPlay");

	ABP_PromptActor_EmissaryEncounteredKraken_MA_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_MA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryEncounteredKraken_MA_C::ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_MA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_MA.BP_PromptActor_EmissaryEncounteredKraken_MA_C.ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_MA");

	ABP_PromptActor_EmissaryEncounteredKraken_MA_C_ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_MA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
