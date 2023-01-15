#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "PlayerStart_VIP_Spawn.generated.h"

class UBoxComponent;
class UArrowComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class READYORNOT_API APlayerStart_VIP_Spawn : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasVisited: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VIPSpawnDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuffixNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SpawnBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SpawnDirection;
    
public:
    APlayerStart_VIP_Spawn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVIPSpawnDescriptor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSpawnDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomSpawnPoint();
    
};

