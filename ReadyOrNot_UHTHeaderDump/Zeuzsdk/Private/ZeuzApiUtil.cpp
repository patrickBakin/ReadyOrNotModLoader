#include "ZeuzApiUtil.h"

class UProperty;

void UZeuzApiUtil::TimerWithString(const UZeuzApiUtil::FTimerDynamicDelegateS& Event, float Time, const FString& Value) {
}

bool UZeuzApiUtil::StructToVariant(UProperty* AnyStruct, FZeuzVariant& Value) {
    return false;
}

bool UZeuzApiUtil::StructToByteArrayJSON(UProperty* AnyStruct, FZeuzByteArray& Value) {
    return false;
}

bool UZeuzApiUtil::StructToByteArrayBin(UProperty* AnyStruct, FZeuzByteArray& Value) {
    return false;
}

bool UZeuzApiUtil::StructFromVariant(UProperty*& AnyStruct, const FZeuzVariant& Value) {
    return false;
}

bool UZeuzApiUtil::StructFromByteArrayJSON(UProperty*& AnyStruct, const FZeuzByteArray& Value) {
    return false;
}

bool UZeuzApiUtil::StructFromByteArrayBin(UProperty* AnyStruct, FZeuzByteArray& Value) {
    return false;
}

bool UZeuzApiUtil::StringNotEmpty(const FString& String) {
    return false;
}

bool UZeuzApiUtil::StringIsEmpty(const FString& String) {
    return false;
}

bool UZeuzApiUtil::SaveGameToByteArray(const FString& Filename, FZeuzByteArray& Value) {
    return false;
}

bool UZeuzApiUtil::SaveGameFromByteArray(const FZeuzByteArray& Value, const FString& Filename) {
    return false;
}

bool UZeuzApiUtil::JsonToVariant(const FString& Json, FZeuzVariant& Variant) {
    return false;
}

bool UZeuzApiUtil::JsonFromVariant(const FZeuzVariant& Variant, FString& Json) {
    return false;
}

FString UZeuzApiUtil::GetSaveGamePath(const FString& Name) {
    return TEXT("");
}

UZeuzApiUtil::UZeuzApiUtil() {
}

