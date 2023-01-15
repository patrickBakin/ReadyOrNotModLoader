#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyStartDestroy.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyStartDestroy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    FZeuzLobbyStartDestroy();
};

