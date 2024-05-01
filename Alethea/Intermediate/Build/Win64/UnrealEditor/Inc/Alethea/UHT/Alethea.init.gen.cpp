// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlethea_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Alethea;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Alethea()
	{
		if (!Z_Registration_Info_UPackage__Script_Alethea.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Alethea",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC9AD205B,
				0x73D54983,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Alethea.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Alethea.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Alethea(Z_Construct_UPackage__Script_Alethea, TEXT("/Script/Alethea"), Z_Registration_Info_UPackage__Script_Alethea, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC9AD205B, 0x73D54983));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
