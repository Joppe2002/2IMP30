/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD.h"
//## link itsCultural_and_Geological_Differences
#include "Cultural_and_Geological_Differences.h"
//## link itsInformation_Channels
#include "Information_Channels.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link itsStandards_and_Regulations
#include "Standards_and_Regulations.h"
//## link itsStorm_Sensors
#include "Storm_Sensors.h"
//## link itsTsunami_Sensors
#include "Tsunami_Sensors.h"
//#[ ignore
#define Architecture_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class SMSWTD
//#[ ignore
SMSWTD::p_SMSWTD_C::p_SMSWTD_C(void) : int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_type_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_C::~p_SMSWTD_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_SMSWTD_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(part);
    setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(part);
    setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(part);
    setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(part);
    
}

bool_raw_wind_direction_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_type_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_SMSWTD_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_precipitation_type(int p_raw_precipitation_type) {
    
    if (itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_wind_direction(bool p_raw_wind_direction) {
    
    if (itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void SMSWTD::p_SMSWTD_C::setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsBool_raw_wind_direction_ProxyFlowPropertyInterface = p_bool_raw_wind_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = p_int_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::cleanUpRelations(void) {
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

SMSWTD::p_SMSWTD_1_C::p_SMSWTD_1_C(void) : int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_type_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_1_C::~p_SMSWTD_1_C(void) {
    cleanUpRelations();
}

bool_raw_wind_direction_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_type_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::p_SMSWTD_1_C* SMSWTD::p_SMSWTD_1_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_SMSWTD_1_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_precipitation_type(int p_raw_precipitation_type) {
    
    if (itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_wind_direction(bool p_raw_wind_direction) {
    
    if (itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsBool_raw_wind_direction_ProxyFlowPropertyInterface = p_bool_raw_wind_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = p_int_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::cleanUpRelations(void) {
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

SMSWTD::p_SMSWTD_2_C::p_SMSWTD_2_C(void) : int_raw_vibrations_ProxyFlowPropertyInterface(), int_raw_vibration_location_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_vibration_location_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_2_C::~p_SMSWTD_2_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_SMSWTD_2_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_raw_vibrations_ProxyFlowPropertyInterface(part);
    setItsInt_raw_vibration_location_ProxyFlowPropertyInterface(part);
    
}

int_raw_vibration_location_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_2_C::getItsInt_raw_vibration_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_2_C::getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_SMSWTD_2_C::setRaw_vibration_location(int p_raw_vibration_location) {
    
    if (itsInt_raw_vibration_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibration_location_ProxyFlowPropertyInterface->setRaw_vibration_location(p_raw_vibration_location);
    }
    
}

void SMSWTD::p_SMSWTD_2_C::setRaw_vibrations(int p_raw_vibrations) {
    
    if (itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_ProxyFlowPropertyInterface->setRaw_vibrations(p_raw_vibrations);
    }
    
}

void SMSWTD::p_SMSWTD_2_C::setItsInt_raw_vibration_location_ProxyFlowPropertyInterface(int_raw_vibration_location_ProxyFlowPropertyInterface* const p_int_raw_vibration_location_ProxyFlowPropertyInterface) {
    itsInt_raw_vibration_location_ProxyFlowPropertyInterface = p_int_raw_vibration_location_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_2_C::setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_ProxyFlowPropertyInterface = p_int_raw_vibrations_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_2_C::cleanUpRelations(void) {
    if(itsInt_raw_vibration_location_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibration_location_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_SMSWTD_3_C::p_SMSWTD_3_C(void) : int_raw_vibrations_ProxyFlowPropertyInterface(), int_raw_vibration_location_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_vibration_location_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_3_C::~p_SMSWTD_3_C(void) {
    cleanUpRelations();
}

int_raw_vibration_location_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_3_C::getItsInt_raw_vibration_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_3_C::getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::p_SMSWTD_3_C* SMSWTD::p_SMSWTD_3_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_SMSWTD_3_C::setRaw_vibration_location(int p_raw_vibration_location) {
    
    if (itsInt_raw_vibration_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibration_location_ProxyFlowPropertyInterface->setRaw_vibration_location(p_raw_vibration_location);
    }
    
}

void SMSWTD::p_SMSWTD_3_C::setRaw_vibrations(int p_raw_vibrations) {
    
    if (itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_ProxyFlowPropertyInterface->setRaw_vibrations(p_raw_vibrations);
    }
    
}

void SMSWTD::p_SMSWTD_3_C::setItsInt_raw_vibration_location_ProxyFlowPropertyInterface(int_raw_vibration_location_ProxyFlowPropertyInterface* const p_int_raw_vibration_location_ProxyFlowPropertyInterface) {
    itsInt_raw_vibration_location_ProxyFlowPropertyInterface = p_int_raw_vibration_location_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_3_C::setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_ProxyFlowPropertyInterface = p_int_raw_vibrations_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_3_C::cleanUpRelations(void) {
    if(itsInt_raw_vibration_location_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibration_location_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SMSWTD::SMSWTD(IOxfActive* const theActiveContext) : OMReactive(), int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface(), int_raw_vibration_location_ProxyFlowPropertyInterface(), itsCultural_and_Geological_Differences(NULL), itsInformation_Channels(NULL), itsStakeholders(NULL), itsStandards_and_Regulations(NULL), itsStorm_Sensors(NULL), itsTsunami_Sensors(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, Architecture_SMSWTD_SMSWTD_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsPrediction_Module.setShouldDelete(false);
        }
        {
            itsData_Storage.setShouldDelete(false);
        }
    }
    initRelations();
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

//#[ ignore
void SMSWTD::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    if (raw_precipitation_amount != p_raw_precipitation_amount) {
        raw_precipitation_amount = p_raw_precipitation_amount;
        FLOW_DATA_RECEIVE("raw_precipitation_amount", raw_precipitation_amount, x2String);
        FLOW_DATA_SEND(raw_precipitation_amount, p_SMSWTD_1, setRaw_precipitation_amount, x2String);
    }
    
}

void SMSWTD::setRaw_precipitation_type(int p_raw_precipitation_type) {
    if (raw_precipitation_type != p_raw_precipitation_type) {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_RECEIVE("raw_precipitation_type", raw_precipitation_type, x2String);
        FLOW_DATA_SEND(raw_precipitation_type, p_SMSWTD_1, setRaw_precipitation_type, x2String);
    }
    
}

void SMSWTD::setRaw_vibration_location(int p_raw_vibration_location) {
    if (raw_vibration_location != p_raw_vibration_location) {
        raw_vibration_location = p_raw_vibration_location;
        FLOW_DATA_RECEIVE("raw_vibration_location", raw_vibration_location, x2String);
        FLOW_DATA_SEND(raw_vibration_location, p_SMSWTD_3, setRaw_vibration_location, x2String);
    }
    
}

void SMSWTD::setRaw_vibrations(int p_raw_vibrations) {
    if (raw_vibrations != p_raw_vibrations) {
        raw_vibrations = p_raw_vibrations;
        FLOW_DATA_RECEIVE("raw_vibrations", raw_vibrations, x2String);
        FLOW_DATA_SEND(raw_vibrations, p_SMSWTD_3, setRaw_vibrations, x2String);
    }
    
}

void SMSWTD::setRaw_wind_direction(bool p_raw_wind_direction) {
    if (raw_wind_direction != p_raw_wind_direction) {
        raw_wind_direction = p_raw_wind_direction;
        FLOW_DATA_RECEIVE("raw_wind_direction", raw_wind_direction, x2String);
        FLOW_DATA_SEND(raw_wind_direction, p_SMSWTD_1, setRaw_wind_direction, x2String);
    }
    
}

void SMSWTD::setRaw_wind_speed(int p_raw_wind_speed) {
    if (raw_wind_speed != p_raw_wind_speed) {
        raw_wind_speed = p_raw_wind_speed;
        FLOW_DATA_RECEIVE("raw_wind_speed", raw_wind_speed, x2String);
        FLOW_DATA_SEND(raw_wind_speed, p_SMSWTD_1, setRaw_wind_speed, x2String);
    }
    
}
//#]

SMSWTD::p_SMSWTD_C* SMSWTD::getP_SMSWTD(void) const {
    return (SMSWTD::p_SMSWTD_C*) &p_SMSWTD;
}

SMSWTD::p_SMSWTD_C* SMSWTD::get_p_SMSWTD(void) const {
    return (SMSWTD::p_SMSWTD_C*) &p_SMSWTD;
}

SMSWTD::p_SMSWTD_1_C* SMSWTD::getP_SMSWTD_1(void) const {
    return (SMSWTD::p_SMSWTD_1_C*) &p_SMSWTD_1;
}

SMSWTD::p_SMSWTD_1_C* SMSWTD::get_p_SMSWTD_1(void) const {
    return (SMSWTD::p_SMSWTD_1_C*) &p_SMSWTD_1;
}

SMSWTD::p_SMSWTD_2_C* SMSWTD::getP_SMSWTD_2(void) const {
    return (SMSWTD::p_SMSWTD_2_C*) &p_SMSWTD_2;
}

SMSWTD::p_SMSWTD_2_C* SMSWTD::get_p_SMSWTD_2(void) const {
    return (SMSWTD::p_SMSWTD_2_C*) &p_SMSWTD_2;
}

SMSWTD::p_SMSWTD_3_C* SMSWTD::getP_SMSWTD_3(void) const {
    return (SMSWTD::p_SMSWTD_3_C*) &p_SMSWTD_3;
}

SMSWTD::p_SMSWTD_3_C* SMSWTD::get_p_SMSWTD_3(void) const {
    return (SMSWTD::p_SMSWTD_3_C*) &p_SMSWTD_3;
}

const int SMSWTD::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

const int SMSWTD::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

const int SMSWTD::getRaw_vibration_location(void) const {
    return raw_vibration_location;
}

const int SMSWTD::getRaw_vibrations(void) const {
    return raw_vibrations;
}

const bool SMSWTD::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

const int SMSWTD::getRaw_wind_speed(void) const {
    return raw_wind_speed;
}

const Actionable_Information_Generator* SMSWTD::getItsActionable_Information_Generator(void) const {
    return &itsActionable_Information_Generator;
}

const Cultural_and_Geological_Differences* SMSWTD::getItsCultural_and_Geological_Differences(void) const {
    return itsCultural_and_Geological_Differences;
}

void SMSWTD::setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences) {
    if(p_Cultural_and_Geological_Differences != NULL)
        {
            p_Cultural_and_Geological_Differences->_setItsSMSWTD(this);
        }
    _setItsCultural_and_Geological_Differences(p_Cultural_and_Geological_Differences);
}

const Data_Storage* SMSWTD::getItsData_Storage(void) const {
    return &itsData_Storage;
}

const Information_Channels* SMSWTD::getItsInformation_Channels(void) const {
    return itsInformation_Channels;
}

void SMSWTD::setItsInformation_Channels(Information_Channels* const p_Information_Channels) {
    if(p_Information_Channels != NULL)
        {
            p_Information_Channels->_setItsSMSWTD(this);
        }
    _setItsInformation_Channels(p_Information_Channels);
}

const Prediction_Module* SMSWTD::getItsPrediction_Module(void) const {
    return &itsPrediction_Module;
}

const Stakeholders* SMSWTD::getItsStakeholders(void) const {
    return itsStakeholders;
}

void SMSWTD::setItsStakeholders(Stakeholders* const p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsSMSWTD(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

const Standards_and_Regulations* SMSWTD::getItsStandards_and_Regulations(void) const {
    return itsStandards_and_Regulations;
}

void SMSWTD::setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations) {
    if(p_Standards_and_Regulations != NULL)
        {
            p_Standards_and_Regulations->_setItsSMSWTD(this);
        }
    _setItsStandards_and_Regulations(p_Standards_and_Regulations);
}

const Storm_Sensors* SMSWTD::getItsStorm_Sensors(void) const {
    return itsStorm_Sensors;
}

void SMSWTD::setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors) {
    if(p_Storm_Sensors != NULL)
        {
            p_Storm_Sensors->_setItsSMSWTD(this);
        }
    _setItsStorm_Sensors(p_Storm_Sensors);
}

const System_Output* SMSWTD::getItsSystem_Output(void) const {
    return &itsSystem_Output;
}

const Tsunami_Sensors* SMSWTD::getItsTsunami_Sensors(void) const {
    return itsTsunami_Sensors;
}

void SMSWTD::setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors) {
    if(p_Tsunami_Sensors != NULL)
        {
            p_Tsunami_Sensors->_setItsSMSWTD(this);
        }
    _setItsTsunami_Sensors(p_Tsunami_Sensors);
}

bool SMSWTD::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsData_Storage.startBehavior();
        }
    if(done == true)
        {
            done = itsPrediction_Module.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSWTD::initRelations(void) {
    if (get_p_SMSWTD() != NULL) {
        get_p_SMSWTD()->connectSMSWTD(this);
    }
    if (get_p_SMSWTD_2() != NULL) {
        get_p_SMSWTD_2()->connectSMSWTD(this);
    }
}

void SMSWTD::cleanUpRelations(void) {
    if(itsCultural_and_Geological_Differences != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCultural_and_Geological_Differences");
            const SMSWTD* p_SMSWTD = itsCultural_and_Geological_Differences->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsCultural_and_Geological_Differences->__setItsSMSWTD(NULL);
                }
            itsCultural_and_Geological_Differences = NULL;
        }
    if(itsInformation_Channels != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsInformation_Channels");
            const SMSWTD* p_SMSWTD = itsInformation_Channels->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsInformation_Channels->__setItsSMSWTD(NULL);
                }
            itsInformation_Channels = NULL;
        }
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            const SMSWTD* p_SMSWTD = itsStakeholders->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsStakeholders->__setItsSMSWTD(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsStandards_and_Regulations != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStandards_and_Regulations");
            const SMSWTD* p_SMSWTD = itsStandards_and_Regulations->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsStandards_and_Regulations->__setItsSMSWTD(NULL);
                }
            itsStandards_and_Regulations = NULL;
        }
    if(itsStorm_Sensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStorm_Sensors");
            const SMSWTD* p_SMSWTD = itsStorm_Sensors->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsStorm_Sensors->__setItsSMSWTD(NULL);
                }
            itsStorm_Sensors = NULL;
        }
    if(itsTsunami_Sensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTsunami_Sensors");
            const SMSWTD* p_SMSWTD = itsTsunami_Sensors->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsTsunami_Sensors->__setItsSMSWTD(NULL);
                }
            itsTsunami_Sensors = NULL;
        }
}

void SMSWTD::__setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences) {
    itsCultural_and_Geological_Differences = p_Cultural_and_Geological_Differences;
    if(p_Cultural_and_Geological_Differences != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCultural_and_Geological_Differences", p_Cultural_and_Geological_Differences, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCultural_and_Geological_Differences");
        }
}

void SMSWTD::_setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences) {
    if(itsCultural_and_Geological_Differences != NULL)
        {
            itsCultural_and_Geological_Differences->__setItsSMSWTD(NULL);
        }
    __setItsCultural_and_Geological_Differences(p_Cultural_and_Geological_Differences);
}

void SMSWTD::_clearItsCultural_and_Geological_Differences(void) {
    NOTIFY_RELATION_CLEARED("itsCultural_and_Geological_Differences");
    itsCultural_and_Geological_Differences = NULL;
}

void SMSWTD::__setItsInformation_Channels(Information_Channels* const p_Information_Channels) {
    itsInformation_Channels = p_Information_Channels;
    if(p_Information_Channels != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsInformation_Channels", p_Information_Channels, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsInformation_Channels");
        }
}

void SMSWTD::_setItsInformation_Channels(Information_Channels* const p_Information_Channels) {
    if(itsInformation_Channels != NULL)
        {
            itsInformation_Channels->__setItsSMSWTD(NULL);
        }
    __setItsInformation_Channels(p_Information_Channels);
}

void SMSWTD::_clearItsInformation_Channels(void) {
    NOTIFY_RELATION_CLEARED("itsInformation_Channels");
    itsInformation_Channels = NULL;
}

void SMSWTD::__setItsStakeholders(Stakeholders* const p_Stakeholders) {
    itsStakeholders = p_Stakeholders;
    if(p_Stakeholders != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholders", p_Stakeholders, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
        }
}

void SMSWTD::_setItsStakeholders(Stakeholders* const p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsSMSWTD(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void SMSWTD::_clearItsStakeholders(void) {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void SMSWTD::__setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations) {
    itsStandards_and_Regulations = p_Standards_and_Regulations;
    if(p_Standards_and_Regulations != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStandards_and_Regulations", p_Standards_and_Regulations, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStandards_and_Regulations");
        }
}

void SMSWTD::_setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations) {
    if(itsStandards_and_Regulations != NULL)
        {
            itsStandards_and_Regulations->__setItsSMSWTD(NULL);
        }
    __setItsStandards_and_Regulations(p_Standards_and_Regulations);
}

void SMSWTD::_clearItsStandards_and_Regulations(void) {
    NOTIFY_RELATION_CLEARED("itsStandards_and_Regulations");
    itsStandards_and_Regulations = NULL;
}

void SMSWTD::__setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors) {
    itsStorm_Sensors = p_Storm_Sensors;
    if(p_Storm_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStorm_Sensors", p_Storm_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStorm_Sensors");
        }
}

