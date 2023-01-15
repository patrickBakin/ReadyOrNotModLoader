#include "BpWidgetLib.h"

bool UBpWidgetLib::PostBugReport(const FString& Summary, const FString& Description, const FString& Category) {
    return false;
}

void UBpWidgetLib::DrawLineWithThickness(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset) {
}

void UBpWidgetLib::DrawLineWithCenteredOffset(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset, FVector2D Center, float Scale) {
}

void UBpWidgetLib::DrawLinesWithThickness(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset) {
}

void UBpWidgetLib::DrawLinesWithCenteredOffset(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness, FVector2D Offset, FVector2D Center, float Scale) {
}

FText UBpWidgetLib::ChangeStringTableTextKey(const FText Target, const FString& NewKey) {
    return FText::GetEmpty();
}

UBpWidgetLib::UBpWidgetLib() {
}

