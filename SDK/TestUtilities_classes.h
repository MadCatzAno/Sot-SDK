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

// Class TestUtilities.TestCharacterWithMessagingDispatcher
// 0x00A8 (FullSize[0x06D0] - InheritedSize[0x0628])
class ATestCharacterWithMessagingDispatcher : public ACharacter
{
public:
	unsigned char                                      UnknownData_RZY5[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_HB2H[0xA0];                                    // 0x0630(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestCharacterWithMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.TestController
// 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
class ATestController : public AController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestController");
		return ptr;
	}



};

// Class TestUtilities.TestControllerWithObjectMessagingDispatcher
// 0x00A8 (FullSize[0x0530] - InheritedSize[0x0488])
class ATestControllerWithObjectMessagingDispatcher : public AController
{
public:
	unsigned char                                      UnknownData_QWJ7[0xA8];                                    // 0x0488(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestControllerWithObjectMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.TestEnvQueryContextPoints
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTestEnvQueryContextPoints : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestEnvQueryContextPoints");
		return ptr;
	}



};

// Class TestUtilities.TestEnvQueryContextActors
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTestEnvQueryContextActors : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestEnvQueryContextActors");
		return ptr;
	}



};

// Class TestUtilities.TestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface
// 0x0250 (FullSize[0x02D8] - InheritedSize[0x0088])
class UTestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface : public UGameInstance
{
public:
	unsigned char                                      UnknownData_OZQU[0x1B0];                                   // 0x0088(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingDispatcher                  EventDispatcher;                                           // 0x0238(0x00A0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface");
		return ptr;
	}



};

// Class TestUtilities.TestObjectWithObjectMessagingDispatcher
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UTestObjectWithObjectMessagingDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData_C6OJ[0xA8];                                    // 0x0028(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestObjectWithObjectMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.TestPawnWithCapsule
// 0x0008 (FullSize[0x0498] - InheritedSize[0x0490])
class ATestPawnWithCapsule : public APawn
{
public:
	class UCapsuleComponent*                           BaseComponent;                                             // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestPawnWithCapsule");
		return ptr;
	}



};

// Class TestUtilities.TestPawnWithObjectMessagingDispatcherInterface
// 0x00B0 (FullSize[0x0540] - InheritedSize[0x0490])
class ATestPawnWithObjectMessagingDispatcherInterface : public APawn
{
public:
	unsigned char                                      UnknownData_HCHG[0x8];                                     // 0x0490(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6NPV[0xA0];                                    // 0x04A0(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestPawnWithObjectMessagingDispatcherInterface");
		return ptr;
	}



};

// Class TestUtilities.TestPrimitiveComponent
// 0x0010 (FullSize[0x0560] - InheritedSize[0x0550])
class UTestPrimitiveComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_BSEA[0x10];                                    // 0x0550(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestPrimitiveComponent");
		return ptr;
	}



	TEnumAsByte<Engine_ECollisionChannel> GetCollisionObjectType();
};

// Class TestUtilities.TestSkeletalMeshComponent
// 0x0040 (FullSize[0x0990] - InheritedSize[0x0950])
class UTestSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData_BV97[0x40];                                    // 0x0950(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestSkeletalMeshComponent");
		return ptr;
	}



};

// Class TestUtilities.TestStaticMeshComponent
// 0x0018 (FullSize[0x05D0] - InheritedSize[0x05B8])
class UTestStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_BQI2[0x8];                                     // 0x05B8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_W413[0x10];                                    // 0x05C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestStaticMeshComponent");
		return ptr;
	}



	void AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange);
};

// Class TestUtilities.SampleUObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USampleUObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.SampleUObject");
		return ptr;
	}



};

// Class TestUtilities.AnotherSampleUObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnotherSampleUObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.AnotherSampleUObject");
		return ptr;
	}



};

// Class TestUtilities.DelegateTester
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDelegateTester : public UObject
{
public:
	unsigned char                                      UnknownData_FEY3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.DelegateTester");
		return ptr;
	}



	void Callback();
};

// Class TestUtilities.DelegateTesterWithOneParam
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDelegateTesterWithOneParam : public UObject
{
public:
	unsigned char                                      UnknownData_JWIZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.DelegateTesterWithOneParam");
		return ptr;
	}



};

// Class TestUtilities.DelegateTesterWithFNameParam
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDelegateTesterWithFNameParam : public UDelegateTesterWithOneParam
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.DelegateTesterWithFNameParam");
		return ptr;
	}



	void Callback(const struct FName& InParam);
};

// Class TestUtilities.MockControllerWithMessagingDispatcher
// 0x00A8 (FullSize[0x0530] - InheritedSize[0x0488])
class AMockControllerWithMessagingDispatcher : public AController
{
public:
	unsigned char                                      UnknownData_HA6V[0xA8];                                    // 0x0488(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.MockControllerWithMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.MockObjectCollectorComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UMockObjectCollectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DJ4F[0x60];                                    // 0x00C8(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.MockObjectCollectorComponent");
		return ptr;
	}



};

// Class TestUtilities.MockObjectWithMessagingDispatcher
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UMockObjectWithMessagingDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData_L00R[0x70];                                    // 0x0028(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.MockObjectWithMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.MockPlayerControllerWithMessagingDispatcher
// 0x00A8 (FullSize[0x0828] - InheritedSize[0x0780])
class AMockPlayerControllerWithMessagingDispatcher : public APlayerController
{
public:
	unsigned char                                      UnknownData_HF24[0xA8];                                    // 0x0780(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.MockPlayerControllerWithMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.ObjectCollectorGameState
// 0x0060 (FullSize[0x04E0] - InheritedSize[0x0480])
class AObjectCollectorGameState : public AGameState
{
public:
	unsigned char                                      UnknownData_5JJS[0x60];                                    // 0x0480(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.ObjectCollectorGameState");
		return ptr;
	}



};

// Class TestUtilities.TestActor
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class ATestActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActor");
		return ptr;
	}



};

// Class TestUtilities.TestActorWithBoxedRpcDispatcherComponent
// 0x0008 (FullSize[0x0498] - InheritedSize[0x0490])
class ATestActorWithBoxedRpcDispatcherComponent : public APawn
{
public:
	class UBoxedRpcDispatcherComponent*                BoxedRpcDispatcherComponent;                               // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActorWithBoxedRpcDispatcherComponent");
		return ptr;
	}



};

// Class TestUtilities.TestActorWithCapsule
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ATestActorWithCapsule : public AActor
{
public:
	class UCapsuleComponent*                           BaseComponent;                                             // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActorWithCapsule");
		return ptr;
	}



};

// Class TestUtilities.TestActorWithObjectMessagingDispatcher
// 0x00A8 (FullSize[0x04D0] - InheritedSize[0x0428])
class ATestActorWithObjectMessagingDispatcher : public AActor
{
public:
	unsigned char                                      UnknownData_VIFU[0xA8];                                    // 0x0428(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActorWithObjectMessagingDispatcher");
		return ptr;
	}



};

// Class TestUtilities.MockActorWithMessagingDispatcherAndSceneComponent
// 0x0008 (FullSize[0x04D8] - InheritedSize[0x04D0])
class AMockActorWithMessagingDispatcherAndSceneComponent : public ATestActorWithObjectMessagingDispatcher
{
public:
	class USceneComponent*                             SceneComponent;                                            // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.MockActorWithMessagingDispatcherAndSceneComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
