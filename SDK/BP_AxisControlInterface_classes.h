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

// BlueprintGeneratedClass BP_AxisControlInterface.BP_AxisControlInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_AxisControlInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AxisControlInterface.BP_AxisControlInterface_C");
		return ptr;
	}



	void StickInput(float StickInputX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
