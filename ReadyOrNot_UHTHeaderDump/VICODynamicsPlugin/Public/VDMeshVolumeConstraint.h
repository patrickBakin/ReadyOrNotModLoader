#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VDMeshVolumeConstraint.generated.h"

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API UVDMeshVolumeConstraint : public UObject {
    GENERATED_BODY()
public:
    UVDMeshVolumeConstraint();
    UFUNCTION(BlueprintCallable)
    void SetRestVolume(float NewVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRestVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentVolume() const;
    
};

