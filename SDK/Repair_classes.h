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

// Class Repair.RepairTypeId
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class URepairTypeId : public UObject
{
public:
	struct FText                                       DisplayName;                                               // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_PN6P[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Repair.RepairTypeId");
		return ptr;
	}



};

// Class Repair.RepairableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URepairableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Repair.RepairableInterface");
		return ptr;
	}



	void HandleDestroy();
	class UClass* GetRepairType();
	float GetRepairTime();
	TEnumAsByte<Repair_ERepairableState> GetRepairableState();
};

// Class Repair.RepairingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URepairingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Repair.RepairingInterface");
		return ptr;
	}



	class UClass* GetRepairType();
};

// Class Repair.WoodRepairTypeId
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UWoodRepairTypeId : public URepairTypeId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Repair.WoodRepairTypeId");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
