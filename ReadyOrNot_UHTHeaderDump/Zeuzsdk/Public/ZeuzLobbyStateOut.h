#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyStateBase.h"
#include "ZeuzLobbyStateOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyStateOut : public FZeuzLobbyStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InboxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsersCur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    FZeuzLobbyStateOut();
};

