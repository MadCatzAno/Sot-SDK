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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C
// 0x0010 (FullSize[0x0418] - InheritedSize[0x0408])
class ABP_PromptActor_Rowboat_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_MaidenVoyage_RowboatTutorial_C*   PromptCoordinator;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_Rowboat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
