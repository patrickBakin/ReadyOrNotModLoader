#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioEditModParams.h"
#include "EModioMaturityFlags.h"
#include "ModioEditModLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioEditModLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioEditModLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SetVisibility(UPARAM(Ref) FModioEditModParams& In, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetSummary(UPARAM(Ref) FModioEditModParams& In, const FString& Summary);
    
    UFUNCTION(BlueprintCallable)
    static void SetNamePath(UPARAM(Ref) FModioEditModParams& In, const FString& NamePath);
    
    UFUNCTION(BlueprintCallable)
    static void SetName(UPARAM(Ref) FModioEditModParams& In, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetMetadataBlob(UPARAM(Ref) FModioEditModParams& In, const FString& MetadataBlob);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaturityFlags(UPARAM(Ref) FModioEditModParams& In, EModioMaturityFlags MaturityFlags);
    
    UFUNCTION(BlueprintCallable)
    static void SetHomepageURL(UPARAM(Ref) FModioEditModParams& In, const FString& HomepageURL);
    
    UFUNCTION(BlueprintCallable)
    static void SetDescription(UPARAM(Ref) FModioEditModParams& In, const FString& Description);
    
};

