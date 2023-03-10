#pragma once
#include "CoreMinimal.h"
#include "TemplateSectionPropertyScale.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "TemplateSequenceSection.generated.h"

UCLASS(Blueprintable)
class TEMPLATESEQUENCE_API UTemplateSequenceSection : public UMovieSceneSubSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTemplateSectionPropertyScale> PropertyScales;
    
    UTemplateSequenceSection();
    
    // Fix for true pure virtual functions not being implemented
};