void SMSWTD::_setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors) {
    if(itsStorm_Sensors != NULL)
        {
            itsStorm_Sensors->__setItsSMSWTD(NULL);
        }
    __setItsStorm_Sensors(p_Storm_Sensors);
}

void SMSWTD::_clearItsStorm_Sensors(void) {
    NOTIFY_RELATION_CLEARED("itsStorm_Sensors");
    itsStorm_Sensors = NULL;
}

void SMSWTD::__setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors) {
    itsTsunami_Sensors = p_Tsunami_Sensors;
    if(p_Tsunami_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTsunami_Sensors", p_Tsunami_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTsunami_Sensors");
        }
}

void SMSWTD::_setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors) {
    if(itsTsunami_Sensors != NULL)
        {
            itsTsunami_Sensors->__setItsSMSWTD(NULL);
        }
    __setItsTsunami_Sensors(p_Tsunami_Sensors);
}

void SMSWTD::_clearItsTsunami_Sensors(void) {
    NOTIFY_RELATION_CLEARED("itsTsunami_Sensors");
    itsTsunami_Sensors = NULL;
}

void SMSWTD::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsPrediction_Module.setActiveContext(theActiveContext, false);
        itsData_Storage.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD::destroy(void) {
    itsData_Storage.destroy();
    itsPrediction_Module.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String(myReal->raw_precipitation_type));
    aomsAttributes->addAttribute("raw_vibrations", x2String(myReal->raw_vibrations));
    aomsAttributes->addAttribute("raw_vibration_location", x2String(myReal->raw_vibration_location));
}

