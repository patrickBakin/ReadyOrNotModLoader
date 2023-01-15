#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWindowMode -FallbackName=EWindowMode
#include "BpVideoSettingsLib.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UBpVideoSettingsLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBpVideoSettingsLib();
    UFUNCTION(BlueprintCallable)
    static bool SupportsRayTracing();
    
    UFUNCTION(BlueprintCallable)
    static bool SetWorldDecalEnabled(bool bEnabled, float FadeDistance, float Density);
    
    UFUNCTION(BlueprintCallable)
    static bool SetVSyncEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetVideoQualitySettings(const int32 AntiAliasing, const int32 Effects, const int32 PostProcess, const float ResolutionScaling, const int32 Shadow, const int32 Texture, const int32 ViewDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetScreenResolution(const int32 Width, const int32 Height, TEnumAsByte<EWindowMode::Type> NewWindowMode);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReflexLatencyOptions(bool bGameToRenderLatencyEnabled, bool bGameLatencyEnabled, bool bRenderLatencyEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReflexEnabled(uint8 ReflexMode, bool bFlashIndicatorEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRaytracingSettings(bool bRTXEnabled, bool bRTXReflectionsEnabled, bool bRTXShadowsEnabled, bool bRTXAmbientOcclusionEnabled, bool bRTXGlobalIllumination, bool bRTXTranslucency);
    
    UFUNCTION(BlueprintCallable)
    static bool SetOverallVideoQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMotionBlurStrength(float Strength);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMotionBlurEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGraphicsPresetIndex(const int32 GraphicsPresetIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFSRQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFrameRateLimit(int32 FrameRateLimit, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDlssQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDepthofFieldSetting(bool bDoFEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveVideoModeAndQuality();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNvidiaReflexEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWorldDecalsEnabled(bool& bEnabled, float& FadeDistance, float& Density);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVSyncEnabled(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVideoQualitySettingsAsString(FText& OverallSetting, FText& AntiAliasing, FText& Effects, FText& PostProcess, FText& Shadow, FText& Texture, FText& ViewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVideoQualitySettings(int32& AntiAliasing, int32& Effects, int32& PostProcess, float& ResolutionScaling, int32& Shadow, int32& Texture, int32& ViewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSupportedScreenResolutions(TArray<FString>& Resolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetReflexLatencyOptions(bool& bGameToRenderLatencyEnabled, bool& bGameLatencyEnabled, bool& bRenderLatencyEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetReflexLatency(bool& bGameToRenderLatencyEnabled, float& GametoRenderLatency, bool& bGameLatencyEnabled, float& GameLatencyInMS, bool& bRenderLatencyEnabled, float& RenderLatencyInMS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetReflexEnabled(uint8& ReflexMode, bool& bFlashIndicatorEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRaytracingSettings(bool& bRTXEnabled, bool& bRTXReflectionsEnabled, bool& bRTXShadowsEnabled, bool& bRTXAmbientOcclusionEnabled, bool& bRTXGlobalIllumination, bool& bRTXTranslucency);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverallVideoQuality(int32& Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMotionBlurStrength(float& Strength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMotionBlurEnabled(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGraphicsPresetIndex();
    
    UFUNCTION(BlueprintCallable)
    static bool GetFSRQuality(int32& Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFrameRateLimit(int32& FrameRateLimit, bool& bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDlssQuality(int32& Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDepthOfFieldSetting(bool& bDoFEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentScreenResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EWindowMode::Type> GetCurrentScreenMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GenerateQualityString(int32 Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GenerateFSRQualityString(int32 Quality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GenerateDlssQualityString(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    static void ForceReloadSettings();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeScreenResolution(const int32 Width, const int32 Height, TEnumAsByte<EWindowMode::Type> NewWindowMode);
    
};

