#pragma once
#include "CoreMinimal.h"
#include "MagicLeapSharedWorldLocalData.h"
#include "MagicLeapSharedWorldAlignmentTransforms.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "MagicLeapSharedWorldPlayerController.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AMagicLeapSharedWorldPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetLocalWorldData(const FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetAlignmentTransforms(const FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChosenOne() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetChosenOne(bool bChosenOne);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMarkReadyForSendingLocalData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSendLocalDataToServer() const;
    
};

