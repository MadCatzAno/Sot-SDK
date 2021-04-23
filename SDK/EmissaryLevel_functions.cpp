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

// Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEmissaryActiveTableVisualiserComponent::OnControllerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay");

	UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
// (Final, Native, Private)
void UEmissaryParticipantComponent::OnRep_EmissaryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel");

	UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   PreviousId                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEmissaryParticipantComponent::OnRep_AffiliatedCompany(const struct FName& PreviousId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany");

	UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params params;
	params.PreviousId = PreviousId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
// (Final, Native, Private)
void UEmissaryShipAffiliationTrackerComponent::OnRep_EmissaryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount");

	UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EmissaryLevel.EmissaryVotingService.OnRep_Votes
// (Final, RequiredAPI, Native, Private)
void AEmissaryVotingService::OnRep_Votes()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryVotingService.OnRep_Votes");

	AEmissaryVotingService_OnRep_Votes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
