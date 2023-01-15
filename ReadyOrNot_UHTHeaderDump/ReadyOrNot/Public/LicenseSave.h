#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "LicenseSave.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ULicenseSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptedAlphaNonDisclosureAgreement;
    
    ULicenseSave();
    UFUNCTION(BlueprintCallable)
    void AcceptAlphaNDA();
    
};

