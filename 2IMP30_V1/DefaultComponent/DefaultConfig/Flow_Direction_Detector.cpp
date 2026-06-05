/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Flow_Direction_Detector
//!	Generated Date	: Wed, 3, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Flow_Direction_Detector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Flow_Direction_Detector.h"
//#[ ignore
#define SystemContext_Flow_Direction_Detector_Flow_Direction_Detector_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Flow_Direction_Detector
Flow_Direction_Detector::Flow_Direction_Detector(void) : Underwater_Sensors() {
    NOTIFY_CONSTRUCTOR(Flow_Direction_Detector, Flow_Direction_Detector(), 0, SystemContext_Flow_Direction_Detector_Flow_Direction_Detector_SERIALIZE);
    initRelations();
}

Flow_Direction_Detector::~Flow_Direction_Detector(void) {
    NOTIFY_DESTRUCTOR(~Flow_Direction_Detector, false);
}

void Flow_Direction_Detector::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Flow_Direction_Detector::OMCreateInstances(void) {
}

void Flow_Direction_Detector::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFlow_Direction_Detector::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUnderwater_Sensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedFlow_Direction_Detector::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUnderwater_Sensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Flow_Direction_Detector, SystemContext, false, Underwater_Sensors, OMAnimatedUnderwater_Sensors, OMAnimatedFlow_Direction_Detector)

OMINIT_SUPERCLASS(Underwater_Sensors, OMAnimatedUnderwater_Sensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Flow_Direction_Detector.cpp
*********************************************************************/
