#include "DebugLogLibrarySettings.h"

UDebugLogLibrarySettings::UDebugLogLibrarySettings() {
    this->bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = false;
    this->bCrashGameInShippingBuildConfiguration = false;
    this->bSaveLogMessagesToCustomLogFile = false;
    this->bEnableSpecifiers = false;
    this->DisplaySpecifiersIn = LO_Console;
    this->bLogContext = false;
    this->DisplayContextIn = LO_Console;
}

