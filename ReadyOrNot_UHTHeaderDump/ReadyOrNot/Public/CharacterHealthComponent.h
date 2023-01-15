#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "LimbHealthData.h"
#include "ELimbType.h"
#include "EPlayerHealthStatus.h"
#include "CharacterHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UCharacterHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLimbNoTicketsRemainingSignature, ELimbType, Limb);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLimbNoHealthSignature, ELimbType, Limb);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLimbLowHealthSignature, ELimbType, AffectedLimb, float, LimbHealth);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLimbFullTicketsSignature, ELimbType, Limb);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLimbFullHealthSignature, ELimbType, Limb);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLimbBrokenSignature, ELimbType, Limb);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLimbFullHealthSignature OnLimbFullHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLimbLowHealthSignature OnLimbLowHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLimbNoHealthSignature OnLimbNoHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLimbBrokenSignature OnLimbBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLimbFullTicketsSignature OnLimbFullTickets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLimbNoTicketsRemainingSignature OnLimbNoTickets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EPlayerHealthStatus HealthStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableIncapacitation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncapacitationHealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLimbHealthData RightLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLimbHealthData LeftLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLimbHealthData RightArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLimbHealthData LeftArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLimbHealthData Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bUnlimitedRevives: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxRevives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReviveTimeDecrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReviveOperatingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxReviveHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RemainingRevives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RemainingReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RemainingReviveHealth;
    
public:
    UCharacterHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UseAllLimbTickets(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviousLimbHealth(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable)
    void SetReviveHealth(const float NewReviveHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingRevives(const int32 NewRemainingRevives);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLimbHealth(const ELimbType& Limb, const float NewMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetLimbHealth(const ELimbType& Limb, const float NewHealthAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthStatus(EPlayerHealthStatus NewHealthStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLimbHealthToMax(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UseAllRemainingLimbTickets(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdatePreviousLimbHealth(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReviveHealth(float NewReviveHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRemainingRevives(int32 NewRemainingRevives);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMaxLimbHealth(const ELimbType& Limb, float NewMaxHealth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLimbHealth(const ELimbType& Limb, float NewHealthAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHealthStatus(EPlayerHealthStatus NewHealthStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCurrentLimbHealthToMax(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetRevives();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetReviveHealth();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetLimbTickets(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetLimbHealth(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetAllLimbTickets();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetAllLimbHealth();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncreaseReviveHealth(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncreaseRevive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncreaseLimbTickets(const ELimbType& Limb, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncreaseLimbHealth(const ELimbType& Limb, float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HalfMaxLimbHealth(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecreaseReviveHealth(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecreaseRevive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecreaseLimbTickets(const ELimbType& Limb, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecreaseLimbHealth(const ELimbType& Limb, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void ResetRevives();
    
    UFUNCTION(BlueprintCallable)
    void ResetReviveHealth();
    
    UFUNCTION(BlueprintCallable)
    void ResetLimbTickets(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable)
    void ResetLimbHealth(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLimbTickets();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllLimbHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingUnlimitedRevives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReviveHealthDepleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbNoHealth(const ELimbType& Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbLowHealth(const ELimbType& Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbHealthBelow(const ELimbType& Limb, float HealthValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbHealthAtOrBelow(const ELimbType& Limb, float HealthValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbHealthAtOrAbove(const ELimbType& Limb, float HealthValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbHealthAt(const ELimbType& Limb, float HealthValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbHealthAbove(const ELimbType& Limb, float HealthValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbFullHealth(const ELimbType& Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLimbEqualTo(const FLimbHealthData& InLimbHealthData, const FLimbHealthData& OtherLimbHealthData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbBroken(const ELimbType& Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncapacitationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncapacitated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyLimbBroken(ELimbType& OutLimbType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyLimbBelowFullHealth(ELimbType& OutLimbType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyLimbAtNoHealth(ELimbType& OutLimbType) const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseReviveHealth(const float Amount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseRevive();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseLimbTickets(const ELimbType& Limb, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseLimbHealth(const ELimbType& Limb, const float Amount);
    
    UFUNCTION(BlueprintCallable)
    bool HalfMaxLimbHealth(const ELimbType& Limb);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetRightLegHealth_Copy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetRightArmHealth_Copy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReviveOperatingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingReviveTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingRevives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingReviveHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxRevives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxReviveHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetLimb_Copy(const ELimbType& Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetLeftLegHealth_Copy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetLeftArmHealth_Copy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerHealthStatus GetHealthStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetHeadHealth_Copy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ELimbType> GetBrokenLimbs() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseReviveHealth(const float Amount);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseRevive();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseLimbTickets(const ELimbType& Limb, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseLimbHealth(const ELimbType& Limb, const float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseReviveSystem() const;
    
};

