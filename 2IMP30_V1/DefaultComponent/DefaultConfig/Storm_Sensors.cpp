/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Sensors
//!	Generated Date	: Mon, 1, Jun 2026  
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
//#]

//## package SystemContext

//## class Storm_Sensors
//#[ ignore
Storm_Sensors::p_Storm_Sensors_C::p_Storm_Sensors_C(void) : int_raw_precipitation_amount_ProxyFlowPropertyInterface(), precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_storm_altitude_ProxyFlowPropertyInterface(), int_raw_storm_diameter_ProxyFlowPropertyInterface(), int_raw_storm_latitude_ProxyFlowPropertyInterface(), int_raw_storm_longitude_ProxyFlowPropertyInterface(), int_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_wind_speed_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_altitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_diameter_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_latitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_longitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL), itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(NULL) {
}

Storm_Sensors::p_Storm_Sensors_C::~p_Storm_Sensors_C(void) {
    cleanUpRelations();
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_altitude_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_diameter_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_latitude_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_longitude_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_direction_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* Storm_Sensors::p_Storm_Sensors_C::getItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
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

void Storm_Sensors::p_Storm_Sensors_C::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    
    if (itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_storm_altitude(int p_raw_storm_altitude) {
    
    if (itsInt_raw_storm_altitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_altitude_ProxyFlowPropertyInterface->setRaw_storm_altitude(p_raw_storm_altitude);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_storm_diameter(int p_raw_storm_diameter) {
    
    if (itsInt_raw_storm_diameter_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_diameter_ProxyFlowPropertyInterface->setRaw_storm_diameter(p_raw_storm_diameter);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_storm_latitude(int p_raw_storm_latitude) {
    
    if (itsInt_raw_storm_latitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_latitude_ProxyFlowPropertyInterface->setRaw_storm_latitude(p_raw_storm_latitude);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_storm_longitude(int p_raw_storm_longitude) {
    
    if (itsInt_raw_storm_longitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_longitude_ProxyFlowPropertyInterface->setRaw_storm_longitude(p_raw_storm_longitude);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_wind_direction(int p_raw_wind_direction) {
    
    if (itsInt_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(int_raw_storm_altitude_ProxyFlowPropertyInterface* const p_int_raw_storm_altitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_altitude_ProxyFlowPropertyInterface = p_int_raw_storm_altitude_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(int_raw_storm_diameter_ProxyFlowPropertyInterface* const p_int_raw_storm_diameter_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_diameter_ProxyFlowPropertyInterface = p_int_raw_storm_diameter_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(int_raw_storm_latitude_ProxyFlowPropertyInterface* const p_int_raw_storm_latitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_latitude_ProxyFlowPropertyInterface = p_int_raw_storm_latitude_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(int_raw_storm_longitude_ProxyFlowPropertyInterface* const p_int_raw_storm_longitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_longitude_ProxyFlowPropertyInterface = p_int_raw_storm_longitude_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(int_raw_wind_direction_ProxyFlowPropertyInterface* const p_int_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_direction_ProxyFlowPropertyInterface = p_int_raw_wind_direction_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* const p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface = p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void Storm_Sensors::p_Storm_Sensors_C::cleanUpRelations(void) {
    if(itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_altitude_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_altitude_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_diameter_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_diameter_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_latitude_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_latitude_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_longitude_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_longitude_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_wind_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_wind_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_wind_speed_ProxyFlowPropertyInterface = NULL;
        }
    if(itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface != NULL)
        {
            itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface = NULL;
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

void Storm_Sensors::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    if (memcmp(&raw_precipitation_type, &p_raw_precipitation_type, sizeof(precipitation_type_enum)))  {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_SEND(raw_precipitation_type, p_Storm_Sensors, setRaw_precipitation_type, x2String);
    }
}

void Storm_Sensors::setRaw_storm_altitude(int p_raw_storm_altitude) {
    if (raw_storm_altitude != p_raw_storm_altitude)  {
        raw_storm_altitude = p_raw_storm_altitude;
        FLOW_DATA_SEND(raw_storm_altitude, p_Storm_Sensors, setRaw_storm_altitude, x2String);
    }
}

void Storm_Sensors::setRaw_storm_diameter(int p_raw_storm_diameter) {
    if (raw_storm_diameter != p_raw_storm_diameter)  {
        raw_storm_diameter = p_raw_storm_diameter;
        FLOW_DATA_SEND(raw_storm_diameter, p_Storm_Sensors, setRaw_storm_diameter, x2String);
    }
}

void Storm_Sensors::setRaw_storm_latitude(int p_raw_storm_latitude) {
    if (raw_storm_latitude != p_raw_storm_latitude)  {
        raw_storm_latitude = p_raw_storm_latitude;
        FLOW_DATA_SEND(raw_storm_latitude, p_Storm_Sensors, setRaw_storm_latitude, x2String);
    }
}

void Storm_Sensors::setRaw_storm_longitude(int p_raw_storm_longitude) {
    if (raw_storm_longitude != p_raw_storm_longitude)  {
        raw_storm_longitude = p_raw_storm_longitude;
        FLOW_DATA_SEND(raw_storm_longitude, p_Storm_Sensors, setRaw_storm_longitude, x2String);
    }
}

void Storm_Sensors::setRaw_wind_direction(int p_raw_wind_direction) {
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

int const Storm_Sensors::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

precipitation_type_enum const Storm_Sensors::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

int const Storm_Sensors::getRaw_storm_altitude(void) const {
    return raw_storm_altitude;
}

int const Storm_Sensors::getRaw_storm_diameter(void) const {
    return raw_storm_diameter;
}

int const Storm_Sensors::getRaw_storm_latitude(void) const {
    return raw_storm_latitude;
}

int const Storm_Sensors::getRaw_storm_longitude(void) const {
    return raw_storm_longitude;
}

int const Storm_Sensors::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

int const Storm_Sensors::getRaw_wind_speed(void) const {
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
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String((int)myReal->raw_precipitation_type));
    aomsAttributes->addAttribute("raw_storm_latitude", x2String(myReal->raw_storm_latitude));
    aomsAttributes->addAttribute("raw_storm_longitude", x2String(myReal->raw_storm_longitude));
    aomsAttributes->addAttribute("raw_storm_diameter", x2String(myReal->raw_storm_diameter));
    aomsAttributes->addAttribute("raw_storm_altitude", x2String(myReal->raw_storm_altitude));
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
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
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.cpp
*********************************************************************/
