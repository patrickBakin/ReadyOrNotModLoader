#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotProfile.h"
#include "ReadyOrNotSingleplayerProfile.generated.h"

class UReadyOrNotSingleplayerProfile;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotSingleplayerProfile : public UReadyOrNotProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionCount;
    
    UReadyOrNotSingleplayerProfile();
    UFUNCTION(BlueprintCallable)
    static UReadyOrNotSingleplayerProfile* CreateNewSingleplayerProfile(const FString& SaveName);
    
};

