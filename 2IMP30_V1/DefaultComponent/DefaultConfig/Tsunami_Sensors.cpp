/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Sensors
//!	Generated Date	: Fri, 5, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Tsunami_Sensors.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SystemContext_Tsunami_Sensors_Tsunami_Sensors_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Tsunami_Sensors
Tsunami_Sensors::Tsunami_Sensors(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Tsunami_Sensors, Tsunami_Sensors(), 0, SystemContext_Tsunami_Sensors_Tsunami_Sensors_SERIALIZE);
    initRelations();
}

Tsunami_Sensors::~Tsunami_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Tsunami_Sensors, true);
    cleanUpRelations();
}

const SMSWTD* Tsunami_Sensors::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Tsunami_Sensors::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsTsunami_Sensors(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Tsunami_Sensors::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Tsunami_Sensors::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Tsunami_Sensors* p_Tsunami_Sensors = itsSMSWTD->getItsTsunami_Sensors();
            if(p_Tsunami_Sensors != NULL)
                {
                    itsSMSWTD->__setItsTsunami_Sensors(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Tsunami_Sensors::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Tsunami_Sensors::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsTsunami_Sensors(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Tsunami_Sensors::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void Tsunami_Sensors::OMCreateInstances(void) {
}

void Tsunami_Sensors::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTsunami_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Tsunami_Sensors, SystemContext, SystemContext, false, OMAnimatedTsunami_Sensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Sensors.cpp
*********************************************************************/
