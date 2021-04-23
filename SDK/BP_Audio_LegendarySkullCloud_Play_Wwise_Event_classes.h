﻿#pragma once

// Name: SoT, Version: 2.1.0.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C
// 0x0038 (FullSize[0x0460] - InheritedSize[0x0428])
class ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FWwiseEmitter                               LegendaryFortHorn;                                         // 0x0438(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 LegendaryHornEvent;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Audio_LegendarySkullCloud_Play_Wwise_Event(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
