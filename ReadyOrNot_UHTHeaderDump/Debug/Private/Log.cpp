#include "Log.h"

class UObject;

void ULog::Yo(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Yes(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Wassup(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Warning_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Warning(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Volume(float InVolumeValue, TEnumAsByte<EDebugLogVolumeUnit> VolumeUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Vector2D(const FVector2D& InVector2D, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Vector(const FVector& InVector, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Valid(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::UnImplemented() {
}

void ULog::Transform(const FTransform& InTransform, const FString& Prefix, bool bFormat, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Time(float InTimeValue, TEnumAsByte<EDebugLogTimeUnit> TimeUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Temperature(float InTemperatureValue, TEnumAsByte<EDebugLogTemperatureUnit> TemperatureUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Success_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Success(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

float ULog::StopDebugTimer(bool bAutoDetermineTimeUnit, TEnumAsByte<EDebugLogTimeUnit> DisplayIn, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
    return 0.0f;
}

void ULog::StartDebugTimer(const FString& Description) {
}

void ULog::Speed(float InSpeedValue, TEnumAsByte<EDebugLogSpeedUnit> SpeedUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Rotator(const FRotator& InRotator, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Quat(const FQuat& Quaternion, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Percent(float Number, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::ObjectValidity(UObject* InObject, bool bSilenceOnError, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::ObjectName(UObject* InObject, bool bSilenceOnError, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Number_Int_Blueprint(int32 Number, const FString& Prefix, const FString& Suffix, TEnumAsByte<EDebugLogNumberSystems> NumberSystem, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Number_Float_Blueprint(float Number, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::No(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::MessageInWorld(const FString& Message, const FVector& WorldLocation, float FontScale, const FString& Prefix, const FString& Suffix, float TimeToDisplay) {
}

void ULog::Matrix(const FMatrix& InMatrix, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Mass(float InMassValue, TEnumAsByte<EDebugLogMassUnit> MassUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::LineBreak_Symbol(const FString& Symbol, TEnumAsByte<ELoggingOptions> LoggingOption) {
}

void ULog::LineBreak(TEnumAsByte<ELoggingOptions> LoggingOption) {
}

void ULog::Light(float InLightValue, TEnumAsByte<EDebugLogLightUnit> LightUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Length(float InLengthValue, TEnumAsByte<EDebugLogLengthUnit> LengthUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Invalid(const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Info_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Info(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

FText ULog::InBrackets_Text_Blueprint(FText Text) {
    return FText::GetEmpty();
}

FString ULog::InBrackets_String_Blueprint(const FString& String) {
    return TEXT("");
}

FName ULog::InBrackets_Name_Blueprint(FName Name) {
    return NAME_None;
}

void ULog::Hey(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Hello(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Goodbye(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Frequency(float InFrequencyValue, TEnumAsByte<EDebugLogFrequencyUnit> FrequencyUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Force(float InForceValue, TEnumAsByte<EDebugLogForceUnit> ForceUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Fatal_WithCondition(const FString& Message, bool bCondition) {
}

void ULog::Fatal(const FString& Message) {
}

void ULog::Error_WithCondition(const FString& Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Error(const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::EnsureObject(UObject* Object, bool bAlwaysEnsure, const FString& Message) {
}

void ULog::EnsureCondition(bool bCondition, bool bAlwaysEnsure, const FString& Message) {
}

void ULog::Dollar(float InDollarValue, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::DebugMessage_WithCondition(TEnumAsByte<EDebugLogType> LogSeverity, bool bCondition, const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::DebugMessage(TEnumAsByte<EDebugLogType> LogSeverity, const FString& Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::DateTime(const FDateTime& InDateTime, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Data(float InDataValue, TEnumAsByte<EDebugLogDataUnit> DataUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Cya(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Crash(const FString& Message, const FString& FromFunction, UObject* ContextObject) {
}

void ULog::Color(const FLinearColor& InColor, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::CheckObject(UObject* Object, const FString& Message) {
}

void ULog::CheckNoReEntry() {
}

void ULog::CheckNoRecursion() {
}

void ULog::CheckNoEntry() {
}

void ULog::CheckCondition(bool bCondition, const FString& Message) {
}

void ULog::Bye(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, UObject* ContextObject) {
}

void ULog::Bool(bool bBoolToTest, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

bool ULog::AssertValue_Integer(int32 Actual, int32 Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertValue_Float(float Actual, float Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertValue_DateTime(FDateTime Actual, FDateTime Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Vector2D(FVector2D Actual, FVector2D Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Vector(FVector Actual, FVector Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Transform(FTransform Actual, FTransform Expected, const FString& Message, bool bNoScale, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_String(const FString& Actual, const FString& Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Rotator(FRotator Actual, FRotator Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Quat(FQuat Actual, FQuat Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Object(UObject* Actual, UObject* Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Name(FName Actual, FName Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertNotEqual_Color(FColor Actual, FColor Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Vector2D(FVector2D Actual, FVector2D Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Vector(FVector Actual, FVector Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Transform(FTransform Actual, FTransform Expected, const FString& Message, bool bNoScale, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_String(const FString& Actual, const FString& Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Rotator(FRotator Actual, FRotator Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Quat(FQuat Actual, FQuat Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Object(UObject* Actual, UObject* Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Name(FName Actual, FName Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Integer(int32 Actual, int32 Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Float(float Actual, float Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_DateTime(FDateTime Actual, FDateTime Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Color(FColor Actual, FColor Expected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::AssertEqual_Bool(bool bActual, bool bExpected, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::Assert_True(bool bCondition, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::Assert_IsValid(UObject* Object, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

bool ULog::Assert_False(bool bCondition, const FString& Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
    return false;
}

void ULog::Array_Vector2D(TArray<FVector2D> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Vector(TArray<FVector> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Transform(TArray<FTransform> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Text(TArray<FText> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_String(TArray<FString> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Rotator(TArray<FRotator> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Quat(TArray<FQuat> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Name(TArray<FName> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Matrix(TArray<FMatrix> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Int64(TArray<int64> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Int32(TArray<int32> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Float(TArray<float> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_DateTime(TArray<FDateTime> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Color(TArray<FLinearColor> inArray, bool bCompact, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Array_Bool(TArray<bool> inArray, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, UObject* ContextObject) {
}

void ULog::Angle(float InAngleValue, TEnumAsByte<EDebugLogAngularUnit> AngleUnit, bool bConvertValueToInt, const FString& Prefix, const FString& Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, UObject* ContextObject) {
}

ULog::ULog() {
}

