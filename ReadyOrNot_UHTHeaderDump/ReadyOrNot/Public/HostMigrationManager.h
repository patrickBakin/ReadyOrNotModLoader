#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Hm_PlayerInformation.h"
#include "Hm_CyberneticsInformation.h"
#include "Hm_DoorInformation.h"
#include "Hm_BombInformation.h"
#include "Hm_BaggedEvidence.h"
#include "Hm_DroppedEvidence.h"
#include "Hm_Objectives.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "HostMigrationManager.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class READYORNOT_API UHostMigrationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_PlayerInformation> PlayerInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_CyberneticsInformation> CyberneticsInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_DoorInformation> DoorInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_BombInformation> BombInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_BaggedEvidence> BaggedEvidenceInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_DroppedEvidence> DroppedEvidenceInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHm_Objectives> ObjectiveInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* NextHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MigrationGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModeName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextHostName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpectedPlayerCount;
    
    UHostMigrationManager();
    UFUNCTION(BlueprintCallable)
    void SaveState();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnMigrationSessionFoundSuccess(const TArray<FBlueprintSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    void OnMigrationSessionFoundFailed(const TArray<FBlueprintSessionResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbySuccess();
    
    UFUNCTION(BlueprintCallable)
    void FindMigrationSession();
    
    UFUNCTION(BlueprintCallable)
    void CreateMigrationSession();
    
};

