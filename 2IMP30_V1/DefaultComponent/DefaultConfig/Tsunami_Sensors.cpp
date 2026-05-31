/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Sensors
//!	Generated Date	: Sun, 31, May 2026  
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

#define OMAnim_SystemContext_Tsunami_Sensors_setRaw_vibrations_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_raw_vibrations)

#define OMAnim_SystemContext_Tsunami_Sensors_setRaw_vibrations_int_SERIALIZE_RET_VAL
//#]

//## package SystemContext

//## class Tsunami_Sensors
//#[ ignore
Tsunami_Sensors::p_Tsunami_Sensors_C::p_Tsunami_Sensors_C(void) : int_raw_tectonicPlate_location_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface(), int_raw_pressure_ProxyFlowPropertyInterface(), bool_raw_flowDirection_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_flowDirection_ProxyFlowPropertyInterface(NULL), itsInt_raw_pressure_ProxyFlowPropertyInterface(NULL), itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_ProxyFlowPropertyInterface(NULL) {
}

Tsunami_Sensors::p_Tsunami_Sensors_C::~p_Tsunami_Sensors_C(void) {
    cleanUpRelations();
}

bool_raw_flowDirection_ProxyFlowPropertyInterface* Tsunami_Sensors::p_Tsunami_Sensors_C::getItsBool_raw_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_pressure_ProxyFlowPropertyInterface* Tsunami_Sensors::p_Tsunami_Sensors_C::getItsInt_raw_pressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* Tsunami_Sensors::p_Tsunami_Sensors_C::getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_ProxyFlowPropertyInterface* Tsunami_Sensors::p_Tsunami_Sensors_C::getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

Tsunami_Sensors::p_Tsunami_Sensors_C* Tsunami_Sensors::p_Tsunami_Sensors_C::getOutBound(void) {
    return this;
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setRaw_flowDirection(bool p_raw_flowDirection) {
    
    if (itsBool_raw_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_flowDirection_ProxyFlowPropertyInterface->setRaw_flowDirection(p_raw_flowDirection);
    }
    
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setRaw_pressure(int p_raw_pressure) {
    
    if (itsInt_raw_pressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_pressure_ProxyFlowPropertyInterface->setRaw_pressure(p_raw_pressure);
    }
    
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    
    if (itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface->setRaw_tectonicPlate_location(p_raw_tectonicPlate_location);
    }
    
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setRaw_vibrations(int p_raw_vibrations) {
    
    if (itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_ProxyFlowPropertyInterface->setRaw_vibrations(p_raw_vibrations);
    }
    
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(bool_raw_flowDirection_ProxyFlowPropertyInterface* const p_bool_raw_flowDirection_ProxyFlowPropertyInterface) {
    itsBool_raw_flowDirection_ProxyFlowPropertyInterface = p_bool_raw_flowDirection_ProxyFlowPropertyInterface;
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setItsInt_raw_pressure_ProxyFlowPropertyInterface(int_raw_pressure_ProxyFlowPropertyInterface* const p_int_raw_pressure_ProxyFlowPropertyInterface) {
    itsInt_raw_pressure_ProxyFlowPropertyInterface = p_int_raw_pressure_ProxyFlowPropertyInterface;
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface) {
    itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface = p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface;
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_ProxyFlowPropertyInterface = p_int_raw_vibrations_ProxyFlowPropertyInterface;
}

void Tsunami_Sensors::p_Tsunami_Sensors_C::cleanUpRelations(void) {
    if(itsBool_raw_flowDirection_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_raw_flowDirection_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_pressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_pressure_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Tsunami_Sensors::Tsunami_Sensors(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Tsunami_Sensors, Tsunami_Sensors(), 0, SystemContext_Tsunami_Sensors_Tsunami_Sensors_SERIALIZE);
    initRelations();
}

Tsunami_Sensors::~Tsunami_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Tsunami_Sensors, true);
    cleanUpRelations();
}

//#[ ignore
void Tsunami_Sensors::setRaw_flowDirection(bool p_raw_flowDirection) {
    if (raw_flowDirection != p_raw_flowDirection)  {
        raw_flowDirection = p_raw_flowDirection;
        FLOW_DATA_SEND(raw_flowDirection, p_Tsunami_Sensors, setRaw_flowDirection, x2String);
    }
}

void Tsunami_Sensors::setRaw_pressure(int p_raw_pressure) {
    if (raw_pressure != p_raw_pressure)  {
        raw_pressure = p_raw_pressure;
        FLOW_DATA_SEND(raw_pressure, p_Tsunami_Sensors, setRaw_pressure, x2String);
    }
}

void Tsunami_Sensors::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    if (raw_tectonicPlate_location != p_raw_tectonicPlate_location)  {
        raw_tectonicPlate_location = p_raw_tectonicPlate_location;
        FLOW_DATA_SEND(raw_tectonicPlate_location, p_Tsunami_Sensors, setRaw_tectonicPlate_location, x2String);
    }
}

void Tsunami_Sensors::setRaw_vibrations(int p_raw_vibrations) {
    if (raw_vibrations != p_raw_vibrations)  {
        raw_vibrations = p_raw_vibrations;
        FLOW_DATA_SEND(raw_vibrations, p_Tsunami_Sensors, setRaw_vibrations, x2String);
    }
}
//#]

Tsunami_Sensors::p_Tsunami_Sensors_C* Tsunami_Sensors::getP_Tsunami_Sensors(void) const {
    return (Tsunami_Sensors::p_Tsunami_Sensors_C*) &p_Tsunami_Sensors;
}

Tsunami_Sensors::p_Tsunami_Sensors_C* Tsunami_Sensors::get_p_Tsunami_Sensors(void) const {
    return (Tsunami_Sensors::p_Tsunami_Sensors_C*) &p_Tsunami_Sensors;
}

bool const Tsunami_Sensors::getRaw_flowDirection(void) const {
    return raw_flowDirection;
}

int const Tsunami_Sensors::getRaw_pressure(void) const {
    return raw_pressure;
}

int const Tsunami_Sensors::getRaw_tectonicPlate_location(void) const {
    return raw_tectonicPlate_location;
}

int const Tsunami_Sensors::getRaw_vibrations(void) const {
    return raw_vibrations;
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
void OMAnimatedTsunami_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_tectonicPlate_location", x2String(myReal->raw_tectonicPlate_location));
    aomsAttributes->addAttribute("raw_vibrations", x2String(myReal->raw_vibrations));
    aomsAttributes->addAttribute("raw_pressure", x2String(myReal->raw_pressure));
    aomsAttributes->addAttribute("raw_flowDirection", x2String(myReal->raw_flowDirection));
}

void OMAnimatedTsunami_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Tsunami_Sensors, SystemContext, SystemContext, false, OMAnimatedTsunami_Sensors)

IMPLEMENT_META_OP(OMAnimatedTsunami_Sensors, SystemContext_Tsunami_Sensors_setRaw_vibrations_int, "setRaw_vibrations", FALSE, "setRaw_vibrations(int)", 1)

IMPLEMENT_OP_CALL(SystemContext_Tsunami_Sensors_setRaw_vibrations_int, Tsunami_Sensors, setRaw_vibrations(p_raw_vibrations), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Sensors.cpp
*********************************************************************/
