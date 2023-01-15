#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PaintContext -FallbackName=PaintContext
#include "BpWidgetLib.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UBpWidgetLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBpWidgetLib();
    UFUNCTION(BlueprintCallable)
    static bool PostBugReport(const FString& Summary, const FString& Description, const FString& Category);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLineWithThickness(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLineWithCenteredOffset(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset, FVector2D Center, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLinesWithThickness(UPARAM(Ref) FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLinesWithCenteredOffset(UPARAM(Ref) FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset, FVector2D Center, float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ChangeStringTableTextKey(const FText Target, const FString& NewKey);
    
};

