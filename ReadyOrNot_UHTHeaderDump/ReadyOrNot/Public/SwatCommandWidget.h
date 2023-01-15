#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ETeamType.h"
#include "ESwatCommand.h"
#include "SwatCommand.h"
#include "SwatCommandWidget.generated.h"

class UFMODEvent;
class ABaseGrenade;
class ASWATManager;
class USwatCommandWidget;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API USwatCommandWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSwatCommandIssued, ESwatCommand, SwatCommand, ETeamType, TeamType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPostUpdateSwatCommands, USwatCommandWidget*, Widget, TArray<FSwatCommand>&, SwatCommands);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSubCommandPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwatCommand> ActiveCommandPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwatCommand> PreviousActiveCommandPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> CommandCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType ActiveTeamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType ExecutionTeamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand DefaultCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand DefaultDoorOpenCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand DefaultDoorUnknownCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand DefaultCheckDoorCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand DefaultDoorLockedCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand DefaultDoorUnlockedCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASWATManager* SWATManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult ContextualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LastExecutedCommandContextualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OpenMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OpenSubCommandMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ExecuteCommandEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseGrenade> Flashbang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseGrenade> Stinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseGrenade> CSGas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHoldingQueueCommandKey: 1;
    
public:
    USwatCommandWidget();
private:
    UFUNCTION(BlueprintCallable)
    void RespondToSWATCommand(FSwatCommand Command, ETeamType TeamType, FHitResult CommandContextualData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageViewUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQueuedCommandForTeam(ETeamType TeamType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQueuedCommandForActiveTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubCommands(FSwatCommand Command, TArray<FSwatCommand>& OutSubCommands);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputTwo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputThree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputSix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputSeven();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputNine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputFour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputFive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputEight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetInputBack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoCommand(FSwatCommand Command, bool bFromQueue, ETeamType ActiveTeamOverride, FHitResult ContextualDataOverride, bool bOverrideContextualData);
    
};

