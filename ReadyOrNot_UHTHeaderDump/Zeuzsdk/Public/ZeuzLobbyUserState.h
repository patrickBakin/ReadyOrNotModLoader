#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyUserBase.h"
#include "ZeuzLobbyUserState.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyUserState : public FZeuzLobbyUserBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerConnect;
    
    FZeuzLobbyUserState();
};

