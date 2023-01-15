#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalActor -FallbackName=DecalActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ETeamType.h"
#include "CommandDecal.generated.h"

class AReadyOrNotCharacter;
class UObjectiveMarkerComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class READYORNOT_API ACommandDecal : public ADecalActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AlphaPositionParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BetaPositionParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CharliePositionParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DeltaPositionParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* CommandMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType CommandTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GoldTeamSquadPositionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RedTeamSquadPositionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BlueTeamSquadPositionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GoldTeamDecalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RedTeamDecalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BlueTeamDecalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GoldTeamIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RedTeamIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BlueTeamIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DecalColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginalDecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommandDecalString;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_CommandDecal;
    
public:
    ACommandDecal();
    UFUNCTION(BlueprintCallable)
    void TrackTarget(FVector TargetLocation, FVector MarkerLocation, FVector2D CommandDecalSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandTeam(ETeamType NewCommandTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandParticle(UParticleSystem* NewCommandParticle);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandIconColor(FLinearColor NewCommandIconColor);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandDecalString(const FString& NewCommandName);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandDecalColor(FLinearColor NewCommandDecalColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetCommandTeam() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCommand(bool bHideDecalWhenNoSquadPositionIsVisible, AReadyOrNotCharacter* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateCommand(const FString& CommandName, FVector CommandLocation, FVector MarkerLocation, const TMap<AReadyOrNotCharacter*, FVector>& SquadPositionsMap);
    
};

