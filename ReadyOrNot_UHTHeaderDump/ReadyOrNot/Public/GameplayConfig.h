#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GameplayConfig.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class READYORNOT_API UGameplayConfig : public UObject {
    GENERATED_BODY()
public:
    UGameplayConfig();
    UFUNCTION(BlueprintCallable)
    void ReloadConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetVector2D(const FString& ConfigKey, const FVector2D& FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVector(const FString& ConfigKey, const FVector& FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStringArray_SingleLine(const FString& ConfigKey, const TArray<FString>& FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStringArray(const FString& ConfigKey, const TArray<FString>& FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(const FString& ConfigKey, const FString& FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInt(const FString& ConfigKey, int32 FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat(const FString& ConfigKey, float FallbackValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBool(const FString& ConfigKey, bool FallbackValue);
    
};

