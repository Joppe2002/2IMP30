/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Sensors
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Storm_Sensors.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SystemContext_Storm_Sensors_Storm_Sensors_SERIALIZE OM_NO_OP

#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_amount_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_raw_precipitation_amount)

#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_amount_int_SERIALIZE_RET_VAL

#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_type_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_raw_precipitation_type)

#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_type_int_SERIALIZE_RET_VAL

#define OMAnim_SystemContext_Storm_Sensors_setRaw_wind_direction_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_raw_wind_direction)

#define OMAnim_SystemContext_Storm_Sensors_setRaw_wind_direction_bool_SERIALIZE_RET_VAL

#define OMAnim_SystemContext_Storm_Sensors_setRaw_wind_speed_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_raw_wind_speed)

#define OMAnim_SystemContext_Storm_Sensors_setRaw_wind_speed_int_SERIALIZE_RET_VAL
//#]

//## package SystemContext

//## class Storm_Sensors
//#[ ignore
Storm_Sensors::p_Storm_Sensors_C::p_Storm_Sensors_C(void) : int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_type_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL) {
}

Storm_Sensors::p_Storm_Sensors_C::~p_Storm_Sensors_C(void) {
    cleanUpRelations();
}

bool_raw_wind_direction_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_type_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

Storm_Sensors::p_Storm_Sensors_C* Storm_Sensors::p_Storm_Sensors_C::getOutBound(void) {
    return this;
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_precipitation_type(int p_raw_precipitation_type) {
    
    if (itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_wind_direction(bool p_raw_wind_direction) {
    
    if (itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsBool_raw_wind_direction_ProxyFlowPropertyInterface = p_bool_raw_wind_direction_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = p_int_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::cleanUpRelations(void) {
    if(itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_raw_wind_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_wind_speed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Storm_Sensors::Storm_Sensors(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Storm_Sensors, Storm_Sensors(), 0, SystemContext_Storm_Sensors_Storm_Sensors_SERIALIZE);
    initRelations();
}

Storm_Sensors::~Storm_Sensors(void) {
    NOTIFY_DESTRUCTOR(~Storm_Sensors, true);
    cleanUpRelations();
}

//#[ ignore
void Storm_Sensors::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    if (raw_precipitation_amount != p_raw_precipitation_amount)  {
        raw_precipitation_amount = p_raw_precipitation_amount;
        FLOW_DATA_SEND(raw_precipitation_amount, p_Storm_Sensors, setRaw_precipitation_amount, x2String);
    }
}

void Storm_Sensors::setRaw_precipitation_type(int p_raw_precipitation_type) {
    if (raw_precipitation_type != p_raw_precipitation_type)  {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_SEND(raw_precipitation_type, p_Storm_Sensors, setRaw_precipitation_type, x2String);
    }
}

void Storm_Sensors::setRaw_wind_direction(bool p_raw_wind_direction) {
    if (raw_wind_direction != p_raw_wind_direction)  {
        raw_wind_direction = p_raw_wind_direction;
        FLOW_DATA_SEND(raw_wind_direction, p_Storm_Sensors, setRaw_wind_direction, x2String);
    }
}

void Storm_Sensors::setRaw_wind_speed(int p_raw_wind_speed) {
    if (raw_wind_speed != p_raw_wind_speed)  {
        raw_wind_speed = p_raw_wind_speed;
        FLOW_DATA_SEND(raw_wind_speed, p_Storm_Sensors, setRaw_wind_speed, x2String);
    }
}
//#]

Storm_Sensors::p_Storm_Sensors_C* Storm_Sensors::getP_Storm_Sensors(void) const {
    return (Storm_Sensors::p_Storm_Sensors_C*) &p_Storm_Sensors;
}

Storm_Sensors::p_Storm_Sensors_C* Storm_Sensors::get_p_Storm_Sensors(void) const {
    return (Storm_Sensors::p_Storm_Sensors_C*) &p_Storm_Sensors;
}

const int Storm_Sensors::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

const int Storm_Sensors::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

const bool Storm_Sensors::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

const int Storm_Sensors::getRaw_wind_speed(void) const {
    return raw_wind_speed;
}

const SMSWTD* Storm_Sensors::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Storm_Sensors::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsStorm_Sensors(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Storm_Sensors::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Storm_Sensors::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Storm_Sensors* p_Storm_Sensors = itsSMSWTD->getItsStorm_Sensors();
            if(p_Storm_Sensors != NULL)
                {
                    itsSMSWTD->__setItsStorm_Sensors(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Storm_Sensors::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Storm_Sensors::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsStorm_Sensors(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Storm_Sensors::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void Storm_Sensors::OMCreateInstances(void) {
}

void Storm_Sensors::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStorm_Sensors::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String(myReal->raw_precipitation_type));
}

void OMAnimatedStorm_Sensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Storm_Sensors, SystemContext, SystemContext, false, OMAnimatedStorm_Sensors)

IMPLEMENT_META_OP(OMAnimatedStorm_Sensors, SystemContext_Storm_Sensors_setRaw_precipitation_amount_int, "setRaw_precipitation_amount", FALSE, "setRaw_precipitation_amount(int)", 1)

IMPLEMENT_OP_CALL(SystemContext_Storm_Sensors_setRaw_precipitation_amount_int, Storm_Sensors, setRaw_precipitation_amount(p_raw_precipitation_amount), NO_OP())

IMPLEMENT_META_OP(OMAnimatedStorm_Sensors, SystemContext_Storm_Sensors_setRaw_precipitation_type_int, "setRaw_precipitation_type", FALSE, "setRaw_precipitation_type(int)", 1)

IMPLEMENT_OP_CALL(SystemContext_Storm_Sensors_setRaw_precipitation_type_int, Storm_Sensors, setRaw_precipitation_type(p_raw_precipitation_type), NO_OP())

IMPLEMENT_META_OP(OMAnimatedStorm_Sensors, SystemContext_Storm_Sensors_setRaw_wind_direction_bool, "setRaw_wind_direction", FALSE, "setRaw_wind_direction(bool)", 1)

IMPLEMENT_OP_CALL(SystemContext_Storm_Sensors_setRaw_wind_direction_bool, Storm_Sensors, setRaw_wind_direction(p_raw_wind_direction), NO_OP())

IMPLEMENT_META_OP(OMAnimatedStorm_Sensors, SystemContext_Storm_Sensors_setRaw_wind_speed_int, "setRaw_wind_speed", FALSE, "setRaw_wind_speed(int)", 1)

IMPLEMENT_OP_CALL(SystemContext_Storm_Sensors_setRaw_wind_speed_int, Storm_Sensors, setRaw_wind_speed(p_raw_wind_speed), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.cpp
*********************************************************************/
