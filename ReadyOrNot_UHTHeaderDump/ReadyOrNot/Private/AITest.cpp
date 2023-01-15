#include "AITest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

void AAITest::Investigate() {
}

void AAITest::DestroyTestCharacter() {
}

AAITest::AAITest() {
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComp"));
    this->TestCharacter = NULL;
    this->GiveToNearestXAI = 1;
}

