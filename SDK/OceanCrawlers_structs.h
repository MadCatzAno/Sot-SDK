﻿#pragma once

// Name: S, Version: 2.2.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanCrawlers.OceanCrawlerAudioKeyPair
// 0x0010
struct FOceanCrawlerAudioKeyPair
{
	TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> AudioKey;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_97BA[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 AudioEvent;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct OceanCrawlers.OceanCrawlerBuffAudioSettings
// 0x0010
struct FOceanCrawlerBuffAudioSettings
{
	class UWwiseEvent*                                 GiveBuffAudioEvent;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 ReceiveBuffAudioEvent;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
