#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PostProcessRequirement.generated.h"

class AActor;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API UPostProcessRequirement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
public:
    UPostProcessRequirement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(APlayerCharacter* InPlayerCharacter, AActor* InDamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDamageCauser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EnablePostProcessEffect();
    
};

