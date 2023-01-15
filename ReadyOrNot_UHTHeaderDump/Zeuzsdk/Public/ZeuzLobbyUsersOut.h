#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyStateOut.h"
#include "ZeuzLobbyUserBase.h"
#include "ZeuzLobbyUsersOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyUsersOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzLobbyStateOut Lobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzLobbyUserBase> Users;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerConnect;
    
    FZeuzLobbyUsersOut();
};

