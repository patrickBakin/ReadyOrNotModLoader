#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PaperSpriteComponent.generated.h"

class UPaperSprite;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperSpriteComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* SourceSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor SpriteColor;
    
public:
    UPaperSpriteComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpriteColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    bool SetSprite(UPaperSprite* NewSprite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetSprite();
    
};

