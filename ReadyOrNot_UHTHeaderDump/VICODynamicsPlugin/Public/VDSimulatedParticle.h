#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VDParticleAttachment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VDSimulatedParticle.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API UVDSimulatedParticle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVDParticleAttachment Attachment;
    
    UVDSimulatedParticle();
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector& NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetRestitutionCoefficient(float NewRestitutionCoefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetMass(float NewMass);
    
    UFUNCTION(BlueprintCallable)
    void SetLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetIsWindOccluded(bool IsOccluded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRigidBodyCollisionEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsParticleCollisionEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFree(bool IsFree);
    
    UFUNCTION(BlueprintCallable)
    void SetFrictionCoefficient(float NewFrictionCoefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetDragCoefficient(float NewDragCoefficient);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRestitutionCoefficient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWindOccluded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRigidBodyCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsParticleCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrictionCoefficient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragCoefficient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttachment(FVDParticleAttachment& OutAttachment);
    
    UFUNCTION(BlueprintCallable)
    void Detach();
    
    UFUNCTION(BlueprintCallable)
    void CopyAttachment(const FVDParticleAttachment& NewAttachment, bool UseCurrentMass);
    
    UFUNCTION(BlueprintCallable)
    bool AttachToLocation(FVector Location, bool IsRelative);
    
    UFUNCTION(BlueprintCallable)
    bool AttachToComponent(UPrimitiveComponent* Component, FVector Location, bool SimulateTension, FName Socket);
    
    UFUNCTION(BlueprintCallable)
    bool AttachToActor(AActor* Actor, FVector Location, bool SimulateTension, FName Socket);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(const FVector& Force);
    
};

