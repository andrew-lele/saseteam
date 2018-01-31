// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NewStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewStaticMeshComponent() {}
// Cross Module References
	SASETEAM_API UClass* Z_Construct_UClass_UNewStaticMeshComponent_NoRegister();
	SASETEAM_API UClass* Z_Construct_UClass_UNewStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_SaseTeam();
// End Cross Module References
	void UNewStaticMeshComponent::StaticRegisterNativesUNewStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UNewStaticMeshComponent_NoRegister()
	{
		return UNewStaticMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNewStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SaseTeam,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "NewStaticMeshComponent.h" },
				{ "ModuleRelativePath", "NewStaticMeshComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNewStaticMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNewStaticMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewStaticMeshComponent, 1234179140);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewStaticMeshComponent(Z_Construct_UClass_UNewStaticMeshComponent, &UNewStaticMeshComponent::StaticClass, TEXT("/Script/SaseTeam"), TEXT("UNewStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
