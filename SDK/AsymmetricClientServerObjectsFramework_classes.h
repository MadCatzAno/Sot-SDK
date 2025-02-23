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

// Class AsymmetricClientServerObjectsFramework.AsymmetricClientObject
// 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
class AAsymmetricClientObject : public AActor
{
public:
	unsigned char                                      UnknownData_H6SL[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               BaseComponent;                                             // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStaticMeshMemoryConstraintComponent*        ThirdPersonMesh;                                           // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                 // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBuoyancyComponent*                          BuoyancyComponent;                                         // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USpawnDependentTrackedOwnerComponent*        SpawnDependentTrackedOwnerComponent;                       // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FRotator                                    RotationWhenPlacingWorldProxy;                             // 0x0410(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	float                                              ZOffsetWhenPlacingWorldProxy;                              // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AsymmetricClientServerObjectsFramework.AsymmetricClientObject");
		return ptr;
	}



};

// Class AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager
// 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
class AAsymmetricObjectServerManager : public AActor
{
public:
	unsigned char                                      UnknownData_8JC3[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAsymmetricClientObject*                     SpawnedObject;                                             // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SceneComponent;                                            // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       AsymmetricObjectAsset;                                     // 0x03F8(0x0010) (Net, ZeroConstructor, RepNotify)
	TAssetPtr<class UClass>                            ForcedAsymmetricObjectAsset;                               // 0x0408(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3PS7[0x4];                                     // 0x0408(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager");
		return ptr;
	}



	void OnRep_AsymmetricObjectAsset();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
