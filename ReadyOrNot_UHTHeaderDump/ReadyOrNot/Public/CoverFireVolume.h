#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CoverFireVolume.generated.h"

class AActor;
class ACyberneticController;
class AFirePointActor;
class ASuspectCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ACoverFireVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFirePointActor*> FirePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASuspectCharacter*> BlacklistedSuspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASuspectCharacter*> CachedSuspects;
    
public:
    ACoverFireVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFreeFirePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFirePointActor* GetNextPushUpPoint(AFirePointActor* CurrentFirePoint, FVector Location, FVector EnemyLocation, ACyberneticController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<ASuspectCharacter*> GetNearestSuspects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFirePointActor* GetNearestFirePoint(FVector Location, ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFirePointActor* GetFurtherestFirePoint(FVector Location, ACyberneticController* Controller);
    
};

