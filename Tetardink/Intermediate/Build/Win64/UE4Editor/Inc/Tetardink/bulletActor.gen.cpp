// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetardink/bulletActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebulletActor() {}
// Cross Module References
	TETARDINK_API UClass* Z_Construct_UClass_AbulletActor_NoRegister();
	TETARDINK_API UClass* Z_Construct_UClass_AbulletActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tetardink();
// End Cross Module References
	void AbulletActor::StaticRegisterNativesAbulletActor()
	{
	}
	UClass* Z_Construct_UClass_AbulletActor_NoRegister()
	{
		return AbulletActor::StaticClass();
	}
	struct Z_Construct_UClass_AbulletActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbulletActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetardink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbulletActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "bulletActor.h" },
		{ "ModuleRelativePath", "bulletActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbulletActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbulletActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbulletActor_Statics::ClassParams = {
		&AbulletActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AbulletActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AbulletActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbulletActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbulletActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AbulletActor, 671749972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbulletActor(Z_Construct_UClass_AbulletActor, &AbulletActor::StaticClass, TEXT("/Script/Tetardink"), TEXT("AbulletActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbulletActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
