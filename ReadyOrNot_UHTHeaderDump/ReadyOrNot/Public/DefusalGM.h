#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "CharacterLookOverride.h"
#include "DefusalGM.generated.h"

class USkeletalMesh;
class AAISpawn;
class ABombActor;
class APlayerCharacter;
class APlayerStart;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ADefusalGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombActor* SelectedBombActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawn*> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart* SwatSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerCharacter*, FCharacterLookOverride> CharacterLookMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BlankFaceMesh;
    
public:
    ADefusalGM();
};