void OMAnimatedSMSWTD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
    aomsRelations->addRelation("itsInformation_Channels", false, true);
    if(myReal->itsInformation_Channels)
        {
            aomsRelations->ADD_ITEM(myReal->itsInformation_Channels);
        }
    aomsRelations->addRelation("itsStandards_and_Regulations", false, true);
    if(myReal->itsStandards_and_Regulations)
        {
            aomsRelations->ADD_ITEM(myReal->itsStandards_and_Regulations);
        }
    aomsRelations->addRelation("itsCultural_and_Geological_Differences", false, true);
    if(myReal->itsCultural_and_Geological_Differences)
        {
            aomsRelations->ADD_ITEM(myReal->itsCultural_and_Geological_Differences);
        }
    aomsRelations->addRelation("itsPrediction_Module", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPrediction_Module);
    aomsRelations->addRelation("itsActionable_Information_Generator", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsActionable_Information_Generator);
    aomsRelations->addRelation("itsData_Storage", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsData_Storage);
    aomsRelations->addRelation("itsSystem_Output", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSystem_Output);
    aomsRelations->addRelation("itsTsunami_Sensors", false, true);
    if(myReal->itsTsunami_Sensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsTsunami_Sensors);
        }
    aomsRelations->addRelation("itsStorm_Sensors", false, true);
    if(myReal->itsStorm_Sensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsStorm_Sensors);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(SMSWTD, Architecture, Architecture, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
