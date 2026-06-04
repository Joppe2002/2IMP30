/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Seabed_Sensors
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Seabed_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Seabed_Sensors.h"
//#[ ignore
#define SystemContext_Seabed_Sensors_Seabed_Sensors_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Seabed_Sensors
Seabed_Sensors::Seabed_Sensors(void) : Tsunami_Sensors() {
    NOTIFY_CONSTRUCTOR(Seabed_Sensors, Seabed_Sensors(), 0, SystemContext_Seabed_Sensors_Seabed_Sensors_SERIALIZE);
    initRelations();
}

Seabed_Sensors::~Seabed_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Seabed_Sensors, false);
}

void Seabed_Sensors::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Seabed_Sensors::OMCreateInstances(void) {
}

void Seabed_Sensors::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSeabed_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedTsunami_Sensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedSeabed_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedTsunami_Sensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Seabed_Sensors, SystemContext, false, Tsunami_Sensors, OMAnimatedTsunami_Sensors, OMAnimatedSeabed_Sensors)

OMINIT_SUPERCLASS(Tsunami_Sensors, OMAnimatedTsunami_Sensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Seabed_Sensors.cpp
*********************************************************************/
