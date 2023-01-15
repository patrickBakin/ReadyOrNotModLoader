#include "ZeuzApiSimpleAuth.h"

FString UZeuzApiSimpleAuth::StringHash(const FString& Val) {
    return TEXT("");
}

void UZeuzApiSimpleAuth::SimpleProfileUsercreateBP(const FZeuzSimpleProfileUserCreateIn& In, const UZeuzApiSimpleAuth::FDelegateSimpleProfileUsercreateBP& Callback, const UZeuzApiSimpleAuth::FDelegateSimpleProfileUsercreateBPS& OnSuccess, const UZeuzApiSimpleAuth::FDelegateSimpleProfileUsercreateBPF& OnFailure, const FZeuzContext& Ctx) {
}

FString UZeuzApiSimpleAuth::CalcPWHash(const FString& Login, const FString& Password) {
    return TEXT("");
}

void UZeuzApiSimpleAuth::AuthLoginBP(const FZeuzSimpleAuthLoginIn& In, const UZeuzApiSimpleAuth::FDelegateAuthLoginBP& Callback, const UZeuzApiSimpleAuth::FDelegateAuthLoginBPS& OnSuccess, const UZeuzApiSimpleAuth::FDelegateAuthLoginBPF& OnFailure, const FZeuzContext& Ctx, bool SaveDefaultContext) {
}

void UZeuzApiSimpleAuth::AuthCheckSessionBP(const UZeuzApiSimpleAuth::FDelegateAuthCheckSessionBP& Callback, const UZeuzApiSimpleAuth::FDelegateAuthCheckSessionBPS& OnSuccess, const UZeuzApiSimpleAuth::FDelegateAuthCheckSessionBPF& OnFailure, const FZeuzContext Ctx) {
}

UZeuzApiSimpleAuth::UZeuzApiSimpleAuth() {
}

