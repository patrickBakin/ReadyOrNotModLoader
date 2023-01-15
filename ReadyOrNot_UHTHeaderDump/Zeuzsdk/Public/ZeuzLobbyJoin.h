#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyJoin.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyJoin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    FZeuzLobbyJoin();
};

