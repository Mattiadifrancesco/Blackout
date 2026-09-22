// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam/NewCharacterMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNewCharacterMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
EXAM_API UClass* Z_Construct_UClass_UNewCharacterMovementComponent();
EXAM_API UClass* Z_Construct_UClass_UNewCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNewCharacterMovementComponent *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNewCharacterMovementComponent;
UClass* UNewCharacterMovementComponent::GetPrivateStaticClass()
{
	using TClass = UNewCharacterMovementComponent;
	if (!Z_Registration_Info_UClass_UNewCharacterMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NewCharacterMovementComponent"),
			Z_Registration_Info_UClass_UNewCharacterMovementComponent.InnerSingleton,
			StaticRegisterNativesUNewCharacterMovementComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UNewCharacterMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNewCharacterMovementComponent_NoRegister()
{
	return UNewCharacterMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNewCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NewCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "NewCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNewCharacterMovementComponent constinit property declarations ***********
// ********** End Class UNewCharacterMovementComponent constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNewCharacterMovementComponent_Statics
UObject* (*const Z_Construct_UClass_UNewCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewCharacterMovementComponent_Statics::ClassParams = {
	&UNewCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewCharacterMovementComponent_Statics::Class_MetaDataParams)
};
void UNewCharacterMovementComponent::StaticRegisterNativesUNewCharacterMovementComponent()
{
}
UClass* Z_Construct_UClass_UNewCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UNewCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UNewCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewCharacterMovementComponent.OuterSingleton;
}
UNewCharacterMovementComponent::UNewCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNewCharacterMovementComponent);
UNewCharacterMovementComponent::~UNewCharacterMovementComponent() {}
// ********** End Class UNewCharacterMovementComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_PC_A269_Documents_Unreal_Projects_Exam_Source_Exam_NewCharacterMovementComponent_h__Script_Exam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewCharacterMovementComponent, UNewCharacterMovementComponent::StaticClass, TEXT("UNewCharacterMovementComponent"), &Z_Registration_Info_UClass_UNewCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewCharacterMovementComponent), 1244158860U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_PC_A269_Documents_Unreal_Projects_Exam_Source_Exam_NewCharacterMovementComponent_h__Script_Exam_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_A269_Documents_Unreal_Projects_Exam_Source_Exam_NewCharacterMovementComponent_h__Script_Exam_3778387346{
	TEXT("/Script/Exam"),
	Z_CompiledInDeferFile_FID_Users_PC_A269_Documents_Unreal_Projects_Exam_Source_Exam_NewCharacterMovementComponent_h__Script_Exam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_A269_Documents_Unreal_Projects_Exam_Source_Exam_NewCharacterMovementComponent_h__Script_Exam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
