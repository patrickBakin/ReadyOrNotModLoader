#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnmannedVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EDroneDamageSpeed.h"
#include "Drone.generated.h"

class AActor;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UUserWidget;
class UAudioComponent;
class UBoxComponent;
class UWorld;
class AReadyOrNotPlayerController;
class UCameraComponent;
class UCurveVector;
class UCurveFloat;
class UFloatingPawnMovement;
class USphereComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class READYORNOT_API ADrone : public AUnmannedVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DroneWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FPCameraRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPCameraRotationResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* FPDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPDamageSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitchTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRollTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RPMThrottleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeedWhenSteady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedWhenSteady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedIncrementRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDroneDamageSpeed, float> DroneSpeedToDamageValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvincibilityTimeAfterDamageApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator RotorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPilotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform DroneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator TargetSteadyCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bApplyingInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSteadyDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDroneThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerController* DroneController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerController* OriginalController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FlightBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DetectionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* FloatingMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* TPCameraArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* TPCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FPCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DroneWidgetHUD;
    
public:
    ADrone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePilotingInfo();
    
    UFUNCTION(BlueprintCallable)
    void ToggleThirdPerson();
    
    UFUNCTION(BlueprintCallable)
    void Tick_CameraReset();
    
    UFUNCTION(BlueprintCallable)
    void Tick_CameraDamage();
    
    UFUNCTION(BlueprintCallable)
    void SteadyDrone();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Server_UpdateDrone(FTransform NewTransform, float InRPM);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RetrieveLastHitDamageInfo(EDroneDamageSpeed& InDroneDamageSpeed, float& InDamageAmount) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void QuickTurn();
    
    UFUNCTION(BlueprintCallable)
    void OnDroneHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnDetectionSphereOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStabilized() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeedThresholdMet(float InSpeedAsPercentage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingBackward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInThirdPersonMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApplyingInput() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementSpeed(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPilot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdleRPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotPlayerController* GetDroneController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToPilot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeedAsPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentMovementDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitude() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finished_CameraDamage();
    
    UFUNCTION(BlueprintCallable)
    void ExitDrone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Client_UpdateDrone(FTransform NewTransform, float InRPM);
    
};

