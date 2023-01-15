#pragma once
#include "CoreMinimal.h"
#include "RadialWidgetBase.h"
#include "WeaponWheelWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UWeaponWheelWidget : public URadialWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Categories;
    
public:
    UWeaponWheelWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveNullItemsFromCategory(const FName& WeaponWheelCategoryName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveNullItemsFromAllCategories();
    
};

