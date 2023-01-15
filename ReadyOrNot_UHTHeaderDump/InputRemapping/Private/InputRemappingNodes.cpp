#include "InputRemappingNodes.h"

void UInputRemappingNodes::RemoveAxisMapping(FAxisMappingStruct MappingData, bool& ReturnValue) {
}

void UInputRemappingNodes::RemoveActionMapping(FActionMappingStruct MappingData, bool& ReturnValue) {
}

void UInputRemappingNodes::RebindAxisMapping(FAxisMappingStruct AxisMapping, FAxisMappingStruct NewData, bool& ReturnValue) {
}

void UInputRemappingNodes::RebindActionMapping(FActionMappingStruct ActionMapping, FActionMappingStruct NewData, bool& ReturnValue) {
}

void UInputRemappingNodes::GetAllAxisMappings(FAxisMappingStruct FilterData, TArray<EAxisMappingFilter> Filters, bool& ReturnValue, TArray<FAxisMappingStruct>& AxisMappings) {
}

void UInputRemappingNodes::GetAllActionMappings(FActionMappingStruct FilterData, TArray<EActionMappingFilter> Filters, bool& ReturnValue, TArray<FActionMappingStruct>& ActionMappings) {
}

void UInputRemappingNodes::CreateNewAxisMapping(FAxisMappingStruct MappingData, bool& ReturnValue) {
}

void UInputRemappingNodes::CreateNewActionMapping(FActionMappingStruct MappingData, bool& ReturnValue) {
}

bool UInputRemappingNodes::AxisMappingNotEqualActionMapping(const FAxisMappingStruct& A, const FAxisMappingStruct& B) {
    return false;
}

bool UInputRemappingNodes::AxisMappingEqualActionMapping(const FAxisMappingStruct& A, const FAxisMappingStruct& B) {
    return false;
}

bool UInputRemappingNodes::ActionMappingNotEqualActionMapping(const FActionMappingStruct& A, const FActionMappingStruct& B) {
    return false;
}

bool UInputRemappingNodes::ActionMappingEqualActionMapping(const FActionMappingStruct& A, const FActionMappingStruct& B) {
    return false;
}

UInputRemappingNodes::UInputRemappingNodes() {
}

