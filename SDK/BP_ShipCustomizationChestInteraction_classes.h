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

// BlueprintGeneratedClass BP_ShipCustomizationChestInteraction.BP_ShipCustomizationChestInteraction_C
// 0x0008 (FullSize[0x04F8] - InheritedSize[0x04F0])
class ABP_ShipCustomizationChestInteraction_C : public AShipCustomizationChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipCustomizationChestInteraction.BP_ShipCustomizationChestInteraction_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
