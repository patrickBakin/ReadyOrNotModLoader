#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzVariant.h"
#include "ZeuzByteArray.h"
#include "ZeuzApiUtil.generated.h"

class UProperty;

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FTimerDynamicDelegateS, const FString&, Value);
    
    UZeuzApiUtil();
    UFUNCTION(BlueprintCallable)
    static void TimerWithString(const UZeuzApiUtil::FTimerDynamicDelegateS& Event, float Time, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StructToVariant(UProperty* AnyStruct, FZeuzVariant& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StructToByteArrayJSON(UProperty* AnyStruct, FZeuzByteArray& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StructToByteArrayBin(UProperty* AnyStruct, FZeuzByteArray& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StructFromVariant(UProperty*& AnyStruct, const FZeuzVariant& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StructFromByteArrayJSON(UProperty*& AnyStruct, const FZeuzByteArray& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StructFromByteArrayBin(UProperty* AnyStruct, FZeuzByteArray& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StringNotEmpty(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StringIsEmpty(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveGameToByteArray(const FString& Filename, FZeuzByteArray& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveGameFromByteArray(const FZeuzByteArray& Value, const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool JsonToVariant(const FString& Json, FZeuzVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool JsonFromVariant(const FZeuzVariant& Variant, FString& Json);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveGamePath(const FString& Name);
    
};

