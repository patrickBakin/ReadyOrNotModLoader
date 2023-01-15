#pragma once
#include "CoreMinimal.h"
#include "FBPWorkshopFileType.generated.h"

UENUM(BlueprintType)
enum class FBPWorkshopFileType : uint8 {
    k_EWorkshopFileTypeCommunity,
    k_EWorkshopFileTypeMicrotransaction,
    k_EWorkshopFileTypeCollection,
    k_EWorkshopFileTypeArt,
    k_EWorkshopFileTypeVideo,
    k_EWorkshopFileTypeScreenshot,
    k_EWorkshopFileTypeGame,
    k_EWorkshopFileTypeSoftware,
    k_EWorkshopFileTypeConcept,
    k_EWorkshopFileTypeWebGuide,
    k_EWorkshopFileTypeIntegratedGuide,
    k_EWorkshopFileTypeMerch,
    k_EWorkshopFileTypeControllerBinding,
    k_EWorkshopFileTypeSteamworksAccessInvite,
    k_EWorkshopFileTypeSteamVideo,
    k_EWorkshopFileTypeMax,
    k_MAX UMETA(Hidden),
};

