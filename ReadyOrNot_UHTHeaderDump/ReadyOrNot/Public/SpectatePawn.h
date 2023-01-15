#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "ETeamType.h"
#include "SpectatePawn.generated.h"

class AActor;
class UUserWidget;
class APlayerCharacter;
class USpectatorCharacterHUD;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class READYORNOT_API ASpectatePawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeadSpectatePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendWithViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingCenterprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PendingCenterprintDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PendingCenterprintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PendingCenterprintOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* HeadcamMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HeadcamMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SpectateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpectatorCharacterHUD* SpectatorHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowViewTargetHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PotentialViewTargetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Killer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* KilledCharacter;
    
    ASpectatePawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpectatePreviousPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetViewTarget(APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatorCharacterWidget(USpectatorCharacterHUD* NewHud);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeamChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChatPressed();
    
    UFUNCTION(BlueprintCallable)
    ETeamType GetTeam();
    
    UFUNCTION(BlueprintCallable)
    void EscapeMenu();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CleanUpOldPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CenterPrint(FName Type, float Duration, APlayerCharacter* Other);
    
};

