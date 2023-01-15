#pragma once
#include "CoreMinimal.h"
#include "MovieSceneGeometryCollectionSectionTemplateParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneGeometryCollectionSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;
    
    GEOMETRYCOLLECTIONTRACKS_API FMovieSceneGeometryCollectionSectionTemplate();
};

