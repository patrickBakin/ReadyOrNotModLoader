#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "GameplayTaskSpawnActorDelegateDelegate.h"
#include "GameplayTask_SpawnActor.generated.h"

class UObject;
class AActor;
class UGameplayTaskOwnerInterface;
class IGameplayTaskOwnerInterface;
class UGameplayTask_SpawnActor;

UCLASS(Blueprintable, MinimalAPI)
class UGameplayTask_SpawnActor : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTaskSpawnActorDelegate Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTaskSpawnActorDelegate DidNotSpawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClassToSpawn;
    
public:
    UGameplayTask_SpawnActor();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AActor> Class, bool bSpawnOnlyOnAuthority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);
    
};

