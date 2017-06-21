// Copyright 2017 Daniel Bortfeld.

#pragma once

//TODO: Byte, DateTime, Timespan, Vector2D

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AugmentedOperatorBlueprintLibrary.generated.h"

/**
 *
 */
UCLASS()
class UAugmentedOperatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	// Integer
	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer += integer", CompactNodeTitle = "+="))
		static int32& Add_i(UPARAM(ref) int32& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer -= integer", CompactNodeTitle = "-="))
		static int32& Subtract_i(UPARAM(ref)int32& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer *= integer", CompactNodeTitle = "*="))
		static int32& Multiply_i(UPARAM(ref)int32& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer /= integer", CompactNodeTitle = "/="))
		static int32& Divide_i(UPARAM(ref)int32& In, int32 Value);

	// Integer & Float
	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer += float", CompactNodeTitle = "+="))
		static int32& Add_if(UPARAM(ref) int32& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer -= float", CompactNodeTitle = "-="))
		static int32& Subtract_if(UPARAM(ref)int32& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer *= float", CompactNodeTitle = "*="))
		static int32& Multiply_if(UPARAM(ref)int32& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Integer", meta = (DisplayName = "integer /= float", CompactNodeTitle = "/="))
		static int32& Divide_if(UPARAM(ref)int32& In, float Value);

	// Float
	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float += float", CompactNodeTitle = "+="))
		static float& Add_f(UPARAM(ref)float& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float -= float", CompactNodeTitle = "-="))
		static float& Subtract_f(UPARAM(ref)float& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float *= float", CompactNodeTitle = "*="))
		static float& Multiply_f(UPARAM(ref)float& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float /= float", CompactNodeTitle = "/="))
		static float& Divide_f(UPARAM(ref)float& In, float Value);

	// Float & Integer
	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float += integer", CompactNodeTitle = "+="))
		static float& Add_fi(UPARAM(ref)float& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float -= integer", CompactNodeTitle = "-="))
		static float& Subtract_fi(UPARAM(ref)float& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float *= integer", CompactNodeTitle = "*="))
		static float& Multiply_fi(UPARAM(ref)float& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Float", meta = (DisplayName = "float /= integer", CompactNodeTitle = "/="))
		static float& Divide_fi(UPARAM(ref)float& In, int32 Value);

	// Vector
	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector += Vector", CompactNodeTitle = "+="))
		static FVector& Add_v(UPARAM(ref)FVector& In, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector -= Vector", CompactNodeTitle = "-="))
		static FVector& Subtract_v(UPARAM(ref)FVector& In, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector *= Vector", CompactNodeTitle = "*="))
		static FVector& Multiply_v(UPARAM(ref)FVector& In, FVector Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector /= Vector", CompactNodeTitle = "/="))
		static FVector& Divide_v(UPARAM(ref)FVector& In, FVector Value);

	// Vector & Integer
	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector += integer", CompactNodeTitle = "+="))
		static FVector& Add_vi(UPARAM(ref)FVector& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector -= integer", CompactNodeTitle = "-="))
		static FVector& Subtract_vi(UPARAM(ref)FVector& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector *= integer", CompactNodeTitle = "*="))
		static FVector& Multiply_vi(UPARAM(ref)FVector& In, int32 Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector /= integer", CompactNodeTitle = "/="))
		static FVector& Divide_vi(UPARAM(ref)FVector& In, int32 Value);

	// Vector & Float
	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector += float", CompactNodeTitle = "+="))
		static FVector& Add_vf(UPARAM(ref)FVector& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector -= float", CompactNodeTitle = "-="))
		static FVector& Subtract_vf(UPARAM(ref)FVector& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector *= float", CompactNodeTitle = "*="))
		static FVector& Multiply_vf(UPARAM(ref)FVector& In, float Value);

	UFUNCTION(BlueprintCallable, Category = "Math|Vector", meta = (DisplayName = "Vector /= float", CompactNodeTitle = "/="))
		static FVector& Divide_vf(UPARAM(ref)FVector& In, float Value);
};
