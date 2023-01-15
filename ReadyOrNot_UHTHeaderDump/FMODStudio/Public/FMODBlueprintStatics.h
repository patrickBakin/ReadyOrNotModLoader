#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EFMOD_STUDIO_STOP_MODE.h"
#include "EFMODEventProperty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "FMODEventInstance.h"
#include "FMODBlueprintStatics.generated.h"

class UObject;
class USceneComponent;
class UFMODEvent;
class UFMODBus;
class UFMODBank;
class UFMODAudioComponent;
class UFMODAsset;
class UFMODVCA;

UCLASS(Blueprintable)
class FMODSTUDIO_API UFMODBlueprintStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFMODBlueprintStatics();
    UFUNCTION(BlueprintCallable)
    static void VCASetVolume(UFMODVCA* Vca, float Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnloadEventSampleData(UObject* WorldContextObject, UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBankSampleData(UFMODBank* Bank);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBank(UFMODBank* Bank);
    
    UFUNCTION(BlueprintCallable)
    static void SetOutputDriverByName(const FString& NewDriverName);
    
    UFUNCTION(BlueprintCallable)
    static void SetOutputDriverByIndex(int32 NewDriverIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocale(const FString& Locale);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalParameterByName(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static UFMODAudioComponent* PlayEventAttached(UFMODEvent* Event, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FFMODEventInstance PlayEventAtLocation(UObject* WorldContextObject, UFMODEvent* Event, const FTransform& Location, bool bAutoPlay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FFMODEventInstance PlayEvent2D(UObject* WorldContextObject, UFMODEvent* Event, bool bAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void MixerSuspend();
    
    UFUNCTION(BlueprintCallable)
    static void MixerResume();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadEventSampleData(UObject* WorldContextObject, UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBankSampleData(UFMODBank* Bank);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBank(UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldAudible(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBankLoaded(UFMODBank* Bank);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetOutputDrivers();
    
    UFUNCTION(BlueprintCallable)
    static void GetGlobalParameterValueByName(FName Name, float& UserValue, float& FinalValue);
    
    UFUNCTION(BlueprintCallable)
    static float GetGlobalParameterByName(FName Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FFMODEventInstance> FindEventInstances(UObject* WorldContextObject, UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static UFMODEvent* FindEventByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static UFMODAsset* FindAssetByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceStop(FFMODEventInstance EventInstance, bool Release);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceSetVolume(FFMODEventInstance EventInstance, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceSetTransform(FFMODEventInstance EventInstance, const FTransform& Location);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceSetProperty(FFMODEventInstance EventInstance, TEnumAsByte<EFMODEventProperty::Type> Property, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceSetPitch(FFMODEventInstance EventInstance, float Pitch);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceSetPaused(FFMODEventInstance EventInstance, bool paused);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceSetParameter(FFMODEventInstance EventInstance, FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceRelease(FFMODEventInstance EventInstance);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstancePlay(FFMODEventInstance EventInstance);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceKeyOff(FFMODEventInstance EventInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool EventInstanceIsValid(FFMODEventInstance EventInstance);
    
    UFUNCTION(BlueprintCallable)
    static void EventInstanceGetParameterValue(FFMODEventInstance EventInstance, FName Name, float& UserValue, float& FinalValue);
    
    UFUNCTION(BlueprintCallable)
    static float EventInstanceGetParameter(FFMODEventInstance EventInstance, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void BusStopAllEvents(UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode);
    
    UFUNCTION(BlueprintCallable)
    static void BusSetVolume(UFMODBus* Bus, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void BusSetPaused(UFMODBus* Bus, bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    static void BusSetMute(UFMODBus* Bus, bool bMute);
    
};

