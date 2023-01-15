#pragma once
#include "CoreMinimal.h"
#include "FieldObjectCommands.generated.h"

class UFieldSystemMetaData;
class UFieldNodeBase;

USTRUCT(BlueprintType)
struct FIELDSYSTEMENGINE_API FFieldObjectCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFieldNodeBase*> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFieldSystemMetaData*> MetaDatas;
    
    FFieldObjectCommands();
};

