/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pressure_Sensor
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Pressure_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Pressure_Sensor.h"
//#[ ignore
#define SystemContext_Pressure_Sensor_Pressure_Sensor_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Pressure_Sensor
Pressure_Sensor::Pressure_Sensor(void) : Underwater_Sensors() {
    NOTIFY_CONSTRUCTOR(Pressure_Sensor, Pressure_Sensor(), 0, SystemContext_Pressure_Sensor_Pressure_Sensor_SERIALIZE);
    initRelations();
}

Pressure_Sensor::~Pressure_Sensor(void) {
    NOTIFY_DESTRUCTOR(~Pressure_Sensor, false);
}

void Pressure_Sensor::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Pressure_Sensor::OMCreateInstances(void) {
}

void Pressure_Sensor::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPressure_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUnderwater_Sensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedPressure_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUnderwater_Sensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Pressure_Sensor, SystemContext, false, Underwater_Sensors, OMAnimatedUnderwater_Sensors, OMAnimatedPressure_Sensor)

OMINIT_SUPERCLASS(Underwater_Sensors, OMAnimatedUnderwater_Sensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Pressure_Sensor.cpp
*********************************************************************/
