#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EDLC.h"
#include "ETeamType.h"
#include "SkinComponent.generated.h"

class AActor;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USkinComponent;
class UTexture2D;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API USkinComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLC Dlc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetsToFactorySkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType LockedToTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> LockedToBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMesh*, USkeletalMesh*> SkeletalMeshSkinMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, USkeletalMesh*> PreAppliedSkeletalMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, UStaticMesh*> StaticMeshSkinMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMeshComponent*, UStaticMesh*> PreAppliedStaticMeshMap;
    
    USkinComponent();
    UFUNCTION(BlueprintCallable)
    void ResetSkin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFactorySkin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDLCUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetClassDefaultIcon(TSubclassOf<USkinComponent> SkinComponent);
    
};

