#include "ReadyOrNotFunctionLibrary.h"
#include "Templates/SubclassOf.h"

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

FString UReadyOrNotFunctionLibrary::SwatCommandToString(ESwatCommand SwatCommand) {
    return TEXT("");
}

void UReadyOrNotFunctionLibrary::StopPostProcessEffect(FPostProcessSettings& PostProcessSettings, FPostProcessEffect& InPostProcessEffect) {
}

void UReadyOrNotFunctionLibrary::StartPostProcessEffect_Specific(UObject* Context, FPostProcessSettings& PostProcessSettings, FPostProcessEffectPlayer& InPostProcessEffectPlayer, AActor* DamageCauser) {
}

void UReadyOrNotFunctionLibrary::StartPostProcessEffect(UObject* Context, FPostProcessSettings& PostProcessSettings, FPostProcessEffect& InPostProcessEffect, AActor* DamageCauser) {
}

FString UReadyOrNotFunctionLibrary::SimulateAnimatedText(FString& FinalString, int32& Iterator, TArray<FString>& Chars, float& ElapsedTime, float& CurrentDelay, float DelayBetweenLetters, float DelayBetweenWords, float DeltaTime, bool& bCompleted) {
    return TEXT("");
}

void UReadyOrNotFunctionLibrary::SetupPostProcessEffect(UObject* Context, FPostProcessEffect& InPostProcessEffect) {
}

void UReadyOrNotFunctionLibrary::SetSafeZonePadding(USafeZoneSlot* SafeZoneSlot, FMargin Padding) {
}

void UReadyOrNotFunctionLibrary::SetPlanarReflectionScreenPercentage(UPlanarReflectionComponent* InPlanarReflectionComponent, float NewScreenPercentage) {
}

void UReadyOrNotFunctionLibrary::SetFMODVolume(float Volume) {
}

void UReadyOrNotFunctionLibrary::SetDecalSize(UDecalComponent* InDecalComponent, FVector DecalSize) {
}

void UReadyOrNotFunctionLibrary::ServerTravel(const FString& URL) {
}

void UReadyOrNotFunctionLibrary::RestartGame(const UObject* WorldContextObject) {
}

bool UReadyOrNotFunctionLibrary::ReportBadAIAction(ABadAIAction* InBadAIActionActor, const FText& InSummary, const FText& InDescription, bool bReportToLog, bool bDrawDebugString) {
    return false;
}

void UReadyOrNotFunctionLibrary::RemoveFromParentAndClear(TArray<UWidget*>& InWidgets) {
}

bool UReadyOrNotFunctionLibrary::RemoveBadAIActionReport(ABadAIAction* InBadAIActionActor, bool bReportToLog, bool bDrawDebugString) {
    return false;
}

void UReadyOrNotFunctionLibrary::RemoveAllNullElements_BP(const TArray<TSubclassOf<UClass>>& Array) {
}

bool UReadyOrNotFunctionLibrary::ProcessPostProcessEffect(UObject* Context, FPostProcessSettings& PostProcessSettings, FPostProcessEffect& InPostProcessEffect, float DeltaTime) {
    return false;
}

void UReadyOrNotFunctionLibrary::PlayRandomFMODEventAtLocation(UObject* WorldContextObject, FVector Location, TArray<UFMODEvent*>& FMODEvents) {
}

void UReadyOrNotFunctionLibrary::PlayRandomFMODEvent_2D(UObject* WorldContextObject, TArray<UFMODEvent*>& FMODEvents) {
}

void UReadyOrNotFunctionLibrary::PauseFMOD(bool bPaused) {
}

void UReadyOrNotFunctionLibrary::MuteFMOD(bool bMuted) {
}

