#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseRestoreInfo -FallbackName=InAppPurchaseRestoreInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=EInAppPurchaseState -FallbackName=EInAppPurchaseState
#include "InAppPurchaseRestoreResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseRestoreResult, TEnumAsByte<EInAppPurchaseState::Type>, CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>&, InAppRestorePurchaseInformation);

