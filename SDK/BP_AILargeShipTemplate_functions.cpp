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

// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetShipSkeleton
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipTemplate_C::SetShipSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetShipSkeleton");

	ABP_AILargeShipTemplate_C_SetShipSkeleton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_SailData
// (BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipTemplate_C::OnRep_SailData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_SailData");

	ABP_AILargeShipTemplate_C_OnRep_SailData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_NewVar_2
// (BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipTemplate_C::OnRep_NewVar_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnRep_NewVar_2");

	ABP_AILargeShipTemplate_C_OnRep_NewVar_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.UserConstructionScript");

	ABP_AILargeShipTemplate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipTemplate_C::OnShipSurface_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface_Client");

	ABP_AILargeShipTemplate_C_OnShipSurface_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface
// (Event, Public, BlueprintEvent)
void ABP_AILargeShipTemplate_C::OnShipSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipSurface");

	ABP_AILargeShipTemplate_C_OnShipSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive_Client
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipTemplate_C::OnShipDive_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive_Client");

	ABP_AILargeShipTemplate_C_OnShipDive_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive
// (Event, Public, BlueprintEvent)
void ABP_AILargeShipTemplate_C::OnShipDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.OnShipDive");

	ABP_AILargeShipTemplate_C_OnShipDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_AILargeShipTemplate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ReceiveBeginPlay");

	ABP_AILargeShipTemplate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetCursedCrewCustomisationProperties
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_AILargeShipTemplate_C::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.SetCursedCrewCustomisationProperties");

	ABP_AILargeShipTemplate_C_SetCursedCrewCustomisationProperties_Params params;
	params.SailData = SailData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ExecuteUbergraph_BP_AILargeShipTemplate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AILargeShipTemplate_C::ExecuteUbergraph_BP_AILargeShipTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipTemplate.BP_AILargeShipTemplate_C.ExecuteUbergraph_BP_AILargeShipTemplate");

	ABP_AILargeShipTemplate_C_ExecuteUbergraph_BP_AILargeShipTemplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
