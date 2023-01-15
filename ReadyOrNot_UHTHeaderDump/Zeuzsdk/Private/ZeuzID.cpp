#include "ZeuzID.h"

bool UZeuzID::IsValid(const FString& ID) {
    return false;
}

bool UZeuzID::IsType(const FString& ID, ZeuzIDType typ) {
    return false;
}

ZeuzIDType UZeuzID::GetType(const FString& ID) {
    return ZeuzIDType::Invalid;
}

UZeuzID::UZeuzID() {
}

