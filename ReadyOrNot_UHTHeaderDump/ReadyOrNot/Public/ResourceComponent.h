#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ResourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowResourceSignature, float, Resource);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFullResourceSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDepletedResourceSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFullResourceSignature OnFullResource;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLowResourceSignature OnLowResource;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDepletedResourceSignature OnDepletedResource;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxResourceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LowResourceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OriginalMaxResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LowResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PreviousResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bUnlimited: 1;
    
public:
    UResourceComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePreviousResource();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleUnlimitedResource();
    
    UFUNCTION(BlueprintCallable)
    void SetUnlimitedResource(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetResource(const float NewResourceAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxResource(const float NewMaxResource);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentResourceToMax();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdatePreviousResource();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleUnlimitedResource();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetUnlimitedResource(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetResource(float NewResourceAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMaxResource(float NewMaxResource);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCurrentResourceToMax();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetResource();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_InitResource();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IncreaseResource(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EnableUnlimitedResource();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DisableUnlimitedResource();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DepleteResource();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DecreaseResource(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void ResetResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlimitedResourceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceBelow(const float ResourceValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceAtOrBelow(const float ResourceValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceAtOrAbove(const float ResourceValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceAt(const float ResourceValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceAbove(const float ResourceValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHalfResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDepleted() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseResourceByRate(const float Rate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float IncreaseResource_Expression(float Amount) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void IncreaseResource(const float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetResourceName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOriginalMaxResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowResourceThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHalfResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentResource() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableUnlimitedResource();
    
    UFUNCTION(BlueprintCallable)
    void DisableUnlimitedResource();
    
    UFUNCTION(BlueprintCallable)
    void DepleteResource();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseResourceByRate(const float Rate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float DecreaseResource_Expression(float Amount) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DecreaseResource(const float Amount);
    
};

