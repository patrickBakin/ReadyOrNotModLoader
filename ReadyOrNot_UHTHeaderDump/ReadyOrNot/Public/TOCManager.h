#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TOCData.h"
#include "ETOCPriority.h"
#include "TOCManager.generated.h"

class USceneComponent;
class UFMODEvent;
class UFMODAudioComponent;
class ATOCManager;

UCLASS(Blueprintable, Transient)
class READYORNOT_API ATOCManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TocEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTOCData CurrentTOCData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FTOCData> QueuedTOCData;
    
public:
    ATOCManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartTOCResponse(const FString& Line, bool bIsNetworked, ETOCPriority Priority);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayTOCSound2D(const FString& Filename);
    
private:
    UFUNCTION(BlueprintCallable)
    void IterateTOCQueue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTOCSpeakingLine(const FString& Line) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTOCSpeaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATOCManager* Get();
    
};

