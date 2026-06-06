/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Aircraft_Sensors
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Aircraft_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Aircraft_Sensors.h"
//#[ ignore
#define SystemContext_Aircraft_Sensors_Aircraft_Sensors_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Aircraft_Sensors
Aircraft_Sensors::Aircraft_Sensors(void) : Storm_Sensors() {
    NOTIFY_CONSTRUCTOR(Aircraft_Sensors, Aircraft_Sensors(), 0, SystemContext_Aircraft_Sensors_Aircraft_Sensors_SERIALIZE);
    initRelations();
}

Aircraft_Sensors::~Aircraft_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Aircraft_Sensors, false);
}

void Aircraft_Sensors::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Aircraft_Sensors::OMCreateInstances(void) {
}

void Aircraft_Sensors::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAircraft_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedStorm_Sensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedAircraft_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedStorm_Sensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Aircraft_Sensors, SystemContext, false, Storm_Sensors, OMAnimatedStorm_Sensors, OMAnimatedAircraft_Sensors)

OMINIT_SUPERCLASS(Storm_Sensors, OMAnimatedStorm_Sensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Aircraft_Sensors.cpp
*********************************************************************/
