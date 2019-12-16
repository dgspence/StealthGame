// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
#ifdef FPSGAME_FPSAIGUARD_generated_h
#error "FPSAIGUARD.generated.h already included, missing '#pragma once' in FPSAIGUARD.h"
#endif
#define FPSGAME_FPSAIGUARD_generated_h

#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGUARD(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSAIGUARD(); \
public: \
	DECLARE_CLASS(AFPSAIGUARD, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGUARD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGUARD(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSAIGUARD(); \
public: \
	DECLARE_CLASS(AFPSAIGUARD, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGUARD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGUARD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGUARD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGUARD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGUARD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGUARD(AFPSAIGUARD&&); \
	NO_API AFPSAIGUARD(const AFPSAIGUARD&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGUARD(AFPSAIGUARD&&); \
	NO_API AFPSAIGUARD(const AFPSAIGUARD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGUARD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGUARD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGUARD)


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AFPSAIGUARD, PawnSensingComp); }


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSAIGUARD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSAIGUARD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
