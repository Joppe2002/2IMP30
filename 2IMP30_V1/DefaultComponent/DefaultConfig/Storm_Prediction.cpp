/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Storm_Prediction.h"
//#[ ignore
#define Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Storm_Prediction
Storm_Prediction::Storm_Prediction(void) {
    NOTIFY_CONSTRUCTOR(Storm_Prediction, Storm_Prediction(), 0, Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE);
    initRelations();
}

Storm_Prediction::~Storm_Prediction(void) {
    NOTIFY_DESTRUCTOR(~Storm_Prediction, true);
}

void Storm_Prediction::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Storm_Prediction::OMCreateInstances(void) {
}

void Storm_Prediction::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Storm_Prediction, Architecture, Architecture, false, OMAnimatedStorm_Prediction)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/
