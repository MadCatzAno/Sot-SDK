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

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCapture
// 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData_YX81[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCaptureProtocolID                          CaptureType;                                               // 0x0038(0x0008) (Edit, Config)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovieSceneCaptureSettings                  Settings;                                                  // 0x0048(0x0050) (Edit, Config)
	bool                                               bUseSeparateProcess;                                       // 0x0098(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               bCloseEditorWhenCaptureStarts;                             // 0x0099(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_H8VJ[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AdditionalCommandLineArguments;                            // 0x00A0(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash)
	struct FString                                     InheritedCommandLineArguments;                             // 0x00B0(0x0010) (Edit, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_03FG[0x150];                                   // 0x00C0(0x0150) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (FullSize[0x0210] - InheritedSize[0x0210])
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.LevelCapture
// 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                         // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J6K0[0xB];                                     // 0x0211(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       PrerequisiteActorId;                                       // 0x021C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KEJ2[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCaptureEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}



	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
};

// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData_O4SD[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.BmpImageCaptureSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4G69[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                       // 0x0028(0x0010) (Edit, Config)
	bool                                               bCaptureFramesInHDR;                                       // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XQEJ[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HDRCompressionQuality;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MovieSceneCapture_EHDRCaptureGamut>    CaptureGamut;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N3Y9[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       PostProcessingMaterial;                                    // 0x0048(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T67G[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CompressionQuality;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     VideoCodec;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
