#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyOrNotGameMode_PVP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "KingOfTheHostageGM.generated.h"

class APawn;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AKingOfTheHostageGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHostageRescued, APawn*, HostageRescued);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedHostages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start_RoundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlueTeamOnAttack;
    
    AKingOfTheHostageGM();
    UFUNCTION(BlueprintCallable)
    APawn* SpawnHostage(TSubclassOf<APawn> HostageClass, TArray<FVector> SpawnLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AreAllHostagesSafe();
    
};

