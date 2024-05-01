// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ALUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALUserWidget() {}
// Cross Module References
	ALETHEA_API UClass* Z_Construct_UClass_UALUserWidget();
	ALETHEA_API UClass* Z_Construct_UClass_UALUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Alethea();
// End Cross Module References
	void UALUserWidget::StaticRegisterNativesUALUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALUserWidget);
	UClass* Z_Construct_UClass_UALUserWidget_NoRegister()
	{
		return UALUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UALUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Alethea,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ALUserWidget.h" },
		{ "ModuleRelativePath", "UI/ALUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALUserWidget_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "UI/ALUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UALUserWidget_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UALUserWidget, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALUserWidget_Statics::NewProp_OwningActor_MetaData), Z_Construct_UClass_UALUserWidget_Statics::NewProp_OwningActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALUserWidget_Statics::NewProp_OwningActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALUserWidget_Statics::ClassParams = {
		&UALUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UALUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UALUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UALUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UALUserWidget()
	{
		if (!Z_Registration_Info_UClass_UALUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALUserWidget.OuterSingleton, Z_Construct_UClass_UALUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALUserWidget.OuterSingleton;
	}
	template<> ALETHEA_API UClass* StaticClass<UALUserWidget>()
	{
		return UALUserWidget::StaticClass();
	}
	UALUserWidget::UALUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALUserWidget);
	UALUserWidget::~UALUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Alethea_Source_Alethea_UI_ALUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Alethea_Source_Alethea_UI_ALUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALUserWidget, UALUserWidget::StaticClass, TEXT("UALUserWidget"), &Z_Registration_Info_UClass_UALUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALUserWidget), 1895740475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Alethea_Source_Alethea_UI_ALUserWidget_h_3374420163(TEXT("/Script/Alethea"),
		Z_CompiledInDeferFile_FID_Alethea_Source_Alethea_UI_ALUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Alethea_Source_Alethea_UI_ALUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
