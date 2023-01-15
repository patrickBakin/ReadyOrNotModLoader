#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzRegion.h"
#include "ZeuzProvider.h"
#include "ZeuzLocation.h"
#include "ZeuzLocalityRegionGetIn.h"
#include "ZeuzLocalityProviderGetIn.h"
#include "ZeuzLocalityLocationGetIn.h"
#include "ZeuzApiLocality.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiLocality : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionUpdateBPS, FZeuzRegion, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityRegionUpdateBP, FZeuzRegion, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateLocalityRegionRemoveBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionRemoveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionRemoveBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionGetBPS, const TArray<FZeuzRegion>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityRegionGetBP, const TArray<FZeuzRegion>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionCreateBPS, FZeuzRegion, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityRegionCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityRegionCreateBP, FZeuzRegion, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderUpdateBPS, FZeuzProvider, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityProviderUpdateBP, FZeuzProvider, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateLocalityProviderRemoveBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderRemoveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderRemoveBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderGetBPS, const TArray<FZeuzProvider>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityProviderGetBP, const TArray<FZeuzProvider>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderCreateBPS, FZeuzProvider, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityProviderCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityProviderCreateBP, FZeuzProvider, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationUpdateBPS, FZeuzLocation, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityLocationUpdateBP, FZeuzLocation, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateLocalityLocationRemoveBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationRemoveBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationRemoveBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationGetBPS, const TArray<FZeuzLocation>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityLocationGetBP, const TArray<FZeuzLocation>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationCreateBPS, FZeuzLocation, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLocalityLocationCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLocalityLocationCreateBP, FZeuzLocation, Result, const FString&, Error);
    
    UZeuzApiLocality();
    UFUNCTION(BlueprintCallable)
    static void LocalityRegionUpdateBP(FZeuzRegion In, const UZeuzApiLocality::FDelegateLocalityRegionUpdateBP& Callback, const UZeuzApiLocality::FDelegateLocalityRegionUpdateBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityRegionUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityRegionRemoveBP(const FString& In, const UZeuzApiLocality::FDelegateLocalityRegionRemoveBP& Callback, const UZeuzApiLocality::FDelegateLocalityRegionRemoveBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityRegionRemoveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityRegionGetBP(const FZeuzLocalityRegionGetIn& In, const UZeuzApiLocality::FDelegateLocalityRegionGetBP& Callback, const UZeuzApiLocality::FDelegateLocalityRegionGetBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityRegionGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityRegionCreateBP(FZeuzRegion In, const UZeuzApiLocality::FDelegateLocalityRegionCreateBP& Callback, const UZeuzApiLocality::FDelegateLocalityRegionCreateBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityRegionCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityProviderUpdateBP(FZeuzProvider In, const UZeuzApiLocality::FDelegateLocalityProviderUpdateBP& Callback, const UZeuzApiLocality::FDelegateLocalityProviderUpdateBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityProviderUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityProviderRemoveBP(const FString& In, const UZeuzApiLocality::FDelegateLocalityProviderRemoveBP& Callback, const UZeuzApiLocality::FDelegateLocalityProviderRemoveBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityProviderRemoveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityProviderGetBP(const FZeuzLocalityProviderGetIn& In, const UZeuzApiLocality::FDelegateLocalityProviderGetBP& Callback, const UZeuzApiLocality::FDelegateLocalityProviderGetBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityProviderGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityProviderCreateBP(FZeuzProvider In, const UZeuzApiLocality::FDelegateLocalityProviderCreateBP& Callback, const UZeuzApiLocality::FDelegateLocalityProviderCreateBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityProviderCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityLocationUpdateBP(FZeuzLocation In, const UZeuzApiLocality::FDelegateLocalityLocationUpdateBP& Callback, const UZeuzApiLocality::FDelegateLocalityLocationUpdateBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityLocationUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityLocationRemoveBP(const FString& In, const UZeuzApiLocality::FDelegateLocalityLocationRemoveBP& Callback, const UZeuzApiLocality::FDelegateLocalityLocationRemoveBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityLocationRemoveBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityLocationGetBP(const FZeuzLocalityLocationGetIn& In, const UZeuzApiLocality::FDelegateLocalityLocationGetBP& Callback, const UZeuzApiLocality::FDelegateLocalityLocationGetBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityLocationGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LocalityLocationCreateBP(FZeuzLocation In, const UZeuzApiLocality::FDelegateLocalityLocationCreateBP& Callback, const UZeuzApiLocality::FDelegateLocalityLocationCreateBPS& OnSuccess, const UZeuzApiLocality::FDelegateLocalityLocationCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
};

