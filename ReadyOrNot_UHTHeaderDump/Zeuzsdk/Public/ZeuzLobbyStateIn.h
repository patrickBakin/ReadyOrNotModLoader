#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyStateBase.h"
#include "ZeuzLobbyStateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyStateIn : public FZeuzLobbyStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    FZeuzLobbyStateIn();
};

