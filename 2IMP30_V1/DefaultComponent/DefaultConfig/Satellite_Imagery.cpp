/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Satellite_Imagery
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Satellite_Imagery.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Satellite_Imagery.h"
//#[ ignore
#define SystemContext_Satellite_Imagery_Satellite_Imagery_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Satellite_Imagery
Satellite_Imagery::Satellite_Imagery(void) : Storm_Sensors() {
    NOTIFY_CONSTRUCTOR(Satellite_Imagery, Satellite_Imagery(), 0, SystemContext_Satellite_Imagery_Satellite_Imagery_SERIALIZE);
    initRelations();
}

Satellite_Imagery::~Satellite_Imagery(void) {
    NOTIFY_DESTRUCTOR(~Satellite_Imagery, false);
}

void Satellite_Imagery::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Satellite_Imagery::OMCreateInstances(void) {
}

void Satellite_Imagery::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatellite_Imagery::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedStorm_Sensors::serializeAttributes(aomsAttributes);
}

void OMAnimatedSatellite_Imagery::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedStorm_Sensors::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Satellite_Imagery, SystemContext, false, Storm_Sensors, OMAnimatedStorm_Sensors, OMAnimatedSatellite_Imagery)

OMINIT_SUPERCLASS(Storm_Sensors, OMAnimatedStorm_Sensors)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Satellite_Imagery.cpp
*********************************************************************/
