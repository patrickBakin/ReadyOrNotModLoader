#include "GameplayConfig.h"

void UGameplayConfig::ReloadConfig() {
}

FVector2D UGameplayConfig::GetVector2D(const FString& ConfigKey, const FVector2D& FallbackValue) {
    return FVector2D{};
}

FVector UGameplayConfig::GetVector(const FString& ConfigKey, const FVector& FallbackValue) {
    return FVector{};
}

TArray<FString> UGameplayConfig::GetStringArray_SingleLine(const FString& ConfigKey, const TArray<FString>& FallbackValue) {
    return TArray<FString>();
}

TArray<FString> UGameplayConfig::GetStringArray(const FString& ConfigKey, const TArray<FString>& FallbackValue) {
    return TArray<FString>();
}

FString UGameplayConfig::GetString(const FString& ConfigKey, const FString& FallbackValue) {
    return TEXT("");
}

int32 UGameplayConfig::GetInt(const FString& ConfigKey, int32 FallbackValue) {
    return 0;
}

float UGameplayConfig::GetFloat(const FString& ConfigKey, float FallbackValue) {
    return 0.0f;
}

bool UGameplayConfig::GetBool(const FString& ConfigKey, bool FallbackValue) {
    return false;
}

UGameplayConfig::UGameplayConfig() {
}

