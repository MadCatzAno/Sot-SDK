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
// Enums
//---------------------------------------------------------------------------

// Enum Animation.ECharacterIKLimb
enum class Animation_ECharacterIKLimb : uint8_t
{
	ECharacterIKLimb__None         = 0,
	ECharacterIKLimb__LeftHand     = 1,
	ECharacterIKLimb__RightHand    = 2,
	ECharacterIKLimb__LeftFoot     = 3,
	ECharacterIKLimb__RightFoot    = 4,
	ECharacterIKLimb__ECharacterIKLimb_MAX = 5,

};

// Enum Animation.EAthenaAnimationSocketGroupCharacterSize
enum class Animation_EAthenaAnimationSocketGroupCharacterSize : uint8_t
{
	EAthenaAnimationSocketGroupCharacterSize__Default = 0,
	EAthenaAnimationSocketGroupCharacterSize__Large = 1,
	EAthenaAnimationSocketGroupCharacterSize__Thin = 2,
	EAthenaAnimationSocketGroupCharacterSize__EAthenaAnimationSocketGroupCharacterSize_MAX = 3,

};

// Enum Animation.EAthenaAnimationSocketGroup
enum class Animation_EAthenaAnimationSocketGroup : uint8_t
{
	EAthenaAnimationSocketGroup__Male = 0,
	EAthenaAnimationSocketGroup__Female = 1,
	EAthenaAnimationSocketGroup__EAthenaAnimationSocketGroup_MAX = 2,

};

// Enum Animation.ELimbIKSpace
enum class Animation_ELimbIKSpace : uint8_t
{
	ELimbIKSpace__Local            = 0,
	ELimbIKSpace__World            = 1,
	ELimbIKSpace__Character        = 2,
	ELimbIKSpace__ELimbIKSpace_MAX = 3,

};

// Enum Animation.ECustomAnimationMontageType
enum class Animation_ECustomAnimationMontageType : uint8_t
{
	ECustomAnimationMontageType__OneShot = 0,
	ECustomAnimationMontageType__LoopingOneShot = 1,
	ECustomAnimationMontageType__LoopingStaged = 2,
	ECustomAnimationMontageType__ECustomAnimationMontageType_MAX = 3,

};

