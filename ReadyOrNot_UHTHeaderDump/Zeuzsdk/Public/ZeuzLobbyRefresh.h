#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyRefresh.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyRefresh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastVersion;
    
    FZeuzLobbyRefresh();
};

