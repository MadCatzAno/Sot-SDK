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

// Class WaterSlide.WaterSlideParamsDataAsset
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UWaterSlideParamsDataAsset : public UDataAsset
{
public:
	struct FWaterSlideParams                           WaterSlideParams;                                          // 0x0028(0x0024) (Edit)
	unsigned char                                      UnknownData_WWQS[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlideParamsDataAsset");
		return ptr;
	}



};

// Class WaterSlide.WaterSlide
// 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
class AWaterSlide : public AActor
{
public:
	class USplineComponent*                            SlideSpline;                                               // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UWaterSlideParamsDataAsset*                  WaterSlideParamsDataAsset;                                 // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UPrimitiveComponent*                         EntranceCollisionComponent;                                // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AWaterSlide*                                 ContinuedWaterSlideRoute;                                  // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AWaterSlide*                                 LeftWaterSlideRoute;                                       // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AWaterSlide*                                 RightWaterSlideRoute;                                      // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               IsEndOfSlide;                                              // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_TV5H[0x3];                                     // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     EndOfSlideLaunchForce;                                     // 0x040C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	class UWaterSlideAudioParams*                      WaterSlideAudioParams;                                     // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J2JF[0x20];                                    // 0x0420(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlide");
		return ptr;
	}



	void SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent);
	void ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
};

// Class WaterSlide.WaterSlideActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterSlideActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlideActionStateId");
		return ptr;
	}



};

// Class WaterSlide.WaterSlideAudioParams
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UWaterSlideAudioParams : public UDataAsset
{
public:
	class UWwiseEvent*                                 WaterSlideStart;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WaterSlideEnd;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WaterSlideIsEndOneShot;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WaterSlideChangeForkOneShot;                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlayerSpeedOnWaterSlideRTPC;                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayerSpeedThatMapsToOne;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayerSpeedThatMapsToZero;                                 // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlideAudioParams");
		return ptr;
	}



};

// Class WaterSlide.WaterSlideInputComponent
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UWaterSlideInputComponent : public ULookAtOffsetInputComponent
{
public:
	unsigned char                                      UnknownData_7HXD[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlideInputComponent");
		return ptr;
	}



};

// Class WaterSlide.WaterSlidePlayerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterSlidePlayerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlidePlayerInterface");
		return ptr;
	}



};

// Class WaterSlide.WaterSlidePlayerComponent
// 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
class UWaterSlidePlayerComponent : public UDoubleIntentComponent
{
public:
	unsigned char                                      UnknownData_TADI[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    PlayerWaterSlideSplashingVFXComponent;                     // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UParticleSystem*                             PlayerWaterSlideSplashingVFX;                              // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SpawnLocationZOffset;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UJ3F[0x14];                                    // 0x00FC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AWaterSlide*                                 CurrentWaterSlide;                                         // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlidePlayerComponent");
		return ptr;
	}



};

// Class WaterSlide.WaterSlideVeeringAnalogInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UWaterSlideVeeringAnalogInputId : public UAnalogInputId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WaterSlide.WaterSlideVeeringAnalogInputId");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