bool UReadyOrNotFunctionLibrary::IsTableMontagePlaying(APlayerCharacter* PlayerCharacter, const FString& AnimationName, bool bIsCrouching) {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsItemInInventory(AReadyOrNotCharacter* PlayerCharacter, EItemCategory ItemCategory) {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsItemEquipped(AReadyOrNotCharacter* PlayerCharacter, EItemCategory ItemCategory) {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsInLobby() {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsHalloween() {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsFSREnabled() {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsFMODBusPaused(UFMODBus* Bus) {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsFMODBusMuted(UFMODBus* Bus) {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsDLSSEnabled() {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsBuildPirated() {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsAprilFools() {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsActorOutsideSplineEnclosure(ASplineTrigger* InSplineTrigger, AActor* InActor) {
    return false;
}

bool UReadyOrNotFunctionLibrary::IsActorInsideSplineEnclosure(ASplineTrigger* InSplineTrigger, AActor* InActor) {
    return false;
}

FVector2D UReadyOrNotFunctionLibrary::GetWidgetSize_Local(UWidget* InWidget) {
    return FVector2D{};
}

FVector2D UReadyOrNotFunctionLibrary::GetWidgetSize_Absolute(UWidget* InWidget) {
    return FVector2D{};
}

float UReadyOrNotFunctionLibrary::GetWeaponFOVOffset() {
    return 0.0f;
}

FVector2D UReadyOrNotFunctionLibrary::GetViewportPositionOfWidgetCenter(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget) {
    return FVector2D{};
}

FVector2D UReadyOrNotFunctionLibrary::GetViewportPositionOfWidget(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget, FVector2D InCoordinates) {
    return FVector2D{};
}

FVector UReadyOrNotFunctionLibrary::GetVectorFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return FVector{};
}

FVector2D UReadyOrNotFunctionLibrary::GetVector2DFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return FVector2D{};
}

bool UReadyOrNotFunctionLibrary::GetUseGearListInsteadOfRadial() {
    return false;
}

ASWATManager* UReadyOrNotFunctionLibrary::GetSWATManager(UObject* WorldContext) {
    return NULL;
}

FString UReadyOrNotFunctionLibrary::GetStringFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return TEXT("");
}

TArray<FString> UReadyOrNotFunctionLibrary::GetStringArrayFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return TArray<FString>();
}

TArray<FString> UReadyOrNotFunctionLibrary::GetSingleLineArrayFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return TArray<FString>();
}

FString UReadyOrNotFunctionLibrary::GetServerNameFromCurrentSession() {
    return TEXT("");
}

AReadyOrNotLevelScript* UReadyOrNotFunctionLibrary::GetReadyOrNotLevelScript(UObject* Context) {
    return NULL;
}

UReadyOrNotGameUserSettings* UReadyOrNotFunctionLibrary::GetReadyOrNotGameUserSettings() {
    return NULL;
}

UHumanCharacterHUD_V2* UReadyOrNotFunctionLibrary::GetPlayerHUD(UObject* WorldContext) {
    return NULL;
}

APlayerCharacter* UReadyOrNotFunctionLibrary::GetPlayerCharacterMutableDefaultObject(UClass* Class) {
    return NULL;
}

FVector2D UReadyOrNotFunctionLibrary::GetPixelPositionOfWidgetCenter(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget) {
    return FVector2D{};
}

FVector2D UReadyOrNotFunctionLibrary::GetPixelPositionOfWidget(UObject* WorldContext, UWidget* InParentWidget, UWidget* InWidget, FVector2D InCoordinates) {
    return FVector2D{};
}

FKey UReadyOrNotFunctionLibrary::GetKeyFromInputAxisName(const FName& AxisName, bool bOnlyGamepadKey, int32 Index) {
    return FKey{};
}

FKey UReadyOrNotFunctionLibrary::GetKeyFromInputActionName(const FName& ActionName, bool bOnlyGamepadKey, int32 Index) {
    return FKey{};
}

float UReadyOrNotFunctionLibrary::GetInterfaceFovOffset(float InFov) {
    return 0.0f;
}

int32 UReadyOrNotFunctionLibrary::GetIntegerFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return 0;
}

float UReadyOrNotFunctionLibrary::GetFMODBusVolume(UFMODBus* Bus) {
    return 0.0f;
}

float UReadyOrNotFunctionLibrary::GetFloatFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return 0.0f;
}

int32 UReadyOrNotFunctionLibrary::GetDLCNumber(EDLC InDLC) {
    return 0;
}

EDLC UReadyOrNotFunctionLibrary::GetDLCENum(int32 InDLC) {
    return EDLC::DLC_None;
}

FName UReadyOrNotFunctionLibrary::GetCurrentLevelNameForLookupTable(UObject* Context) {
    return NAME_None;
}

ECOOPMode UReadyOrNotFunctionLibrary::GetCOOPMode() {
    return ECOOPMode::CM_None;
}

UClass* UReadyOrNotFunctionLibrary::GetClassFromObject(UObject* Object) {
    return NULL;
}

UObject* UReadyOrNotFunctionLibrary::GetClassDefaultObject(UClass* Class) {
    return NULL;
}

ERONBuildConfiguration UReadyOrNotFunctionLibrary::GetBuildConfiguration() {
    return ERONBuildConfiguration::Unknown;
}

bool UReadyOrNotFunctionLibrary::GetBoolFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return false;
}

float UReadyOrNotFunctionLibrary::GetAspectRatio() {
    return 0.0f;
}

UAnimMontage* UReadyOrNotFunctionLibrary::GetAnimationFromTable(const FString& AnimationName, bool bIsCrouching) {
    return NULL;
}

TArray<USoundBase*> UReadyOrNotFunctionLibrary::GetAllSoundsInWorld() {
    return TArray<USoundBase*>();
}

TArray<FString> UReadyOrNotFunctionLibrary::GetAllSectionNamesFromINIFile(const FString& ConfigFilePath) {
    return TArray<FString>();
}

TArray<ABaseItem*> UReadyOrNotFunctionLibrary::GetAllItemsInMemory() {
    return TArray<ABaseItem*>();
}

TArray<UFMODBus*> UReadyOrNotFunctionLibrary::GetAllFMODBusObjects() {
    return TArray<UFMODBus*>();
}

TArray<UAudioComponent*> UReadyOrNotFunctionLibrary::GetAllAudioComponents() {
    return TArray<UAudioComponent*>();
}

TArray<UFMODEvent*> UReadyOrNotFunctionLibrary::GetAll2DFMODAudioEvents() {
    return TArray<UFMODEvent*>();
}

bool UReadyOrNotFunctionLibrary::FulfillsAllPostProcessRequirements(UObject* Context, APlayerCharacter* OwningCharacter, AActor* DamageCauser, const TArray<TSubclassOf<UPostProcessRequirement>>& InRequirementClasses, const bool bForceSuccess) {
    return false;
}

FText UReadyOrNotFunctionLibrary::FormatPlayerActionText(const FKey& InKey, const TEnumAsByte<EInputEvent>& InInputEvent, const FText& InActionText, const FString& InColorLabel) {
    return FText::GetEmpty();
}

float UReadyOrNotFunctionLibrary::FindNearestFloor_BP(AActor* InActor, const TArray<AActor*>& InActorsToIgnore, const TArray<UPrimitiveComponent*>& InComponentsToIgnore) {
    return 0.0f;
}

TSubclassOf<ABaseItem> UReadyOrNotFunctionLibrary::FindItemClassInItemDataTable(FName RowName) {
    return NULL;
}

bool UReadyOrNotFunctionLibrary::FindConfigKeyFromINIFile(const FString& ConfigFilePath, const FString& Section, const FString& Key) {
    return false;
}

FString UReadyOrNotFunctionLibrary::DoorCheckResultToVoiceline(const EDoorCheckResult DoorBreachType) {
    return TEXT("");
}

FString UReadyOrNotFunctionLibrary::DoorBreachTypeToVoiceline_Negative(const EDoorBreachType DoorBreachType) {
    return TEXT("");
}

FString UReadyOrNotFunctionLibrary::DoorBreachTypeToVoiceline(const EDoorBreachType DoorBreachType) {
    return TEXT("");
}

bool UReadyOrNotFunctionLibrary::DoesWidgetOverlap(UObject* WorldContext, UWidget* ParentWidget, UWidget* WidgetA, UWidget* WidgetB) {
    return false;
}

FString UReadyOrNotFunctionLibrary::DevMenuSettingsConfigDir() {
    return TEXT("");
}

FRonKey UReadyOrNotFunctionLibrary::ConvertUnrealKeyToRonKey(const FKey& InKey) {
    return FRonKey{};
}

FString UReadyOrNotFunctionLibrary::ConvertUnrealKeyNameToRonKeyName(const FKey& InKey) {
    return TEXT("");
}

FSlateBrush UReadyOrNotFunctionLibrary::ConvertKeyToIcon(const FKey& InKey) {
    return FSlateBrush{};
}

FKey UReadyOrNotFunctionLibrary::ConvertIntToFKey(int32 Integer) {
    return FKey{};
}

FVector2D UReadyOrNotFunctionLibrary::CalculateOffscreenPositionFromWorldLocation_Square(UObject* WorldContext, const FVector& WorldLocation, float ViewportOffset, bool& bIsOffscreen, float& Angle, float& ForwardDotProduct, float& RightDotProduct) {
    return FVector2D{};
}

FVector2D UReadyOrNotFunctionLibrary::CalculateOffscreenPositionFromWorldLocation_Ellipse(UObject* WorldContext, const FVector& WorldLocation, float ViewportOffset, bool& bIsOffscreen, float& Angle, float& ForwardDotProduct, float& RightDotProduct) {
    return FVector2D{};
}

FString UReadyOrNotFunctionLibrary::BadAIActionConfigDir() {
    return TEXT("");
}

bool UReadyOrNotFunctionLibrary::AnyTrue(TArray<bool>& BoolArray) {
    return false;
}

bool UReadyOrNotFunctionLibrary::AnyFalse(TArray<bool>& BoolArray) {
    return false;
}

bool UReadyOrNotFunctionLibrary::AllTrue(TArray<bool>& BoolArray) {
    return false;
}

bool UReadyOrNotFunctionLibrary::AllFalse(TArray<bool>& BoolArray) {
    return false;
}

UReadyOrNotFunctionLibrary::UReadyOrNotFunctionLibrary() {
}

