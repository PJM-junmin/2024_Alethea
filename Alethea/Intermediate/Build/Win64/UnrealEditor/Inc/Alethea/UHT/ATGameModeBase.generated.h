// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ATGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALETHEA_ATGameModeBase_generated_h
#error "ATGameModeBase.generated.h already included, missing '#pragma once' in ATGameModeBase.h"
#endif
#define ALETHEA_ATGameModeBase_generated_h

#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_SPARSE_DATA
#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_ACCESSORS
#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAATGameModeBase(); \
	friend struct Z_Construct_UClass_AATGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AATGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alethea"), NO_API) \
	DECLARE_SERIALIZER(AATGameModeBase)


#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AATGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AATGameModeBase(AATGameModeBase&&); \
	NO_API AATGameModeBase(const AATGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AATGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AATGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AATGameModeBase) \
	NO_API virtual ~AATGameModeBase();


#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_12_PROLOG
#define FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_SPARSE_DATA \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_ACCESSORS \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Alethea_Source_Alethea_Game_ATGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALETHEA_API UClass* StaticClass<class AATGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Alethea_Source_Alethea_Game_ATGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
