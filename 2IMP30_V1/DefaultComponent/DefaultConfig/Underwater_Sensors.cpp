/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Underwater_Sensors
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Underwater_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Underwater_Sensors.h"
//#[ ignore
#define SystemContext_Underwater_Sensors_Underwater_Sensors_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Underwater_Sensors
Underwater_Sensors::Underwater_Sensors(void) : Tsunami_Sensors() {
    NOTIFY_CONSTRUCTOR(Underwater_Sensors, Underwater_Sensors(), 0, SystemContext_Underwater_Sensors_Underwater_Sensors_SERIALIZE);
    initRelations();
}

Underwater_Sensors::~Underwater_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Underwater_Sensors, false);
}

void Underwater_Sensors::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Underwater_Sensors::OMCreateInstances(void) {
}

void Underwater_Sensors::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderwater_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTsunami_Sensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedUnderwater_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedTsunami_Sensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Underwater_Sensors, SystemContext, false, Tsunami_Sensors, OMAnimatedTsunami_Sensors, OMAnimatedUnderwater_Sensors)

OMINIT_SUPERCLASS(Tsunami_Sensors, OMAnimatedTsunami_Sensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Underwater_Sensors.cpp
*********************************************************************/
