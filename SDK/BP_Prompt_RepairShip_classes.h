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

// BlueprintGeneratedClass BP_Prompt_RepairShip.BP_Prompt_RepairShip_C
// 0x0118 (FullSize[0x0230] - InheritedSize[0x0118])
class UBP_Prompt_RepairShip_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_ShipDamaged;                                         // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2FMK[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_OnShipDamaged;                                      // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_Complete;                                            // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QF6K[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                Prompt_RepairShip;                                         // 0x0178(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_CurrentShipChanged;                                 // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AShip*                                       CurrentShip;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_RepairShip.BP_Prompt_RepairShip_C");
		return ptr;
	}



	void UnregisterDamageEventFromCurrentShip();
	void RegisterDamageEventWithCurrentShip();
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnCurrentShipChanged(const struct FEventCurrentShipChanged& Event);
	void OnShipDamaged(const struct FDamageZoneDamageLevelChanged& Event);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_RepairShip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
