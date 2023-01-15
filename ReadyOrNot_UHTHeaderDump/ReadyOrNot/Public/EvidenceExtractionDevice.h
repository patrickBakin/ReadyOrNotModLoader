#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UseabilityInterface.h"
#include "EvidenceExtractionDevice.generated.h"

class UStaticMeshComponent;
class UInteractableComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AEvidenceExtractionDevice : public AActor, public IUseabilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvidenceExtractionTime;
    
public:
    AEvidenceExtractionDevice();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryExtractEvidence(APlayerCharacter* EvidencePossessor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEvidenceToExtract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartExtraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCollectEvidence() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

