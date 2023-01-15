#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzTags.h"
#include "ZeuzTagsUtil.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzTagsUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UZeuzTagsUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TagsToString(const FZeuzTags& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void StringToTags(const FString& In, FZeuzTags& Out);
    
};

