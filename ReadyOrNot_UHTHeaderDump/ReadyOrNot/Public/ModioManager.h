#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModioManager.generated.h"

class UModioManager;

UCLASS(Blueprintable)
class READYORNOT_API UModioManager : public UObject {
    GENERATED_BODY()
public:
    UModioManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestartRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModIoEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UModioManager* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void ClearUserData();
    
};

