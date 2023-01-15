#include "InteractionsData.h"

class AActor;
class ABaseItem;
class APairedInteractionDriver;

APairedInteractionDriver* UInteractionsData::PlayPairedInteraction(AActor* Driver, AActor* Slave, ABaseItem* OptionalItem) {
    return NULL;
}

APairedInteractionDriver* UInteractionsData::IsPairedInteractionPlayingOn(AActor* Target) {
    return NULL;
}

UInteractionsData::UInteractionsData() {
    this->InteractionName = TEXT("Default");
    this->bLooping = false;
    this->bAllowDeadDriverInteraction = false;
    this->bAllowDeadSlaveInteraction = false;
    this->bAllowAimOffsetDuringInteraction = false;
    this->bApplyRelativeOffsetBeforePlaying = false;
    this->bUseSyncBone = false;
    this->bDoNotApplyRelativeOffset = false;
    this->CancelDurationLength = 0.00f;
    this->bHolsterItemBeforePlaying = false;
    this->bInstantHolster = false;
    this->bEquipLastItemAfterPlaying = true;
    this->bUpdateSlaveTransform = true;
    this->bUpdateTransformsInstantly = false;
    this->bIndependentFinishes = false;
    this->bUseDriverFPMotion = false;
    this->DriverMontage = NULL;
    this->DriverMontage_FP = NULL;
    this->TriggerTolerance = 0.00f;
    this->DriverBlendDuration = 0.00f;
    this->bUseSlaveFPMotion = false;
    this->SlaveMontage = NULL;
    this->SlaveMontage_FP = NULL;
    this->bMatchDriverYaw = false;
    this->MatchedYawOffset = 0.00f;
    this->bHasSharedItemAnim = false;
    this->SharedItemMontage = NULL;
}

