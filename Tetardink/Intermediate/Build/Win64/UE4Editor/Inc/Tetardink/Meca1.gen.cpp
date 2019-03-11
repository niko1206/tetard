// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tetardink/Meca1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeca1() {}
// Cross Module References
	TETARDINK_API UClass* Z_Construct_UClass_AMeca1_NoRegister();
	TETARDINK_API UClass* Z_Construct_UClass_AMeca1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Tetardink();
// End Cross Module References
	void AMeca1::StaticRegisterNativesAMeca1()
	{
	}
	UClass* Z_Construct_UClass_AMeca1_NoRegister()
	{
		return AMeca1::StaticClass();
	}
	struct Z_Construct_UClass_AMeca1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeca1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tetardink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeca1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Meca1.h" },
		{ "ModuleRelativePath", "Meca1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeca1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeca1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeca1_Statics::ClassParams = {
		&AMeca1::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeca1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeca1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeca1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeca1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeca1, 1539241975);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeca1(Z_Construct_UClass_AMeca1, &AMeca1::StaticClass, TEXT("/Script/Tetardink"), TEXT("AMeca1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeca1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
