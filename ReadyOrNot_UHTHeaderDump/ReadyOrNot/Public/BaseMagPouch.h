#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
#include "BaseMagPouch.generated.h"

class USkeletalMeshComponent;
class UAnimationAsset;

UCLASS(Blueprintable)
class READYORNOT_API ABaseMagPouch : public ABaseItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MagazineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* OpenPouchAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ClosedPouchAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MagSocket;
    
public:
    ABaseMagPouch();
private:
    UFUNCTION(BlueprintCallable)
    void ShowMagazine();
    
    UFUNCTION(BlueprintCallable)
    void OpenPouch();
    
    UFUNCTION(BlueprintCallable)
    void HideMagazine();
    
    UFUNCTION(BlueprintCallable)
    void ClosePouch();
    
};

