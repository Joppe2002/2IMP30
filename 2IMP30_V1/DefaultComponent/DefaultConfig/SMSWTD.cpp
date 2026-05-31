/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sun, 31, May 2026  
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
SMSWTD::p_SMSWTD_C::p_SMSWTD_C(void) : int_raw_precipitation_amount_ProxyFlowPropertyInterface(), precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_storm_altitude_ProxyFlowPropertyInterface(), int_raw_storm_diameter_ProxyFlowPropertyInterface(), int_raw_storm_latitude_ProxyFlowPropertyInterface(), int_raw_storm_longitude_ProxyFlowPropertyInterface(), int_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_wind_speed_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_altitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_diameter_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_latitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_longitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL), itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_C::~p_SMSWTD_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_SMSWTD_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(part);
    setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(part);
    setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(part);
    setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(part);
    
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_altitude_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_diameter_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_latitude_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_longitude_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_direction_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_C::getItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_SMSWTD_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    
    if (itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_storm_altitude(int p_raw_storm_altitude) {
    
    if (itsInt_raw_storm_altitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_altitude_ProxyFlowPropertyInterface->setRaw_storm_altitude(p_raw_storm_altitude);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_storm_diameter(int p_raw_storm_diameter) {
    
    if (itsInt_raw_storm_diameter_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_diameter_ProxyFlowPropertyInterface->setRaw_storm_diameter(p_raw_storm_diameter);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_storm_latitude(int p_raw_storm_latitude) {
    
    if (itsInt_raw_storm_latitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_latitude_ProxyFlowPropertyInterface->setRaw_storm_latitude(p_raw_storm_latitude);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_storm_longitude(int p_raw_storm_longitude) {
    
    if (itsInt_raw_storm_longitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_longitude_ProxyFlowPropertyInterface->setRaw_storm_longitude(p_raw_storm_longitude);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_wind_direction(int p_raw_wind_direction) {
    
    if (itsInt_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void SMSWTD::p_SMSWTD_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(int_raw_storm_altitude_ProxyFlowPropertyInterface* const p_int_raw_storm_altitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_altitude_ProxyFlowPropertyInterface = p_int_raw_storm_altitude_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(int_raw_storm_diameter_ProxyFlowPropertyInterface* const p_int_raw_storm_diameter_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_diameter_ProxyFlowPropertyInterface = p_int_raw_storm_diameter_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(int_raw_storm_latitude_ProxyFlowPropertyInterface* const p_int_raw_storm_latitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_latitude_ProxyFlowPropertyInterface = p_int_raw_storm_latitude_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(int_raw_storm_longitude_ProxyFlowPropertyInterface* const p_int_raw_storm_longitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_longitude_ProxyFlowPropertyInterface = p_int_raw_storm_longitude_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(int_raw_wind_direction_ProxyFlowPropertyInterface* const p_int_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_direction_ProxyFlowPropertyInterface = p_int_raw_wind_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* const p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface = p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_C::cleanUpRelations(void) {
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

SMSWTD::p_SMSWTD_1_C::p_SMSWTD_1_C(void) : int_raw_precipitation_amount_ProxyFlowPropertyInterface(), precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_storm_altitude_ProxyFlowPropertyInterface(), int_raw_storm_diameter_ProxyFlowPropertyInterface(), int_raw_storm_latitude_ProxyFlowPropertyInterface(), int_raw_storm_longitude_ProxyFlowPropertyInterface(), int_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_wind_speed_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_altitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_diameter_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_latitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_longitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL), itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_1_C::~p_SMSWTD_1_C(void) {
    cleanUpRelations();
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_altitude_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_diameter_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_latitude_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_longitude_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_direction_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_1_C::getItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
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

void SMSWTD::p_SMSWTD_1_C::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    
    if (itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_storm_altitude(int p_raw_storm_altitude) {
    
    if (itsInt_raw_storm_altitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_altitude_ProxyFlowPropertyInterface->setRaw_storm_altitude(p_raw_storm_altitude);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_storm_diameter(int p_raw_storm_diameter) {
    
    if (itsInt_raw_storm_diameter_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_diameter_ProxyFlowPropertyInterface->setRaw_storm_diameter(p_raw_storm_diameter);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_storm_latitude(int p_raw_storm_latitude) {
    
    if (itsInt_raw_storm_latitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_latitude_ProxyFlowPropertyInterface->setRaw_storm_latitude(p_raw_storm_latitude);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_storm_longitude(int p_raw_storm_longitude) {
    
    if (itsInt_raw_storm_longitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_longitude_ProxyFlowPropertyInterface->setRaw_storm_longitude(p_raw_storm_longitude);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_wind_direction(int p_raw_wind_direction) {
    
    if (itsInt_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(int_raw_storm_altitude_ProxyFlowPropertyInterface* const p_int_raw_storm_altitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_altitude_ProxyFlowPropertyInterface = p_int_raw_storm_altitude_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(int_raw_storm_diameter_ProxyFlowPropertyInterface* const p_int_raw_storm_diameter_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_diameter_ProxyFlowPropertyInterface = p_int_raw_storm_diameter_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(int_raw_storm_latitude_ProxyFlowPropertyInterface* const p_int_raw_storm_latitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_latitude_ProxyFlowPropertyInterface = p_int_raw_storm_latitude_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(int_raw_storm_longitude_ProxyFlowPropertyInterface* const p_int_raw_storm_longitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_longitude_ProxyFlowPropertyInterface = p_int_raw_storm_longitude_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(int_raw_wind_direction_ProxyFlowPropertyInterface* const p_int_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_direction_ProxyFlowPropertyInterface = p_int_raw_wind_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* const p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface = p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_1_C::cleanUpRelations(void) {
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

SMSWTD::p_SMSWTD_2_C::p_SMSWTD_2_C(void) : int_raw_tectonicPlate_location_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface(), int_raw_pressure_ProxyFlowPropertyInterface(), bool_raw_flowDirection_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_flowDirection_ProxyFlowPropertyInterface(NULL), itsInt_raw_pressure_ProxyFlowPropertyInterface(NULL), itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_2_C::~p_SMSWTD_2_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_SMSWTD_2_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(part);
    setItsInt_raw_vibrations_ProxyFlowPropertyInterface(part);
    setItsInt_raw_pressure_ProxyFlowPropertyInterface(part);
    setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(part);
    
}

bool_raw_flowDirection_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_2_C::getItsBool_raw_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_pressure_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_2_C::getItsInt_raw_pressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_2_C::getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_2_C::getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_SMSWTD_2_C::setRaw_flowDirection(bool p_raw_flowDirection) {
    
    if (itsBool_raw_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_flowDirection_ProxyFlowPropertyInterface->setRaw_flowDirection(p_raw_flowDirection);
    }
    
}

void SMSWTD::p_SMSWTD_2_C::setRaw_pressure(int p_raw_pressure) {
    
    if (itsInt_raw_pressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_pressure_ProxyFlowPropertyInterface->setRaw_pressure(p_raw_pressure);
    }
    
}

void SMSWTD::p_SMSWTD_2_C::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    
    if (itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface->setRaw_tectonicPlate_location(p_raw_tectonicPlate_location);
    }
    
}

void SMSWTD::p_SMSWTD_2_C::setRaw_vibrations(int p_raw_vibrations) {
    
    if (itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_ProxyFlowPropertyInterface->setRaw_vibrations(p_raw_vibrations);
    }
    
}

void SMSWTD::p_SMSWTD_2_C::setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(bool_raw_flowDirection_ProxyFlowPropertyInterface* const p_bool_raw_flowDirection_ProxyFlowPropertyInterface) {
    itsBool_raw_flowDirection_ProxyFlowPropertyInterface = p_bool_raw_flowDirection_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_2_C::setItsInt_raw_pressure_ProxyFlowPropertyInterface(int_raw_pressure_ProxyFlowPropertyInterface* const p_int_raw_pressure_ProxyFlowPropertyInterface) {
    itsInt_raw_pressure_ProxyFlowPropertyInterface = p_int_raw_pressure_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_2_C::setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface) {
    itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface = p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_2_C::setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_ProxyFlowPropertyInterface = p_int_raw_vibrations_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_2_C::cleanUpRelations(void) {
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

SMSWTD::p_SMSWTD_3_C::p_SMSWTD_3_C(void) : bool_raw_flowDirection_ProxyFlowPropertyInterface(), int_raw_pressure_ProxyFlowPropertyInterface(), int_raw_tectonicPlate_location_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_flowDirection_ProxyFlowPropertyInterface(NULL), itsInt_raw_pressure_ProxyFlowPropertyInterface(NULL), itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_SMSWTD_3_C::~p_SMSWTD_3_C(void) {
    cleanUpRelations();
}

bool_raw_flowDirection_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_3_C::getItsBool_raw_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_pressure_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_3_C::getItsInt_raw_pressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_3_C::getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_ProxyFlowPropertyInterface* SMSWTD::p_SMSWTD_3_C::getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::p_SMSWTD_3_C* SMSWTD::p_SMSWTD_3_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_SMSWTD_3_C::setRaw_flowDirection(bool p_raw_flowDirection) {
    
    if (itsBool_raw_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_flowDirection_ProxyFlowPropertyInterface->setRaw_flowDirection(p_raw_flowDirection);
    }
    
}

void SMSWTD::p_SMSWTD_3_C::setRaw_pressure(int p_raw_pressure) {
    
    if (itsInt_raw_pressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_pressure_ProxyFlowPropertyInterface->setRaw_pressure(p_raw_pressure);
    }
    
}

void SMSWTD::p_SMSWTD_3_C::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    
    if (itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface->setRaw_tectonicPlate_location(p_raw_tectonicPlate_location);
    }
    
}

void SMSWTD::p_SMSWTD_3_C::setRaw_vibrations(int p_raw_vibrations) {
    
    if (itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_ProxyFlowPropertyInterface->setRaw_vibrations(p_raw_vibrations);
    }
    
}

void SMSWTD::p_SMSWTD_3_C::setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(bool_raw_flowDirection_ProxyFlowPropertyInterface* const p_bool_raw_flowDirection_ProxyFlowPropertyInterface) {
    itsBool_raw_flowDirection_ProxyFlowPropertyInterface = p_bool_raw_flowDirection_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_3_C::setItsInt_raw_pressure_ProxyFlowPropertyInterface(int_raw_pressure_ProxyFlowPropertyInterface* const p_int_raw_pressure_ProxyFlowPropertyInterface) {
    itsInt_raw_pressure_ProxyFlowPropertyInterface = p_int_raw_pressure_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_3_C::setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface) {
    itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface = p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_3_C::setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_ProxyFlowPropertyInterface = p_int_raw_vibrations_ProxyFlowPropertyInterface;
}

void SMSWTD::p_SMSWTD_3_C::cleanUpRelations(void) {
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

SMSWTD::SMSWTD(IOxfActive* const theActiveContext) : OMReactive(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_storm_altitude_ProxyFlowPropertyInterface(), int_raw_storm_diameter_ProxyFlowPropertyInterface(), int_raw_storm_latitude_ProxyFlowPropertyInterface(), int_raw_storm_longitude_ProxyFlowPropertyInterface(), int_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_wind_speed_ProxyFlowPropertyInterface(), int_raw_tectonicPlate_location_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface(), int_raw_pressure_ProxyFlowPropertyInterface(), bool_raw_flowDirection_ProxyFlowPropertyInterface(), itsCultural_and_Geological_Differences(NULL), itsInformation_Channels(NULL), itsStakeholders(NULL), itsStandards_and_Regulations(NULL), itsStorm_Sensors(NULL), itsTsunami_Sensors(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, Architecture_SMSWTD_SMSWTD_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
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
void SMSWTD::setRaw_flowDirection(bool p_raw_flowDirection) {
    if (raw_flowDirection != p_raw_flowDirection) {
        raw_flowDirection = p_raw_flowDirection;
        FLOW_DATA_RECEIVE("raw_flowDirection", raw_flowDirection, x2String);
        FLOW_DATA_SEND(raw_flowDirection, p_SMSWTD_3, setRaw_flowDirection, x2String);
    }
    
}

void SMSWTD::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    if (raw_precipitation_amount != p_raw_precipitation_amount) {
        raw_precipitation_amount = p_raw_precipitation_amount;
        FLOW_DATA_RECEIVE("raw_precipitation_amount", raw_precipitation_amount, x2String);
        FLOW_DATA_SEND(raw_precipitation_amount, p_SMSWTD_1, setRaw_precipitation_amount, x2String);
    }
    
}

void SMSWTD::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    if (memcmp(&raw_precipitation_type, &p_raw_precipitation_type, sizeof(precipitation_type_enum))) {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_RECEIVE("raw_precipitation_type", raw_precipitation_type, x2String);
        FLOW_DATA_SEND(raw_precipitation_type, p_SMSWTD_1, setRaw_precipitation_type, x2String);
    }
    
}

void SMSWTD::setRaw_pressure(int p_raw_pressure) {
    if (raw_pressure != p_raw_pressure) {
        raw_pressure = p_raw_pressure;
        FLOW_DATA_RECEIVE("raw_pressure", raw_pressure, x2String);
        FLOW_DATA_SEND(raw_pressure, p_SMSWTD_3, setRaw_pressure, x2String);
    }
    
}

void SMSWTD::setRaw_storm_altitude(int p_raw_storm_altitude) {
    if (raw_storm_altitude != p_raw_storm_altitude) {
        raw_storm_altitude = p_raw_storm_altitude;
        FLOW_DATA_RECEIVE("raw_storm_altitude", raw_storm_altitude, x2String);
        FLOW_DATA_SEND(raw_storm_altitude, p_SMSWTD_1, setRaw_storm_altitude, x2String);
    }
    
}

void SMSWTD::setRaw_storm_diameter(int p_raw_storm_diameter) {
    if (raw_storm_diameter != p_raw_storm_diameter) {
        raw_storm_diameter = p_raw_storm_diameter;
        FLOW_DATA_RECEIVE("raw_storm_diameter", raw_storm_diameter, x2String);
        FLOW_DATA_SEND(raw_storm_diameter, p_SMSWTD_1, setRaw_storm_diameter, x2String);
    }
    
}

void SMSWTD::setRaw_storm_latitude(int p_raw_storm_latitude) {
    if (raw_storm_latitude != p_raw_storm_latitude) {
        raw_storm_latitude = p_raw_storm_latitude;
        FLOW_DATA_RECEIVE("raw_storm_latitude", raw_storm_latitude, x2String);
        FLOW_DATA_SEND(raw_storm_latitude, p_SMSWTD_1, setRaw_storm_latitude, x2String);
    }
    
}

void SMSWTD::setRaw_storm_longitude(int p_raw_storm_longitude) {
    if (raw_storm_longitude != p_raw_storm_longitude) {
        raw_storm_longitude = p_raw_storm_longitude;
        FLOW_DATA_RECEIVE("raw_storm_longitude", raw_storm_longitude, x2String);
        FLOW_DATA_SEND(raw_storm_longitude, p_SMSWTD_1, setRaw_storm_longitude, x2String);
    }
    
}

void SMSWTD::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    if (raw_tectonicPlate_location != p_raw_tectonicPlate_location) {
        raw_tectonicPlate_location = p_raw_tectonicPlate_location;
        FLOW_DATA_RECEIVE("raw_tectonicPlate_location", raw_tectonicPlate_location, x2String);
        FLOW_DATA_SEND(raw_tectonicPlate_location, p_SMSWTD_3, setRaw_tectonicPlate_location, x2String);
    }
    
}

void SMSWTD::setRaw_vibrations(int p_raw_vibrations) {
    if (raw_vibrations != p_raw_vibrations) {
        raw_vibrations = p_raw_vibrations;
        FLOW_DATA_RECEIVE("raw_vibrations", raw_vibrations, x2String);
        FLOW_DATA_SEND(raw_vibrations, p_SMSWTD_3, setRaw_vibrations, x2String);
    }
    
}

void SMSWTD::setRaw_wind_direction(int p_raw_wind_direction) {
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

bool const SMSWTD::getRaw_flowDirection(void) const {
    return raw_flowDirection;
}

int const SMSWTD::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

precipitation_type_enum const SMSWTD::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

int const SMSWTD::getRaw_pressure(void) const {
    return raw_pressure;
}

int const SMSWTD::getRaw_storm_altitude(void) const {
    return raw_storm_altitude;
}

int const SMSWTD::getRaw_storm_diameter(void) const {
    return raw_storm_diameter;
}

int const SMSWTD::getRaw_storm_latitude(void) const {
    return raw_storm_latitude;
}

int const SMSWTD::getRaw_storm_longitude(void) const {
    return raw_storm_longitude;
}

int const SMSWTD::getRaw_tectonicPlate_location(void) const {
    return raw_tectonicPlate_location;
}

int const SMSWTD::getRaw_vibrations(void) const {
    return raw_vibrations;
}

int const SMSWTD::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

int const SMSWTD::getRaw_wind_speed(void) const {
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
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSWTD::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
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
        itsData_Storage.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD::destroy(void) {
    itsData_Storage.destroy();
    OMReactive::destroy();
}

void SMSWTD::OMCreateInstances(void) {
}

void SMSWTD::OMConnectRelations(void) {
    if (get_p_SMSWTD() != NULL) {
        get_p_SMSWTD()->connectSMSWTD(this);
    }
    if (get_p_SMSWTD_2() != NULL) {
        get_p_SMSWTD_2()->connectSMSWTD(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String((int)myReal->raw_precipitation_type));
    aomsAttributes->addAttribute("raw_storm_altitude", x2String(myReal->raw_storm_altitude));
    aomsAttributes->addAttribute("raw_storm_diameter", x2String(myReal->raw_storm_diameter));
    aomsAttributes->addAttribute("raw_storm_latitude", x2String(myReal->raw_storm_latitude));
    aomsAttributes->addAttribute("raw_storm_longitude", x2String(myReal->raw_storm_longitude));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("raw_flowDirection", x2String(myReal->raw_flowDirection));
    aomsAttributes->addAttribute("raw_pressure", x2String(myReal->raw_pressure));
    aomsAttributes->addAttribute("raw_tectonicPlate_location", x2String(myReal->raw_tectonicPlate_location));
    aomsAttributes->addAttribute("raw_vibrations", x2String(myReal->raw_vibrations));
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
