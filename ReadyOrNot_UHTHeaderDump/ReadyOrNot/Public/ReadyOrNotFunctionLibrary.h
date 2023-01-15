#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECOOPMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PostProcessEffectPlayer.h"
#include "PostProcessEffect.h"
#include "RonKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "EDLC.h"
#include "EItemCategory.h"
#include "ESwatCommand.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
#include "EDoorCheckResult.h"
#include "EDoorBreachType.h"
#include "ERONBuildConfiguration.h"
#include "ReadyOrNotFunctionLibrary.generated.h"

class UObject;
class AActor;
class UPrimitiveComponent;
class UFMODEvent;
class UFMODBus;
class USoundBase;
class UWidget;
class UAudioComponent;
class ABaseItem;
class ABadAIAction;
class AReadyOrNotCharacter;
class UHumanCharacterHUD_V2;
class APlayerCharacter;
class UPostProcessRequirement;
class AReadyOrNotLevelScript;
class UReadyOrNotGameUserSettings;
class ASplineTrigger;
class ASWATManager;
class UClass;
class USafeZoneSlot;
class UAnimMontage;
class UDecalComponent;
class UPlanarReflectionComponent;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReadyOrNotFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SwatCommandToString(ESwatCommand SwatCommand);
    
    UFUNCTION(BlueprintCallable)
    static void StopPostProcessEffect(FPostProcessSettings& PostProcessSettings, FPostProcessEffect& InPostProcessEffect);
    
    UFUNCTION(BlueprintCallable)
    static void StartPostProcessEffect_Specific(UObject* Context, FPostProcessSettings& PostProcessSettings, FPostProcessEffectPlayer& InPostProcessEffectPlayer, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static void StartPostProcessEffect(UObject* Context, FPostProcessSettings& PostProcessSettings, FPostProcessEffect& InPostProcessEffect, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SimulateAnimatedText(UPARAM(Ref) FString& FinalString, UPARAM(Ref) int32& Iterator, UPARAM(Ref) TArray<FString>& Chars, UPARAM(Ref) float& ElapsedTime, UPARAM(Ref) float& CurrentDelay, float DelayBetweenLetters, float DelayBetweenWords, float DeltaTime, bool& bCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void SetupPostProcessEffect(UObject* Context, FPostProcessEffect& InPostProcessEffect);
    
    UFUNCTION(BlueprintCallable)
    static void SetSafeZonePadding(USafeZoneSlot* SafeZoneSlot, FMargin Padding);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlanarReflectionScreenPercentage(UPlanarReflectionComponent* InPlanarReflectionComponent, float NewScreenPercentage);
    
    UFUNCTION(BlueprintCallable)
    static void SetFMODVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetDecalSize(UDecalComponent* InDecalComponent, FVector DecalSize);
    
    UFUNCTION(BlueprintCallable)
    static void ServerTravel(const FString& URL);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestartGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool ReportBadAIAction(ABadAIAction* InBadAIActionActor, const FText& InSummary, const FText& InDescription, bool bReportToLog, bool bDrawDebugString);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFromParentAndClear(UPARAM(Ref) TArray<UWidget*>& InWidgets);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveBadAIActionReport(ABadAIAction* InBadAIActionActor, bool bReportToLog, bool bDrawDebugString);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllNullElements_BP(const TArray<TSubclassOf<UClass>>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool ProcessPostProcessEffect(UObject* Context, FPostProcessSettings& PostProcessSettings, FPostProcessEffect& InPostProcessEffect, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayRandomFMODEventAtLocation(UObject* WorldContextObject, FVector Location, UPARAM(Ref) TArray<UFMODEvent*>& FMODEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayRandomFMODEvent_2D(UObject* WorldContextObject, UPARAM(Ref) TArray<UFMODEvent*>& FMODEvents);
    
    UFUNCTION(BlueprintCallable)
    static void PauseFMOD(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    static void MuteFMOD(bool bMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTableMontagePlaying(APlayerCharacter* PlayerCharacter, const FString& AnimationName, bool bIsCrouching);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemInInventory(AReadyOrNotCharacter* PlayerCharacter, EItemCategory ItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemEquipped(AReadyOrNotCharacter* PlayerCharacter, EItemCategory ItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHalloween();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFSREnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFMODBusPaused(UFMODBus* Bus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFMODBusMuted(UFMODBus* Bus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildPirated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAprilFools();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorOutsideSplineEnclosure(ASplineTrigger* InSplineTrigger, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInsideSplineEnclosure(ASplineTrigger* InSplineTrigger, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetWidgetSize_Local(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetWidgetSize_Absolute(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static float GetWeaponFOVOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector2D GetViewportPositionOfWidgetCenter(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector2D GetViewportPositionOfWidget(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget, FVector2D InCoordinates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetVector2DFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUseGearListInsteadOfRadial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ASWATManager* GetSWATManager(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetStringArrayFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetSingleLineArrayFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetServerNameFromCurrentSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotLevelScript* GetReadyOrNotLevelScript(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UReadyOrNotGameUserSettings* GetReadyOrNotGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UHumanCharacterHUD_V2* GetPlayerHUD(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* GetPlayerCharacterMutableDefaultObject(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector2D GetPixelPositionOfWidgetCenter(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector2D GetPixelPositionOfWidget(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget, FVector2D InCoordinates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetKeyFromInputAxisName(const FName& AxisName, bool bOnlyGamepadKey, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetKeyFromInputActionName(const FName& ActionName, bool bOnlyGamepadKey, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInterfaceFovOffset(float InFov);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIntegerFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFMODBusVolume(UFMODBus* Bus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDLCNumber(EDLC InDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDLC GetDLCENum(int32 InDLC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCurrentLevelNameForLookupTable(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECOOPMode GetCOOPMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetClassFromObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetClassDefaultObject(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERONBuildConfiguration GetBuildConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoolFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* GetAnimationFromTable(const FString& AnimationName, bool bIsCrouching);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USoundBase*> GetAllSoundsInWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetAllSectionNamesFromINIFile(const FString& ConfigFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ABaseItem*> GetAllItemsInMemory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UFMODBus*> GetAllFMODBusObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAudioComponent*> GetAllAudioComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UFMODEvent*> GetAll2DFMODAudioEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FulfillsAllPostProcessRequirements(UObject* Context, APlayerCharacter* OwningCharacter, AActor* DamageCauser, const TArray<TSubclassOf<UPostProcessRequirement>>& InRequirementClasses, const bool bForceSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatPlayerActionText(const FKey& InKey, const TEnumAsByte<EInputEvent>& InInputEvent, const FText& InActionText, const FString& InColorLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindNearestFloor_BP(AActor* InActor, const TArray<AActor*>& InActorsToIgnore, const TArray<UPrimitiveComponent*>& InComponentsToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<ABaseItem> FindItemClassInItemDataTable(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindConfigKeyFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DoorCheckResultToVoiceline(const EDoorCheckResult DoorBreachType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DoorBreachTypeToVoiceline_Negative(const EDoorBreachType DoorBreachType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DoorBreachTypeToVoiceline(const EDoorBreachType DoorBreachType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool DoesWidgetOverlap(UObject* WorldContext, UWidget* ParentWidget, UWidget* WidgetA, UWidget* WidgetB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DevMenuSettingsConfigDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRonKey ConvertUnrealKeyToRonKey(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertUnrealKeyNameToRonKeyName(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush ConvertKeyToIcon(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey ConvertIntToFKey(int32 Integer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector2D CalculateOffscreenPositionFromWorldLocation_Square(UObject* WorldContext, const FVector& WorldLocation, float ViewportOffset, bool& bIsOffscreen, float& Angle, float& ForwardDotProduct, float& RightDotProduct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector2D CalculateOffscreenPositionFromWorldLocation_Ellipse(UObject* WorldContext, const FVector& WorldLocation, float ViewportOffset, bool& bIsOffscreen, float& Angle, float& ForwardDotProduct, float& RightDotProduct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BadAIActionConfigDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnyTrue(UPARAM(Ref) TArray<bool>& BoolArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnyFalse(UPARAM(Ref) TArray<bool>& BoolArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllTrue(UPARAM(Ref) TArray<bool>& BoolArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllFalse(UPARAM(Ref) TArray<bool>& BoolArray);
    
};

