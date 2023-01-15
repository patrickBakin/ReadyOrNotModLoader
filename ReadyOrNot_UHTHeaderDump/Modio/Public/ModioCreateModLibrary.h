#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioCreateModParams.h"
#include "ModioCreateModFileParams.h"
#include "EModioModfilePlatform.h"
#include "ModioCreateModLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioCreateModLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioCreateModLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SetVersionString(UPARAM(Ref) FModioCreateModFileParams& In, const FString& Version);
    
    UFUNCTION(BlueprintCallable)
    static void SetTags(UPARAM(Ref) FModioCreateModParams& In, UPARAM(Ref) TArray<FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    static void SetModfilePlatforms(UPARAM(Ref) FModioCreateModFileParams& In, UPARAM(Ref) TArray<EModioModfilePlatform>& Platforms);
    
    UFUNCTION(BlueprintCallable)
    static void SetModFileMetadataBlob(UPARAM(Ref) FModioCreateModFileParams& In, const FString& MetadataBlob);
    
    UFUNCTION(BlueprintCallable)
    static void SetMetadataBlob(UPARAM(Ref) FModioCreateModParams& In, const FString& MetadataBlob);
    
    UFUNCTION(BlueprintCallable)
    static void SetMarkAsActiveRelease(UPARAM(Ref) FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
    
    UFUNCTION(BlueprintCallable)
    static void SetInitialVisibility(UPARAM(Ref) FModioCreateModParams& In, bool InitialVisibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetHomepageURL(UPARAM(Ref) FModioCreateModParams& In, const FString& HomepageURL);
    
    UFUNCTION(BlueprintCallable)
    static void SetDescription(UPARAM(Ref) FModioCreateModParams& In, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static void SetChangelogString(UPARAM(Ref) FModioCreateModFileParams& In, const FString& Changelog);
    
};

