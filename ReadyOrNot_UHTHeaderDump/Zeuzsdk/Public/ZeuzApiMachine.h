#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzMachineResourceInfo.h"
#include "ZeuzMachineInfo.h"
#include "ZeuzMachineGetOut.h"
#include "ZeuzMachineTagsSetIn.h"
#include "ZeuzMachineResourceDataIn.h"
#include "ZeuzMachineResourceAllocateIn.h"
#include "ZeuzContext.h"
#include "ZeuzMachineResourceUpdateIn.h"
#include "ZeuzMachineResourceDeprovisionIn.h"
#include "ZeuzMachineResourceGetIn.h"
#include "ZeuzMachineGetIn.h"
#include "ZeuzMachineResourceDeallocateIn.h"
#include "ZeuzMachineResourcesCountIn.h"
#include "ZeuzApiMachine.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiMachine : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineUpdateresourceBPS, const FZeuzMachineResourceInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineUpdateresourceBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineUpdateresourceBP, const FZeuzMachineResourceInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineSettagsBPS, const TArray<FZeuzMachineTagsSetIn>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineSettagsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineSettagsBP, const TArray<FZeuzMachineTagsSetIn>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateMachineResourcedeprovisionBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineResourcedeprovisionBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineResourcedeprovisionBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGettagsBPS, const TArray<FZeuzMachineTagsSetIn>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGettagsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineGettagsBP, const TArray<FZeuzMachineTagsSetIn>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGetresourcesBPS, const TArray<FZeuzMachineResourceInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGetresourcesBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineGetresourcesBP, const TArray<FZeuzMachineResourceInfo>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGetinfoBPS, const TArray<FZeuzMachineInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGetinfoBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineGetinfoBP, const TArray<FZeuzMachineInfo>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGetBPS, const FZeuzMachineGetOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineGetBP, const FZeuzMachineGetOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineDeallocateBPS, const TArray<FString>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineDeallocateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineDeallocateBP, const TArray<FString>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineCountresourcesBPS, int32, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineCountresourcesBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineCountresourcesBP, int32, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineAllocateBPS, const TArray<FZeuzMachineInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineAllocateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineAllocateBP, const TArray<FZeuzMachineInfo>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineAddresourceBPS, const FZeuzMachineResourceInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMachineAddresourceBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMachineAddresourceBP, const FZeuzMachineResourceInfo&, Result, const FString&, Error);
    
    UZeuzApiMachine();
    UFUNCTION(BlueprintCallable)
    static void MachineUpdateresourceBP(const FZeuzMachineResourceUpdateIn& In, const UZeuzApiMachine::FDelegateMachineUpdateresourceBP& Callback, const UZeuzApiMachine::FDelegateMachineUpdateresourceBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineUpdateresourceBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineSettagsBP(const TArray<FZeuzMachineTagsSetIn>& In, const UZeuzApiMachine::FDelegateMachineSettagsBP& Callback, const UZeuzApiMachine::FDelegateMachineSettagsBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineSettagsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineResourcedeprovisionBP(const FZeuzMachineResourceDeprovisionIn& In, const UZeuzApiMachine::FDelegateMachineResourcedeprovisionBP& Callback, const UZeuzApiMachine::FDelegateMachineResourcedeprovisionBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineResourcedeprovisionBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineGettagsBP(const TArray<FString>& In, const UZeuzApiMachine::FDelegateMachineGettagsBP& Callback, const UZeuzApiMachine::FDelegateMachineGettagsBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineGettagsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineGetresourcesBP(const FZeuzMachineResourceGetIn& In, const UZeuzApiMachine::FDelegateMachineGetresourcesBP& Callback, const UZeuzApiMachine::FDelegateMachineGetresourcesBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineGetresourcesBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineGetinfoBP(const TArray<FString>& In, const UZeuzApiMachine::FDelegateMachineGetinfoBP& Callback, const UZeuzApiMachine::FDelegateMachineGetinfoBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineGetinfoBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineGetBP(const FZeuzMachineGetIn& In, const UZeuzApiMachine::FDelegateMachineGetBP& Callback, const UZeuzApiMachine::FDelegateMachineGetBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineDeallocateBP(const FZeuzMachineResourceDeallocateIn& In, const UZeuzApiMachine::FDelegateMachineDeallocateBP& Callback, const UZeuzApiMachine::FDelegateMachineDeallocateBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineDeallocateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineCountresourcesBP(const FZeuzMachineResourcesCountIn& In, const UZeuzApiMachine::FDelegateMachineCountresourcesBP& Callback, const UZeuzApiMachine::FDelegateMachineCountresourcesBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineCountresourcesBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineAllocateBP(const FZeuzMachineResourceAllocateIn& In, const UZeuzApiMachine::FDelegateMachineAllocateBP& Callback, const UZeuzApiMachine::FDelegateMachineAllocateBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineAllocateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MachineAddresourceBP(const FZeuzMachineResourceDataIn& In, const UZeuzApiMachine::FDelegateMachineAddresourceBP& Callback, const UZeuzApiMachine::FDelegateMachineAddresourceBPS& OnSuccess, const UZeuzApiMachine::FDelegateMachineAddresourceBPF& OnFailure, const FZeuzContext& Ctx);
    
};

