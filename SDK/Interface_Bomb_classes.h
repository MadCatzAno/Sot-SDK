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

// BlueprintGeneratedClass Interface_Bomb.Interface_Bomb_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInterface_Bomb_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Bomb.Interface_Bomb_C");
		return ptr;
	}



	void Interface_Trigger();
	void Set_Bomb_Parameters(float Radius, int Seed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
