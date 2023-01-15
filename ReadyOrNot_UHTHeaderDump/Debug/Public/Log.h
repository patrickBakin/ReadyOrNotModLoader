#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EDebugLogAngularUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "ELoggingOptions.h"
#include "EDebugLogType.h"
#include "EDebugLogComparisonMethod.h"
#include "EDebugLogTimeUnit.h"
#include "EDebugLogLightUnit.h"
#include "EDebugLogFrequencyUnit.h"
#include "EDebugLogForceUnit.h"
#include "EDebugLogNumberSystems.h"
#include "EDebugLogTemperatureUnit.h"
#include "EDebugLogVolumeUnit.h"
#include "EDebugLogDataUnit.h"
#include "EDebugLogLengthUnit.h"
#include "EDebugLogMassUnit.h"
#include "EDebugLogSpeedUnit.h"
#include "Log.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class DEBUG_API ULog : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULog();
    UFUNCTION(BlueprintCallable)
    static void Yo(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Yes(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Wassup(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Warning_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Warning(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Volume(float InVolumeValue, TEnumAsByte<EDebugLogVolumeUnit> VolumeUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Vector2D(const FVector2D& InVector2D, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Vector(const FVector& InVector, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Valid(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void UnImplemented();
    
public:
    UFUNCTION(BlueprintCallable)
    static void Transform(const FTransform& InTransform, const FString& Prefix, bool bFormat, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Time(float InTimeValue, TEnumAsByte<EDebugLogTimeUnit> TimeUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Temperature(float InTemperatureValue, TEnumAsByte<EDebugLogTemperatureUnit> TemperatureUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Success_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Success(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float StopDebugTimer(bool bAutoDetermineTimeUnit, TEnumAsByte<EDebugLogTimeUnit> DisplayIn, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StartDebugTimer(const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static void Speed(float InSpeedValue, TEnumAsByte<EDebugLogSpeedUnit> SpeedUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Rotator(const FRotator& InRotator, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Quat(const FQuat& Quaternion, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Percent(float Number, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ObjectValidity(UObject* InObject, bool bSilenceOnError, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ObjectName(UObject* InObject, bool bSilenceOnError, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void Number_Int_Blueprint(int32 Number, const FString& Prefix, const FString& Suffix, TEnumAsByte<EDebugLogNumberSystems> NumberSystem, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Number_Float_Blueprint(float Number, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
public:
    UFUNCTION(BlueprintCallable)
    static void No(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MessageInWorld(const FString& Message, const FVector& WorldLocation, float FontScale, const FString& Prefix, const FString& Suffix, float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix(const FMatrix& InMatrix, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Mass(float InMassValue, TEnumAsByte<EDebugLogMassUnit> MassUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LineBreak_Symbol(const FString& Symbol, TEnumAsByte<ELoggingOptions> LoggingOption);
    
    UFUNCTION(BlueprintCallable)
    static void LineBreak(TEnumAsByte<ELoggingOptions> LoggingOption);
    
    UFUNCTION(BlueprintCallable)
    static void Light(float InLightValue, TEnumAsByte<EDebugLogLightUnit> LightUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Length(float InLengthValue, TEnumAsByte<EDebugLogLengthUnit> LengthUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Invalid(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Info_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Info(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText InBrackets_Text_Blueprint(FText Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString InBrackets_String_Blueprint(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName InBrackets_Name_Blueprint(FName Name);
    
public:
    UFUNCTION(BlueprintCallable)
    static void Hey(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Hello(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Goodbye(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Frequency(float InFrequencyValue, TEnumAsByte<EDebugLogFrequencyUnit> FrequencyUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Force(float InForceValue, TEnumAsByte<EDebugLogForceUnit> ForceUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Fatal_WithCondition(const FString& Message, bool bCondition);
    
    UFUNCTION(BlueprintCallable)
    static void Fatal(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void Error_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Error(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void EnsureObject(UObject* Object, bool bAlwaysEnsure, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void EnsureCondition(bool bCondition, bool bAlwaysEnsure, const FString& Message);
    
public:
    UFUNCTION(BlueprintCallable)
    static void Dollar(float InDollarValue, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DebugMessage_WithCondition(TEnumAsByte<EDebugLogType> LogSeverity, bool bCondition, const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DebugMessage(TEnumAsByte<EDebugLogType> LogSeverity, const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DateTime(const FDateTime& InDateTime, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Data(float InDataValue, TEnumAsByte<EDebugLogDataUnit> DataUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Cya(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Crash(const FString& Message, const FString& FromFunction, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Color(const FLinearColor& InColor, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void CheckObject(UObject* Object, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void CheckNoReEntry();
    
    UFUNCTION(BlueprintCallable)
    static void CheckNoRecursion();
    
    UFUNCTION(BlueprintCallable)
    static void CheckNoEntry();
    
    UFUNCTION(BlueprintCallable)
    static void CheckCondition(bool bCondition, const FString& Message);
    
public:
    UFUNCTION(BlueprintCallable)
    static void Bye(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Bool(bool bBoolToTest, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertValue_Integer(int32 Actual, int32 Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertValue_Float(float Actual, float Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertValue_DateTime(FDateTime Actual, FDateTime Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Vector2D(FVector2D Actual, FVector2D Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Vector(FVector Actual, FVector Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Transform(FTransform Actual, FTransform Expected, const FString& Message, bool bNoScale, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_String(const FString& Actual, const FString& Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Rotator(FRotator Actual, FRotator Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Quat(FQuat Actual, FQuat Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Object(UObject* Actual, UObject* Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Name(FName Actual, FName Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertNotEqual_Color(FColor Actual, FColor Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Vector2D(FVector2D Actual, FVector2D Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Vector(FVector Actual, FVector Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Transform(FTransform Actual, FTransform Expected, const FString& Message, bool bNoScale, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_String(const FString& Actual, const FString& Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Rotator(FRotator Actual, FRotator Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Quat(FQuat Actual, FQuat Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Object(UObject* Actual, UObject* Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Name(FName Actual, FName Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Integer(int32 Actual, int32 Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Float(float Actual, float Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_DateTime(FDateTime Actual, FDateTime Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Color(FColor Actual, FColor Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool AssertEqual_Bool(bool bActual, bool bExpected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool Assert_True(bool bCondition, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool Assert_IsValid(UObject* Object, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool Assert_False(bool bCondition, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Vector2D(TArray<FVector2D> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Vector(TArray<FVector> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Transform(TArray<FTransform> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Text(TArray<FText> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_String(TArray<FString> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Rotator(TArray<FRotator> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Quat(TArray<FQuat> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Name(TArray<FName> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Matrix(TArray<FMatrix> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Int64(TArray<int64> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Int32(TArray<int32> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Float(TArray<float> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_DateTime(TArray<FDateTime> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Color(TArray<FLinearColor> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Bool(TArray<bool> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Angle(float InAngleValue, TEnumAsByte<EDebugLogAngularUnit> AngleUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject);
    
};

