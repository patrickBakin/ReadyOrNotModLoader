#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EEnvQueryRunMode.h"
#include "AISubsystem.h"
#include "EnvQueryInstanceCache.h"
#include "EnvQueryManager.generated.h"

class UObject;
class UEnvQueryContext;
class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;

UCLASS(Blueprintable, Transient, Config=Game)
class AIMODULE_API UEnvQueryManager : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnvQueryInstanceCache> InstanceCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnvQueryContext*> LocalContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTestingTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestQueriesUsingBreadth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryCountWarningThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    double QueryCountWarningInterval;
    
public:
    UEnvQueryManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);
    
};

