#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AsyncLoader.generated.h"

class UObject;
class USkeletalMesh;
class UUserWidget;
class ABaseItem;
class AReadyOrNotGameMode;
class ABaseWeapon;
class UClass;
class UMaterialInstance;
class UAnimSequence;
class UAnimMontage;
class UTexture2D;
class UParticleSystem;
class USoundCue;
class UStaticMesh;

UCLASS(Blueprintable)
class READYORNOT_API UAsyncLoader : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAsyncLoader();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UUserWidget> GetLazyLoadedWidget(TSoftClassPtr<UUserWidget> Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<ABaseWeapon> GetLazyLoadedWeapon(TSoftClassPtr<ABaseWeapon> Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundCue* GetLazyLoadedSoundCue(TSoftObjectPtr<USoundCue> Cue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMesh* GetLazyLoadedSkeletalMesh(TSoftObjectPtr<USkeletalMesh> Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSubclassOf<AReadyOrNotGameMode>> GetLazyLoadedReadyOrNotGameModeArray(TArray<TSoftClassPtr<AReadyOrNotGameMode>> Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UParticleSystem* GetLazyLoadedParticleSystem(TSoftObjectPtr<UParticleSystem> Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetLazyLoadedObject(TSoftObjectPtr<UObject> Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStaticMesh* GetLazyLoadedMesh(TSoftObjectPtr<UStaticMesh> Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInstance* GetLazyLoadedMaterialInstance(TSoftObjectPtr<UMaterialInstance> Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<ABaseItem> GetLazyLoadedItem(TSoftClassPtr<ABaseItem> Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetLazyLoadedImage(TSoftObjectPtr<UTexture2D> Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSubclassOf<UClass>> GetLazyLoadedClassArray(TArray<TSoftClassPtr<UClass>> Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetLazyLoadedClass(TSoftClassPtr<UClass> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequence* GetLazyLoadedAnimSequence(TSoftObjectPtr<UAnimSequence> Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimMontage* GetLazyLoadedAnimMontage(TSoftObjectPtr<UAnimMontage> Montage);
    
};

