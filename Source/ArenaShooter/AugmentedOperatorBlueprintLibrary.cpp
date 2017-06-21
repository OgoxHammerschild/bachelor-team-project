// Copyright 2017 Daniel Bortfeld.

#include "ArenaShooter.h"
#include "AugmentedOperatorBlueprintLibrary.h"

#define BODY(Operator)	\
In Operator Value;		\
return In;																		

#define vBODY(Operator)	\
In.X Operator Value;	\
In.Y Operator Value;	\
In.Z Operator Value;	\
return In;																		

int32 &		UAugmentedOperatorBlueprintLibrary::Add_i(int32 & In, int32 Value)			{ BODY(+= ) }
int32 &		UAugmentedOperatorBlueprintLibrary::Add_if(int32 & In, float Value)			{ BODY(+= ) }
float &		UAugmentedOperatorBlueprintLibrary::Add_f(float & In, float Value)			{ BODY(+= ) }
float &		UAugmentedOperatorBlueprintLibrary::Add_fi(float & In, int32 Value)			{ BODY(+= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Add_v(FVector & In, FVector Value)		{ BODY(+= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Add_vi(FVector & In, int32 Value)		{vBODY(+= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Add_vf(FVector & In, float Value)		{vBODY(+= ) }

int32 &		UAugmentedOperatorBlueprintLibrary::Subtract_i(int32 & In, int32 Value)		{ BODY(-= ) }
int32 &		UAugmentedOperatorBlueprintLibrary::Subtract_if(int32 & In, float Value)	{ BODY(-= ) }
float &		UAugmentedOperatorBlueprintLibrary::Subtract_f(float & In, float Value)		{ BODY(-= ) }
float &		UAugmentedOperatorBlueprintLibrary::Subtract_fi(float & In, int32 Value)	{ BODY(-= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Subtract_v(FVector & In, FVector Value)	{ BODY(-= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Subtract_vi(FVector & In, int32 Value)	{vBODY(-= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Subtract_vf(FVector & In, float Value)	{vBODY(-= ) }

int32 &		UAugmentedOperatorBlueprintLibrary::Multiply_i(int32 & In, int32 Value)		{ BODY(*= ) }
int32 &		UAugmentedOperatorBlueprintLibrary::Multiply_if(int32 & In, float Value)	{ BODY(*= ) }
float &		UAugmentedOperatorBlueprintLibrary::Multiply_f(float & In, float Value)		{ BODY(*= ) }
float &		UAugmentedOperatorBlueprintLibrary::Multiply_fi(float & In, int32 Value)	{ BODY(*= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Multiply_v(FVector & In, FVector Value)	{ BODY(*= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Multiply_vi(FVector & In, int32 Value)	{ BODY(*= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Multiply_vf(FVector & In, float Value)	{ BODY(*= ) }

int32 &		UAugmentedOperatorBlueprintLibrary::Divide_i(int32 & In, int32 Value)		{ BODY(/= ) }
int32 &		UAugmentedOperatorBlueprintLibrary::Divide_if(int32 & In, float Value)		{ BODY(/= ) }
float &		UAugmentedOperatorBlueprintLibrary::Divide_f(float & In, float Value)		{ BODY(/= ) }
float &		UAugmentedOperatorBlueprintLibrary::Divide_fi(float & In, int32 Value)		{ BODY(/= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Divide_v(FVector & In, FVector Value)	{ BODY(/= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Divide_vi(FVector & In, int32 Value)	{ BODY(/= ) }
FVector &	UAugmentedOperatorBlueprintLibrary::Divide_vf(FVector & In, float Value)	{ BODY(/= ) }
