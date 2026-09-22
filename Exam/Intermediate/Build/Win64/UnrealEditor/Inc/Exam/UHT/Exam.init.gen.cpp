// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExam_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Exam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Exam()
	{
		if (!Z_Registration_Info_UPackage__Script_Exam.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Exam",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x73201155,
			0x87CE88E2,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Exam.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Exam.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Exam(Z_Construct_UPackage__Script_Exam, TEXT("/Script/Exam"), Z_Registration_Info_UPackage__Script_Exam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x73201155, 0x87CE88E2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
