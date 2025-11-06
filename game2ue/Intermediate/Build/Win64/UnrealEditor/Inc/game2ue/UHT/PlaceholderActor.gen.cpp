// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "game2ue/PlaceholderActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlaceholderActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAME2UE_API UClass* Z_Construct_UClass_APlaceholderActor();
GAME2UE_API UClass* Z_Construct_UClass_APlaceholderActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_game2ue();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlaceholderActor ********************************************************
void APlaceholderActor::StaticRegisterNativesAPlaceholderActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlaceholderActor;
UClass* APlaceholderActor::GetPrivateStaticClass()
{
	using TClass = APlaceholderActor;
	if (!Z_Registration_Info_UClass_APlaceholderActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlaceholderActor"),
			Z_Registration_Info_UClass_APlaceholderActor.InnerSingleton,
			StaticRegisterNativesAPlaceholderActor,
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
	return Z_Registration_Info_UClass_APlaceholderActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APlaceholderActor_NoRegister()
{
	return APlaceholderActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlaceholderActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlaceholderActor.h" },
		{ "ModuleRelativePath", "PlaceholderActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceholderActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlaceholderActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_game2ue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceholderActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaceholderActor_Statics::ClassParams = {
	&APlaceholderActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceholderActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlaceholderActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlaceholderActor()
{
	if (!Z_Registration_Info_UClass_APlaceholderActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaceholderActor.OuterSingleton, Z_Construct_UClass_APlaceholderActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlaceholderActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceholderActor);
APlaceholderActor::~APlaceholderActor() {}
// ********** End Class APlaceholderActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID__Programowanie_game2_game2ue_Source_game2ue_PlaceholderActor_h__Script_game2ue_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlaceholderActor, APlaceholderActor::StaticClass, TEXT("APlaceholderActor"), &Z_Registration_Info_UClass_APlaceholderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaceholderActor), 3091012309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Programowanie_game2_game2ue_Source_game2ue_PlaceholderActor_h__Script_game2ue_3050195883(TEXT("/Script/game2ue"),
	Z_CompiledInDeferFile_FID__Programowanie_game2_game2ue_Source_game2ue_PlaceholderActor_h__Script_game2ue_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Programowanie_game2_game2ue_Source_game2ue_PlaceholderActor_h__Script_game2ue_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