// Enum Animation.EDockableSocketOverlapUpdates
enum class Animation_EDockableSocketOverlapUpdates : uint8_t
{
	EDockableSocketOverlapUpdates__AllowUpdate = 0,
	EDockableSocketOverlapUpdates__BlockUpdate = 1,
	EDockableSocketOverlapUpdates__EDockableSocketOverlapUpdates_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Animation.LimbIK
// 0x0060
struct FLimbIK
{
	unsigned char                                      UnknownData_GJJE[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.CharacterAnimationIKUpdateParams
// 0x0040
struct FCharacterAnimationIKUpdateParams
{
	float                                              CurrentAlpha;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TranslationStrength;                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationStrength;                                          // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZC77[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0020(0x0010) (BlueprintVisible, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKEffectorSpace>              EffectorSpace;                                             // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SWFI[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentBone;                                                // 0x0034(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6DYN[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.AnimDataEntryStructWrapper
// 0x0018
struct FAnimDataEntryStructWrapper
{
	unsigned char                                      UnknownData_M33Z[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.AnimationDataStoreEntry
// 0x0018
struct FAnimationDataStoreEntry
{
	class UClass*                                      AnimDataId;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimationData*                              AnimData;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationServerData*                        AnimServerData;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.AnimationDataStoreLoadingEntry
// 0x0040
struct FAnimationDataStoreLoadingEntry
{
	unsigned char                                      UnknownData_7VQ2[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AnimDataId;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct Animation.AnimationDataStoreAssetEntry
// 0x0018
struct FAnimationDataStoreAssetEntry
{
	class UClass*                                      AnimDataId;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      AnimDataTypeCooked;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimationServerData*                        AnimServerData;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.AnimationDataStoreAssetWeakReferenceEntry
// 0x0028
struct FAnimationDataStoreAssetWeakReferenceEntry
{
	class UClass*                                      AnimDataId;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            AnimData;                                                  // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0UUQ[0x4];                                     // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Animation.CurveUpdateValues
// 0x000C
struct FCurveUpdateValues
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FinalValue;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.CosmeticItems
// 0x0010
struct FCosmeticItems
{
	TArray<class AActor*>                              CosmeticItemArray;                                         // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct Animation.CosmeticItemAnimationSetLoopData
// 0x0020
struct FCosmeticItemAnimationSetLoopData
{
	class UAnimSequenceBase*                           Into;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Loop;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       IntoSyncGroup;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LoopSyncGroup;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.CustomAnimationMontageId
// 0x0008
struct FCustomAnimationMontageId
{
	struct FName                                       CustomAnimationMontageId;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.CustomAnimationMontageComponentReplicatedData
// 0x000C
struct FCustomAnimationMontageComponentReplicatedData
{
	struct FCustomAnimationMontageId                   CustomMontageId;                                           // 0x0000(0x0008)
	int                                                AnimationCallId;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.CustomAnimationMontageStagedLoopingData
// 0x0028
struct FCustomAnimationMontageStagedLoopingData
{
	class UAnimMontage*                                Into;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        LoopAnims;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        OutOfAnims;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Animation.CustomAnimationMontageDefinitionEntry
// 0x0018
struct FCustomAnimationMontageDefinitionEntry
{
	struct FName                                       MontageId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       Definition;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Animation.DockableInfo
// 0x0018
struct FDockableInfo
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SceneComponent;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Animation_EDockableSocketOverlapUpdates> ShouldOverlapsUpdateOnParentUpdate;                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XNVY[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.Docker
// 0x0050
struct FDocker
{
	unsigned char                                      UnknownData_RBX1[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.ActorVelocityData
// 0x0018
struct FActorVelocityData
{
	struct FVector                                     ActorsVelocityVector;                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ActorSpeed;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCharacterMoving;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_94AU[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WantedMovementSpeed;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.TransformBlendCurve
// 0x0500
struct FTransformBlendCurve
{
	bool                                               UseLocationCurve;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CFBR[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeVectorCurve                         LocationCurve;                                             // 0x0008(0x0170) (Edit)
	bool                                               UseRotationCurve;                                          // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BX0W[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeVectorCurve                         RotationCurve;                                             // 0x0180(0x0170) (Edit)
	bool                                               UseScaleCurve;                                             // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O2TL[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeVectorCurve                         ScaleCurve;                                                // 0x02F8(0x0170) (Edit)
	unsigned char                                      UnknownData_FRR0[0x8];                                     // 0x0468(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SourceTransform;                                           // 0x0470(0x0030) (Edit, IsPlainOldData, NoDestructor)
	struct FTransform                                  TargetTransform;                                           // 0x04A0(0x0030) (Edit, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KUUP[0x30];                                    // 0x04D0(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.WeightedAnimationData
// 0x0018
struct FWeightedAnimationData
{
	struct FStringAssetReference                       Animation;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Weighting;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_II78[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.HitReactionAnimationData
// 0x0008
struct FHitReactionAnimationData
{
	class UBlendSpace1D*                               HitReactBlendSpace;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.EventCosmeticItemAttachmentSwitched
// 0x0008
struct FEventCosmeticItemAttachmentSwitched
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.EventCosmeticItemSpawnedOwnerNotification
// 0x0008
struct FEventCosmeticItemSpawnedOwnerNotification
{
	class AActor*                                      CosmeticItemActor;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.EventCosmeticItemSpawned
// 0x0010
struct FEventCosmeticItemSpawned
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCosmeticItemAnimationSetDataAsset*          CosmeticData;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.EventDockableObjectDestroyed
// 0x0001
struct FEventDockableObjectDestroyed
{
	unsigned char                                      UnknownData_HUAO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventAnimationHappyReact
// 0x0001
struct FEventAnimationHappyReact
{
	unsigned char                                      UnknownData_SXJL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventHitReactAnimationFinished
// 0x0001
struct FEventHitReactAnimationFinished
{
	unsigned char                                      UnknownData_O5K9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventHitReactAnimationRequested
// 0x001C
struct FEventHitReactAnimationRequested
{
	struct FVector                                     HitNormal;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitVelocity;                                               // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_ECharacterHitReactionAnimType>  ReactionAnimType;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EXGS[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.HitReactionAnimationState
// 0x0028
struct FHitReactionAnimationState
{
	float                                              Yaw;                                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AdditiveBlend;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterHitReactionAnimType>  ReactType;                                                 // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ActivateNewHitReact;                                       // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A8PA[0x1E];                                    // 0x000A(0x001E) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.AnimationLookAtParams
// 0x000C
struct FAnimationLookAtParams
{
	float                                              ActivationSpeed;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalLimit;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalLimit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.AnimationLookAt
// 0x0098
struct FAnimationLookAt
{
	unsigned char                                      UnknownData_3ZNF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimationLookAtParams                      Params;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     LookAtTarget;                                              // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IKLookAtActive;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5XXT[0x77];                                    // 0x0021(0x0077) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventAnimationLookAtUpdated
// 0x0001
struct FEventAnimationLookAtUpdated
{
	unsigned char                                      UnknownData_H7SP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.IKLookAtParams
// 0x000C
struct FIKLookAtParams
{
	float                                              ActivationSpeed;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalLimit;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalLimit;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.AnimNode_WeightedLoadOnDemandSquencePlayer
// 0x0030 (0x0070 - 0x0040)
struct FAnimNode_WeightedLoadOnDemandSquencePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              PlayRate;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I55T[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWeightedAnimSequenceLoadOnDemand*           WeightedAnimSequenceLoadOnDemand;                          // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GroupIndex;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GV7O[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               CurrentSequence;                                           // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               NextSequence;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AT7A[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventCustomAnimationMontageExitRequested
// 0x000C
struct FEventCustomAnimationMontageExitRequested
{
	unsigned char                                      UnknownData_MYGX[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventCustomAnimationMontageRequested
// 0x0008
struct FEventCustomAnimationMontageRequested
{
	unsigned char                                      UnknownData_TJXF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.CustomAnimationMontageStateMachine
// 0x00D8
struct FCustomAnimationMontageStateMachine
{
	class UCustomAnimationMontageDefinitionDataAsset*  ActiveState;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomAnimationMontageDefinitionDataAsset*  PendingState;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ActiveMontage;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M7F9[0xC0];                                    // 0x0018(0x00C0) MISSED OFFSET (PADDING)

};

// ScriptStruct Animation.EventPreviewCharacterAnimationRequest
// 0x0008
struct FEventPreviewCharacterAnimationRequest
{
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.AnimationStateCompleteEvent
// 0x0008
struct FAnimationStateCompleteEvent
{
	class UClass*                                      CompletedStateId;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct Animation.WeightedAnimationTimeout
// 0x0014
struct FWeightedAnimationTimeout
{
	struct FFloatRange                                 TimeoutRange;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Weighting;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Animation.WeightedAnimationTimeoutSelector
// 0x0010
struct FWeightedAnimationTimeoutSelector
{
	TArray<struct FWeightedAnimationTimeout>           Weightings;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
