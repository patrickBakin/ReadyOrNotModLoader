#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "CanUse.h"
#include "RespondToPlayerGaze.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ASequenceInteraction.generated.h"

class AActor;
class UPrimitiveComponent;
class UBoxComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AASequenceInteraction : public ALevelSequenceActor, public ICanUse, public IRespondToPlayerGaze {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReferencedCharacterViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RadiusComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* LastPlayedSequencerCharacter;
    
    AASequenceInteraction();
    UFUNCTION(BlueprintCallable)
    void OnSequencerFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

