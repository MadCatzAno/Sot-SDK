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

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            InThreshold                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_SetHitchThreshold(int InThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold");

	UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params params;
	params.InThreshold = InThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchNameThisFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame");

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchLengthThisFrameMs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs");

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
// (Final, Native, Static, Public, BlueprintCallable)
void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DumpThisFramesHitchesToLog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog");

	UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DidHitchOccurThisFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame");

	UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Deactivate
// (Final, Native, Public, BlueprintCallable)
void UStallDetector::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Deactivate");

	UStallDetector_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareEngine.StallDetector.CreateStallDetector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CreateActive                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStallDetector*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UStallDetector* UStallDetector::STATIC_CreateStallDetector(float Delay, bool CreateActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.CreateStallDetector");

	UStallDetector_CreateStallDetector_Params params;
	params.Delay = Delay;
	params.CreateActive = CreateActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Activate
// (Final, Native, Public, BlueprintCallable)
void UStallDetector::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Activate");

	UStallDetector_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMesh*>     MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<struct FStaticMeshComponentList> OutComponentLists              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// class ULevel*                  RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshComponentList>* OutComponentLists, class ULevel* RestrictToLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents");

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutComponentLists != nullptr)
		*OutComponentLists = params.OutComponentLists;

}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMesh*>     MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<struct FStaticMeshActorList> OutActorLists                  (Parm, OutParm, ZeroConstructor)
// class ULevel*                  RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshActorList>* OutActorLists, class ULevel* RestrictToLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors");

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActorLists != nullptr)
		*OutActorLists = params.OutActorLists;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
