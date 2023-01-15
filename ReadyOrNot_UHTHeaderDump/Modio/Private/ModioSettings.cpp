#include "ModioSettings.h"

UModioSettings::UModioSettings() {
    this->GameId = 907;
    this->ApiKey = TEXT("b4ee7c8b4f3350270789a4a0010d237f");
    this->ENVIRONMENT = EModioEnvironment::Test;
    this->LogLevel = EModioLogLevel::Info;
    this->DefaultPortal = EModioPortal::None;
}

