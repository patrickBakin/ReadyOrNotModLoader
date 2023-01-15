#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyUserState.h"
#include "ZeuzLobbyUserIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyUserIn : public FZeuzLobbyUserState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyID;
    
    FZeuzLobbyUserIn();
};

