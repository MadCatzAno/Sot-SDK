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

// Function Time.TimeInterface.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameTime               ReturnValue                    (Parm, OutParm, ReturnParm)
struct FGameTime UTimeInterface::GetTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetTime");

	UTimeInterface_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeInterface.GetSmoothRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FDateTime UTimeInterface::GetSmoothRealWorldTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetSmoothRealWorldTime");

	UTimeInterface_GetSmoothRealWorldTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeInterface.GetPreciseRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FDateTime UTimeInterface::GetPreciseRealWorldTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetPreciseRealWorldTime");

	UTimeInterface_GetPreciseRealWorldTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               RealWorldTime                  (ConstParm, Parm, ZeroConstructor)
// struct FGameTime               ReturnValue                    (Parm, OutParm, ReturnParm)
struct FGameTime UTimeInterface::ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime");

	UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params params;
	params.RealWorldTime = RealWorldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameTime               GameWorldTime                  (ConstParm, Parm)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FDateTime UTimeInterface::ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime");

	UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params params;
	params.GameWorldTime = GameWorldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.CustomizableTimeInterface.SetTimeScalar
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            RequestedTimeScalar            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomizableTimeInterface::SetTimeScalar(int RequestedTimeScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetTimeScalar");

	UCustomizableTimeInterface_SetTimeScalar_Params params;
	params.RequestedTimeScalar = RequestedTimeScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.CustomizableTimeInterface.SetSunset
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunsetHours                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomizableTimeInterface::SetSunset(float SunsetHours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetSunset");

	UCustomizableTimeInterface_SetSunset_Params params;
	params.SunsetHours = SunsetHours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.CustomizableTimeInterface.SetSunrise
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunriseHours                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomizableTimeInterface::SetSunrise(float SunriseHours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetSunrise");

	UCustomizableTimeInterface_SetSunrise_Params params;
	params.SunriseHours = SunriseHours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.CustomizableTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameTime               RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)
void UCustomizableTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetGameWorldTime");

	UCustomizableTimeInterface_SetGameWorldTime_Params params;
	params.RequestedTime = RequestedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.CustomizableTimeInterface.GetTimeScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UCustomizableTimeInterface::GetTimeScalar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.GetTimeScalar");

	UCustomizableTimeInterface_GetTimeScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.CustomizableTimeInterface.EnableQueryServiceTime
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCustomizableTimeInterface::EnableQueryServiceTime(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.EnableQueryServiceTime");

	UCustomizableTimeInterface_EnableQueryServiceTime_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.DebugTimeInterface.SetTimeScalar
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            RequestedTimeScalar            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugTimeInterface::SetTimeScalar(int RequestedTimeScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetTimeScalar");

	UDebugTimeInterface_SetTimeScalar_Params params;
	params.RequestedTimeScalar = RequestedTimeScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.DebugTimeInterface.SetSunset
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunsetHours                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugTimeInterface::SetSunset(float SunsetHours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetSunset");

	UDebugTimeInterface_SetSunset_Params params;
	params.SunsetHours = SunsetHours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.DebugTimeInterface.SetSunrise
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunriseHours                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugTimeInterface::SetSunrise(float SunriseHours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetSunrise");

	UDebugTimeInterface_SetSunrise_Params params;
	params.SunriseHours = SunriseHours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.DebugTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameTime               RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)
void UDebugTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetGameWorldTime");

	UDebugTimeInterface_SetGameWorldTime_Params params;
	params.RequestedTime = RequestedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.DebugTimeInterface.GetTimeScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UDebugTimeInterface::GetTimeScalar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.GetTimeScalar");

	UDebugTimeInterface_GetTimeScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.EnableQueryServiceTime
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugTimeInterface::EnableQueryServiceTime(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.EnableQueryServiceTime");

	UDebugTimeInterface_EnableQueryServiceTime_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               InDateTime                     (Parm, ZeroConstructor)
// struct FReplicatedDateTime     ReturnValue                    (Parm, OutParm, ReturnParm)
struct FReplicatedDateTime UTimeBlueprintLibrary::STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime");

	UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FReplicatedDateTime     InDateTime                     (Parm)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FDateTime UTimeBlueprintLibrary::STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime");

	UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params params;
	params.InDateTime = InDateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Day                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Minute                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Second                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Millisecond                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FDateTime UTimeBlueprintLibrary::STATIC_MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw");

	UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params params;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hour = Hour;
	params.Minute = Minute;
	params.Second = Second;
	params.Millisecond = Millisecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               FirstDateTime                  (Parm, ZeroConstructor)
// struct FDateTime               SecondDateTime                 (Parm, ZeroConstructor)
// struct FTimespan               Tolerance                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTimeBlueprintLibrary::STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance");

	UTimeBlueprintLibrary_DateTimesWithinTolerance_Params params;
	params.FirstDateTime = FirstDateTime;
	params.SecondDateTime = SecondDateTime;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Time.TimeService.OnRep_ReplicatedServerTime
// (Final, Native, Protected)
void ATimeService::OnRep_ReplicatedServerTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeService.OnRep_ReplicatedServerTime");

	ATimeService_OnRep_ReplicatedServerTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int64_t                        ServiceTimeInTicks             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATimeService::MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.TimeService.MulticastOnServiceTimeChangedRPC");

	ATimeService_MulticastOnServiceTimeChangedRPC_Params params;
	params.ServiceTimeInTicks = ServiceTimeInTicks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int                            Scalar                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64_t                        Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugTimeService::MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC");

	ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params params;
	params.Scalar = Scalar;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int                            Scalar                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64_t                        Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACustomizableTimeService::MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC");

	ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params params;
	params.Scalar = Scalar;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
