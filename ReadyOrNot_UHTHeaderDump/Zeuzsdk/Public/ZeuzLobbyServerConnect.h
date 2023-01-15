#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyServerConnect.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyServerConnect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerConnect;
    
    FZeuzLobbyServerConnect();
};

