#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EActionMappingFilter.h"
#include "EAxisMappingFilter.h"
#include "ActionMappingStruct.h"
#include "AxisMappingStruct.h"
#include "InputRemappingNodes.generated.h"

UCLASS(Blueprintable)
class INPUTREMAPPING_API UInputRemappingNodes : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputRemappingNodes();
    UFUNCTION(BlueprintCallable)
    static void RemoveAxisMapping(FAxisMappingStruct MappingData, bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActionMapping(FActionMappingStruct MappingData, bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable)
    static void RebindAxisMapping(FAxisMappingStruct AxisMapping, FAxisMappingStruct NewData, bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable)
    static void RebindActionMapping(FActionMappingStruct ActionMapping, FActionMappingStruct NewData, bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllAxisMappings(FAxisMappingStruct FilterData, TArray<EAxisMappingFilter> Filters, bool& ReturnValue, TArray<FAxisMappingStruct>& AxisMappings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllActionMappings(FActionMappingStruct FilterData, TArray<EActionMappingFilter> Filters, bool& ReturnValue, TArray<FActionMappingStruct>& ActionMappings);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNewAxisMapping(FAxisMappingStruct MappingData, bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNewActionMapping(FActionMappingStruct MappingData, bool& ReturnValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AxisMappingNotEqualActionMapping(const FAxisMappingStruct& A, const FAxisMappingStruct& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AxisMappingEqualActionMapping(const FAxisMappingStruct& A, const FAxisMappingStruct& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActionMappingNotEqualActionMapping(const FActionMappingStruct& A, const FActionMappingStruct& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActionMappingEqualActionMapping(const FActionMappingStruct& A, const FActionMappingStruct& B);
    
};

