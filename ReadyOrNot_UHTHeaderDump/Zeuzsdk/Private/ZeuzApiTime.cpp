#include "ZeuzApiTime.h"

FDateTime UZeuzApiTime::ToDateTime(FZeuzTimestamp T) {
    return FDateTime{};
}

FZeuzTimestamp UZeuzApiTime::Now(bool adjusted) {
    return FZeuzTimestamp{};
}

bool UZeuzApiTime::IsZero(FZeuzTimestamp T) {
    return false;
}

FZeuzTimestamp UZeuzApiTime::GetOffset() {
    return FZeuzTimestamp{};
}

FZeuzTimestamp UZeuzApiTime::FromDateTime(FDateTime T, bool adjusted) {
    return FZeuzTimestamp{};
}

void UZeuzApiTime::AdjustOffset(FZeuzTimestamp ofs) {
}

UZeuzApiTime::UZeuzApiTime() {
}

