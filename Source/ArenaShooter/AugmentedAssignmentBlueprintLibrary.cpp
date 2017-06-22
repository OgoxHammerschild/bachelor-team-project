// Copyright 2017 Daniel Bortfeld.

#include "ArenaShooter.h"
#include "AugmentedAssignmentBlueprintLibrary.h"

#define BODY(Operator)	\
In Operator Value;		\
return In;																		

#define vBODY(Operator)	\
In.X Operator Value;	\
In.Y Operator Value;	\
In.Z Operator Value;	\
return In;																		

int32 &		UAugmentedAssignmentBlueprintLibrary::Add_i(int32 & In, int32 Value)			{ BODY(+= ) }
int32 &		UAugmentedAssignmentBlueprintLibrary::Add_if(int32 & In, float Value)			{ BODY(+= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Add_f(float & In, float Value)			{ BODY(+= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Add_fi(float & In, int32 Value)			{ BODY(+= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Add_v(FVector & In, FVector Value)		{ BODY(+= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Add_vi(FVector & In, int32 Value)			{vBODY(+= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Add_vf(FVector & In, float Value)			{vBODY(+= ) }

int32 &		UAugmentedAssignmentBlueprintLibrary::Subtract_i(int32 & In, int32 Value)		{ BODY(-= ) }
int32 &		UAugmentedAssignmentBlueprintLibrary::Subtract_if(int32 & In, float Value)		{ BODY(-= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Subtract_f(float & In, float Value)		{ BODY(-= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Subtract_fi(float & In, int32 Value)		{ BODY(-= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Subtract_v(FVector & In, FVector Value)	{ BODY(-= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Subtract_vi(FVector & In, int32 Value)	{vBODY(-= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Subtract_vf(FVector & In, float Value)	{vBODY(-= ) }

int32 &		UAugmentedAssignmentBlueprintLibrary::Multiply_i(int32 & In, int32 Value)		{ BODY(*= ) }
int32 &		UAugmentedAssignmentBlueprintLibrary::Multiply_if(int32 & In, float Value)		{ BODY(*= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Multiply_f(float & In, float Value)		{ BODY(*= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Multiply_fi(float & In, int32 Value)		{ BODY(*= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Multiply_v(FVector & In, FVector Value)	{ BODY(*= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Multiply_vi(FVector & In, int32 Value)	{ BODY(*= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Multiply_vf(FVector & In, float Value)	{ BODY(*= ) }

int32 &		UAugmentedAssignmentBlueprintLibrary::Divide_i(int32 & In, int32 Value)			{ BODY(/= ) }
int32 &		UAugmentedAssignmentBlueprintLibrary::Divide_if(int32 & In, float Value)		{ BODY(/= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Divide_f(float & In, float Value)			{ BODY(/= ) }
float &		UAugmentedAssignmentBlueprintLibrary::Divide_fi(float & In, int32 Value)		{ BODY(/= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Divide_v(FVector & In, FVector Value)		{ BODY(/= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Divide_vi(FVector & In, int32 Value)		{ BODY(/= ) }
FVector &	UAugmentedAssignmentBlueprintLibrary::Divide_vf(FVector & In, float Value)		{ BODY(/= ) }
