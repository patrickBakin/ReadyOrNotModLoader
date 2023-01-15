#include "BpVideoSettingsLib.h"

bool UBpVideoSettingsLib::SupportsRayTracing() {
    return false;
}

bool UBpVideoSettingsLib::SetWorldDecalEnabled(bool bEnabled, float FadeDistance, float Density) {
    return false;
}

bool UBpVideoSettingsLib::SetVSyncEnabled(bool bEnabled) {
    return false;
}

bool UBpVideoSettingsLib::SetVideoQualitySettings(const int32 AntiAliasing, const int32 Effects, const int32 PostProcess, const float ResolutionScaling, const int32 Shadow, const int32 Texture, const int32 ViewDistance) {
    return false;
}

bool UBpVideoSettingsLib::SetScreenResolution(const int32 Width, const int32 Height, TEnumAsByte<EWindowMode::Type> NewWindowMode) {
    return false;
}

bool UBpVideoSettingsLib::SetReflexLatencyOptions(bool bGameToRenderLatencyEnabled, bool bGameLatencyEnabled, bool bRenderLatencyEnabled) {
    return false;
}

bool UBpVideoSettingsLib::SetReflexEnabled(uint8 ReflexMode, bool bFlashIndicatorEnabled) {
    return false;
}

bool UBpVideoSettingsLib::SetRaytracingSettings(bool bRTXEnabled, bool bRTXReflectionsEnabled, bool bRTXShadowsEnabled, bool bRTXAmbientOcclusionEnabled, bool bRTXGlobalIllumination, bool bRTXTranslucency) {
    return false;
}

bool UBpVideoSettingsLib::SetOverallVideoQuality(int32 Quality) {
    return false;
}

bool UBpVideoSettingsLib::SetMotionBlurStrength(float Strength) {
    return false;
}

bool UBpVideoSettingsLib::SetMotionBlurEnabled(bool bEnabled) {
    return false;
}

bool UBpVideoSettingsLib::SetGraphicsPresetIndex(const int32 GraphicsPresetIndex) {
    return false;
}

bool UBpVideoSettingsLib::SetFSRQuality(int32 Quality) {
    return false;
}

bool UBpVideoSettingsLib::SetFrameRateLimit(int32 FrameRateLimit, bool bEnabled) {
    return false;
}

bool UBpVideoSettingsLib::SetDlssQuality(int32 Quality) {
    return false;
}

bool UBpVideoSettingsLib::SetDepthofFieldSetting(bool bDoFEnabled) {
    return false;
}

bool UBpVideoSettingsLib::SaveVideoModeAndQuality() {
    return false;
}

bool UBpVideoSettingsLib::IsNvidiaReflexEnabled() {
    return false;
}

bool UBpVideoSettingsLib::GetWorldDecalsEnabled(bool& bEnabled, float& FadeDistance, float& Density) {
    return false;
}

bool UBpVideoSettingsLib::GetVSyncEnabled(bool& bEnabled) {
    return false;
}

bool UBpVideoSettingsLib::GetVideoQualitySettingsAsString(FText& OverallSetting, FText& AntiAliasing, FText& Effects, FText& PostProcess, FText& Shadow, FText& Texture, FText& ViewDistance) {
    return false;
}

bool UBpVideoSettingsLib::GetVideoQualitySettings(int32& AntiAliasing, int32& Effects, int32& PostProcess, float& ResolutionScaling, int32& Shadow, int32& Texture, int32& ViewDistance) {
    return false;
}

bool UBpVideoSettingsLib::GetSupportedScreenResolutions(TArray<FString>& Resolutions) {
    return false;
}

bool UBpVideoSettingsLib::GetReflexLatencyOptions(bool& bGameToRenderLatencyEnabled, bool& bGameLatencyEnabled, bool& bRenderLatencyEnabled) {
    return false;
}

void UBpVideoSettingsLib::GetReflexLatency(bool& bGameToRenderLatencyEnabled, float& GametoRenderLatency, bool& bGameLatencyEnabled, float& GameLatencyInMS, bool& bRenderLatencyEnabled, float& RenderLatencyInMS) {
}

bool UBpVideoSettingsLib::GetReflexEnabled(uint8& ReflexMode, bool& bFlashIndicatorEnabled) {
    return false;
}

bool UBpVideoSettingsLib::GetRaytracingSettings(bool& bRTXEnabled, bool& bRTXReflectionsEnabled, bool& bRTXShadowsEnabled, bool& bRTXAmbientOcclusionEnabled, bool& bRTXGlobalIllumination, bool& bRTXTranslucency) {
    return false;
}

bool UBpVideoSettingsLib::GetOverallVideoQuality(int32& Quality) {
    return false;
}

bool UBpVideoSettingsLib::GetMotionBlurStrength(float& Strength) {
    return false;
}

bool UBpVideoSettingsLib::GetMotionBlurEnabled(bool& bEnabled) {
    return false;
}

int32 UBpVideoSettingsLib::GetGraphicsPresetIndex() {
    return 0;
}

bool UBpVideoSettingsLib::GetFSRQuality(int32& Quality) {
    return false;
}

bool UBpVideoSettingsLib::GetFrameRateLimit(int32& FrameRateLimit, bool& bEnabled) {
    return false;
}

bool UBpVideoSettingsLib::GetDlssQuality(int32& Quality) {
    return false;
}

bool UBpVideoSettingsLib::GetDepthOfFieldSetting(bool& bDoFEnabled) {
    return false;
}

FString UBpVideoSettingsLib::GetCurrentScreenResolution() {
    return TEXT("");
}

TEnumAsByte<EWindowMode::Type> UBpVideoSettingsLib::GetCurrentScreenMode() {
    return EWindowMode::Fullscreen;
}

FText UBpVideoSettingsLib::GenerateQualityString(int32 Quality) {
    return FText::GetEmpty();
}

FText UBpVideoSettingsLib::GenerateFSRQualityString(int32 Quality) {
    return FText::GetEmpty();
}

FText UBpVideoSettingsLib::GenerateDlssQualityString(int32 Quality) {
    return FText::GetEmpty();
}

void UBpVideoSettingsLib::ForceReloadSettings() {
}

bool UBpVideoSettingsLib::ChangeScreenResolution(const int32 Width, const int32 Height, TEnumAsByte<EWindowMode::Type> NewWindowMode) {
    return false;
}

UBpVideoSettingsLib::UBpVideoSettingsLib() {
}

