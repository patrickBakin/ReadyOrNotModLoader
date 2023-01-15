#include "AnimNode_LazySpringBone.h"

FAnimNode_LazySpringBone::FAnimNode_LazySpringBone() {
    this->DrivingForceStrength = 0.00f;
    this->Stiffness = 0.00f;
    this->Mass = 0.00f;
    this->Damping = 0.00f;
    this->Gravity = 0.00f;
    this->FlipYawWithRoll = false;
    this->bLimitDisplacement = false;
    this->MaxDisplacement = 0.00f;
    this->SpringStiffness = 0.00f;
    this->SpringDamping = 0.00f;
    this->ErrorResetThresh = 0.00f;
    this->bNoZSpring = false;
    this->bTranslateX = false;
    this->bTranslateY = false;
    this->bTranslateZ = false;
    this->bRotateX = false;
    this->bRotateY = false;
    this->bRotateZ = false;
}

