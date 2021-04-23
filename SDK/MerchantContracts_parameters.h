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

// Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
struct UMerchantContractsBlueprintLibrary_GetDateFromTimeLimit_Params
{
	TScriptInterface<class UGameServiceProviderInterface> ServiceProviderInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                              TimeLimit;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
