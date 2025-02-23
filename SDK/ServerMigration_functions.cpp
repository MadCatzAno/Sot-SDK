﻿// Name: S, Version: 2.2.1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NewOwner                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor");

	UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params params;
	params.TargetActor = TargetActor;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OffsetFromDriverTime           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime");

	UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params params;
	params.PlayerController = PlayerController;
	params.OffsetFromDriverTime = OffsetFromDriverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_ResumePropertyTracking(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking");

	UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend");

	UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ClientConnectionIdx            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*         TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsComponentNetDormant(int ClientConnectionIdx, class UActorComponent* TargetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant");

	UNetworkTestingBlueprintFunctionLibrary_IsComponentNetDormant_Params params;
	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor");

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetDormant(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant");

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInNetworkClusterGlobal(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkClusterGlobal_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NetworkClusterOwner            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkCluster_Params params;
	params.TargetActor = TargetActor;
	params.NetworkClusterOwner = NetworkClusterOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  LevelOwner                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkClusterOnOwner_Params params;
	params.TargetActor = TargetActor;
	params.LevelOwner = LevelOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInLevelNetworkCluster(class AActor* TargetActor, const struct FName& Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkCluster_Params params;
	params.TargetActor = TargetActor;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ClientConnectionIdx            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*         TargetComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_HasComponentReplicator(int ClientConnectionIdx, class UActorComponent* TargetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator");

	UNetworkTestingBlueprintFunctionLibrary_HasComponentReplicator_Params params;
	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UNetworkTestingBlueprintFunctionLibrary::STATIC_GetReliableBufferBunchCount(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount");

	UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActorComponent*         TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_FlushComponentNetDormancy(class UActorComponent* TargetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy");

	UNetworkTestingBlueprintFunctionLibrary_FlushComponentNetDormancy_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer");

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer");

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLatentActionInfo       LatentInfo                     (Parm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress");

	UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic");

	UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLatentActionInfo       LatentInfo                     (Parm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent");

	UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel");

	UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ActorGroup                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params params;
	params.ActorGroup = ActorGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Offset                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FServerSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings");

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings");

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PacketLag                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PacketLagVariance              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PacketLoss                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings");

	UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PacketLag = PacketLag;
	params.PacketLagVariance = PacketLagVariance;
	params.PacketLoss = PacketLoss;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_ResumeReplication(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication");

	UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 IdentificationName             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const struct FString& IdentificationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor");

	UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params params;
	params.TargetActor = TargetActor;
	params.IdentificationName = IdentificationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bDropUnreliableRPCsWhilePaused (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerMigrationBlueprintFunctionLibrary::STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication");

	UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params params;
	params.TargetActor = TargetActor;
	params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerMigrationBlueprintFunctionLibrary::STATIC_HasActorChannelFromServer(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer");

	UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveDormantActor(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor");

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveActorChannel(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel");

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
