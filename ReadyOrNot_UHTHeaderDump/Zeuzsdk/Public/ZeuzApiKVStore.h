#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzKVStorePutIn.h"
#include "ZeuzKVStoreDelIn.h"
#include "ZeuzKVStoreKey.h"
#include "ZeuzKVStoreKVEntry.h"
#include "ZeuzApiKVStore.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiKVStore : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FDelegateKVStorePutBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateKVStorePutBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateKVStorePutBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateKVStoreGetBPS, const FZeuzKVStoreKVEntry&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateKVStoreGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateKVStoreGetBP, const FZeuzKVStoreKVEntry&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateKVStoreDelBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateKVStoreDelBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateKVStoreDelBP, const FString&, Error);
    
    UZeuzApiKVStore();
    UFUNCTION(BlueprintCallable)
    static void KVStorePutBP(const FZeuzKVStorePutIn& In, const UZeuzApiKVStore::FDelegateKVStorePutBP& Callback, const UZeuzApiKVStore::FDelegateKVStorePutBPS& OnSuccess, const UZeuzApiKVStore::FDelegateKVStorePutBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void KVStoreGetBP(const FZeuzKVStoreKey& In, const UZeuzApiKVStore::FDelegateKVStoreGetBP& Callback, const UZeuzApiKVStore::FDelegateKVStoreGetBPS& OnSuccess, const UZeuzApiKVStore::FDelegateKVStoreGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void KVStoreDelBP(const FZeuzKVStoreDelIn& In, const UZeuzApiKVStore::FDelegateKVStoreDelBP& Callback, const UZeuzApiKVStore::FDelegateKVStoreDelBPS& OnSuccess, const UZeuzApiKVStore::FDelegateKVStoreDelBPF& OnFailure, const FZeuzContext& Ctx);
    
};

