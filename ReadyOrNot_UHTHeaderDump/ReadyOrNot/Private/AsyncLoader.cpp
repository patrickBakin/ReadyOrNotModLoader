#include "AsyncLoader.h"
#include "Templates/SubclassOf.h"

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

TSubclassOf<UUserWidget> UAsyncLoader::GetLazyLoadedWidget(TSoftClassPtr<UUserWidget> Widget) {
    return NULL;
}

TSubclassOf<ABaseWeapon> UAsyncLoader::GetLazyLoadedWeapon(TSoftClassPtr<ABaseWeapon> Item) {
    return NULL;
}

USoundCue* UAsyncLoader::GetLazyLoadedSoundCue(TSoftObjectPtr<USoundCue> Cue) {
    return NULL;
}

USkeletalMesh* UAsyncLoader::GetLazyLoadedSkeletalMesh(TSoftObjectPtr<USkeletalMesh> Mesh) {
    return NULL;
}

TArray<TSubclassOf<AReadyOrNotGameMode>> UAsyncLoader::GetLazyLoadedReadyOrNotGameModeArray(TArray<TSoftClassPtr<AReadyOrNotGameMode>> Array) {
    return TArray<TSubclassOf<AReadyOrNotGameMode>>();
}

UParticleSystem* UAsyncLoader::GetLazyLoadedParticleSystem(TSoftObjectPtr<UParticleSystem> Particle) {
    return NULL;
}

UObject* UAsyncLoader::GetLazyLoadedObject(TSoftObjectPtr<UObject> Object) {
    return NULL;
}

UStaticMesh* UAsyncLoader::GetLazyLoadedMesh(TSoftObjectPtr<UStaticMesh> Mesh) {
    return NULL;
}

UMaterialInstance* UAsyncLoader::GetLazyLoadedMaterialInstance(TSoftObjectPtr<UMaterialInstance> Material) {
    return NULL;
}

TSubclassOf<ABaseItem> UAsyncLoader::GetLazyLoadedItem(TSoftClassPtr<ABaseItem> Item) {
    return NULL;
}

UTexture2D* UAsyncLoader::GetLazyLoadedImage(TSoftObjectPtr<UTexture2D> Texture) {
    return NULL;
}

TArray<TSubclassOf<UClass>> UAsyncLoader::GetLazyLoadedClassArray(TArray<TSoftClassPtr<UClass>> Array) {
    return TArray<TSubclassOf<UClass>>();
}

UClass* UAsyncLoader::GetLazyLoadedClass(TSoftClassPtr<UClass> Class) {
    return NULL;
}

UAnimSequence* UAsyncLoader::GetLazyLoadedAnimSequence(TSoftObjectPtr<UAnimSequence> Anim) {
    return NULL;
}

UAnimMontage* UAsyncLoader::GetLazyLoadedAnimMontage(TSoftObjectPtr<UAnimMontage> Montage) {
    return NULL;
}

UAsyncLoader::UAsyncLoader() {
}

