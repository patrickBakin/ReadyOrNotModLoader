#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Void Interactive");
    this->CompanyDistinguishedName = TEXT("CN=VOID");
    this->CopyrightNotice = TEXT("Copyright Void Interactive, 2022");
    this->Description = TEXT("Ready or Not is a tactical first person shooter which places you in the boots of an elite SWAT team, tasked with diffusing hostile situations in intense, claustrophobic environments. It\x2019s set in a nondescript modern America, where an income disparity between the classes have become unsustainable and the country has been plunged into havoc. Bring order to chaos with up to 8 players in cooperative play, battle enemy squads in a close player-vs-player environment, or command AI in a striking single-player mode.");
    this->Homepage = TEXT("www.voidinteractive.net");
    this->ProjectName = TEXT("Ready Or Not");
    this->ProjectVersion = TEXT("24955");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Ready Or Not"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT("(Development)"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = false;
    this->bAllowClose = true;
    this->bAllowMaximize = false;
    this->bAllowMinimize = true;
}

