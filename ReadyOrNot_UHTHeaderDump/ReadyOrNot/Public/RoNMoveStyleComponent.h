#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RoNMovementStyle.h"
#include "RoNMoveStyleComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URoNMoveStyleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MoveStyleDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultMoveStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaulGaitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveStyleCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMoveStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOverriding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoNMovementStyle ActiveMoveStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveStyle, meta=(AllowPrivateAccess=true))
    FName Rep_MoveStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveStyle, meta=(AllowPrivateAccess=true))
    int32 ActiveGaitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveStyle, meta=(AllowPrivateAccess=true))
    FName ActiveGaitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaitTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PendingGaitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsStrafing, meta=(AllowPrivateAccess=true))
    bool bIsStrafing;
    
    URoNMoveStyleComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideMoveStyleByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementStyleByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovementGaitByName(FName Name, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSpeedMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterAccelerationMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveStyle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsStrafing();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideMoveStyle();
    
};

