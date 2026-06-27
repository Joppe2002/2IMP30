/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sat, 27, Jun 2026  
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
SMSWTD::p_Storm_Input_C::p_Storm_Input_C(void) : int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_type_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Storm_Input_C::~p_Storm_Input_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_Storm_Input_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(part);
    setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(part);
    setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(part);
    setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(part);
    
}

bool_raw_wind_direction_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Input_C::getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Input_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_type_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Input_C::getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Input_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_Storm_Input_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void SMSWTD::p_Storm_Input_C::setRaw_precipitation_type(int p_raw_precipitation_type) {
    
    if (itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void SMSWTD::p_Storm_Input_C::setRaw_wind_direction(bool p_raw_wind_direction) {
    
    if (itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void SMSWTD::p_Storm_Input_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void SMSWTD::p_Storm_Input_C::setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsBool_raw_wind_direction_ProxyFlowPropertyInterface = p_bool_raw_wind_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Input_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Input_C::setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = p_int_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Input_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Input_C::cleanUpRelations(void) {
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

SMSWTD::p_Storm_Data_C::p_Storm_Data_C(void) : int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_type_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Storm_Data_C::~p_Storm_Data_C(void) {
    cleanUpRelations();
}

bool_raw_wind_direction_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Data_C::getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Data_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_type_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Data_C::getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Data_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::p_Storm_Data_C* SMSWTD::p_Storm_Data_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_Storm_Data_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void SMSWTD::p_Storm_Data_C::setRaw_precipitation_type(int p_raw_precipitation_type) {
    
    if (itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void SMSWTD::p_Storm_Data_C::setRaw_wind_direction(bool p_raw_wind_direction) {
    
    if (itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void SMSWTD::p_Storm_Data_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void SMSWTD::p_Storm_Data_C::setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsBool_raw_wind_direction_ProxyFlowPropertyInterface = p_bool_raw_wind_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Data_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Data_C::setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = p_int_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Data_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Data_C::cleanUpRelations(void) {
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

SMSWTD::p_Tsunami_Data_C::p_Tsunami_Data_C(void) : int_raw_vibrations_distance_ProxyFlowPropertyInterface(), int_raw_vibrations_intensity_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Tsunami_Data_C::~p_Tsunami_Data_C(void) {
    cleanUpRelations();
}

int_raw_vibrations_distance_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Data_C::getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_intensity_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Data_C::getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::p_Tsunami_Data_C* SMSWTD::p_Tsunami_Data_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_Tsunami_Data_C::setRaw_vibrations_distance(int p_raw_vibrations_distance) {
    
    if (itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface->setRaw_vibrations_distance(p_raw_vibrations_distance);
    }
    
}

void SMSWTD::p_Tsunami_Data_C::setRaw_vibrations_intensity(int p_raw_vibrations_intensity) {
    
    if (itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface->setRaw_vibrations_intensity(p_raw_vibrations_intensity);
    }
    
}

void SMSWTD::p_Tsunami_Data_C::setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(int_raw_vibrations_distance_ProxyFlowPropertyInterface* const p_int_raw_vibrations_distance_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface = p_int_raw_vibrations_distance_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Tsunami_Data_C::setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(int_raw_vibrations_intensity_ProxyFlowPropertyInterface* const p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface = p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Tsunami_Data_C::cleanUpRelations(void) {
    if(itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Tsunami_Input_C::p_Tsunami_Input_C(void) : int_raw_vibrations_distance_ProxyFlowPropertyInterface(), int_raw_vibrations_intensity_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Tsunami_Input_C::~p_Tsunami_Input_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_Tsunami_Input_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(part);
    setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(part);
    
}

int_raw_vibrations_distance_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Input_C::getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_intensity_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Input_C::getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_Tsunami_Input_C::setRaw_vibrations_distance(int p_raw_vibrations_distance) {
    
    if (itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface->setRaw_vibrations_distance(p_raw_vibrations_distance);
    }
    
}

void SMSWTD::p_Tsunami_Input_C::setRaw_vibrations_intensity(int p_raw_vibrations_intensity) {
    
    if (itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface->setRaw_vibrations_intensity(p_raw_vibrations_intensity);
    }
    
}

void SMSWTD::p_Tsunami_Input_C::setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(int_raw_vibrations_distance_ProxyFlowPropertyInterface* const p_int_raw_vibrations_distance_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface = p_int_raw_vibrations_distance_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Tsunami_Input_C::setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(int_raw_vibrations_intensity_ProxyFlowPropertyInterface* const p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface = p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Tsunami_Input_C::cleanUpRelations(void) {
    if(itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Warning_Output_C::p_Warning_Output_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Warning_Output_C::~p_Warning_Output_C(void) {
    cleanUpRelations();
}

int_warning_type_ProxyFlowPropertyInterface* SMSWTD::p_Warning_Output_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_warning_type_ProxyFlowPropertyInterface* SMSWTD::p_Warning_Output_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_Warning_Output_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void SMSWTD::p_Warning_Output_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Warning_Output_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Warning_Transfer_C::p_Warning_Transfer_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Warning_Transfer_C::~p_Warning_Transfer_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_Warning_Transfer_C::connectSMSWTD(SMSWTD* part) {
    setItsInt_warning_type_ProxyFlowPropertyInterface(part);
    
}

int_warning_type_ProxyFlowPropertyInterface* SMSWTD::p_Warning_Transfer_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_Warning_Transfer_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void SMSWTD::p_Warning_Transfer_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Warning_Transfer_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Storm_Transfer_C::p_Storm_Transfer_C(void) : bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), _p_(0), itsBool_pred_direction_ProxyFlowPropertyInterface(NULL), itsFloat_pred_probability_ProxyFlowPropertyInterface(NULL), itsFloat_pred_severity_ProxyFlowPropertyInterface(NULL), itsFloat_pred_speed_ProxyFlowPropertyInterface(NULL), itsFloat_storm_probability_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Storm_Transfer_C::~p_Storm_Transfer_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_Storm_Transfer_C::connectSMSWTD(SMSWTD* part) {
    setItsBool_pred_direction_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_severity_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_probability_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_speed_ProxyFlowPropertyInterface(part);
    setItsFloat_storm_probability_ProxyFlowPropertyInterface(part);
    
}

bool_pred_direction_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Transfer_C::getItsBool_pred_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_probability_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Transfer_C::getItsFloat_pred_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_severity_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Transfer_C::getItsFloat_pred_severity_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_speed_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Transfer_C::getItsFloat_pred_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

float_storm_probability_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Transfer_C::getItsFloat_storm_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_Storm_Transfer_C::setPred_direction(bool p_pred_direction) {
    
    if (itsBool_pred_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_pred_direction_ProxyFlowPropertyInterface->setPred_direction(p_pred_direction);
    }
    
}

void SMSWTD::p_Storm_Transfer_C::setPred_probability(float p_pred_probability) {
    
    if (itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ProxyFlowPropertyInterface->setPred_probability(p_pred_probability);
    }
    
}

void SMSWTD::p_Storm_Transfer_C::setPred_severity(float p_pred_severity) {
    
    if (itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_severity_ProxyFlowPropertyInterface->setPred_severity(p_pred_severity);
    }
    
}

void SMSWTD::p_Storm_Transfer_C::setPred_speed(float p_pred_speed) {
    
    if (itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_speed_ProxyFlowPropertyInterface->setPred_speed(p_pred_speed);
    }
    
}

void SMSWTD::p_Storm_Transfer_C::setStorm_probability(float p_storm_probability) {
    
    if (itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_storm_probability_ProxyFlowPropertyInterface->setStorm_probability(p_storm_probability);
    }
    
}

void SMSWTD::p_Storm_Transfer_C::setItsBool_pred_direction_ProxyFlowPropertyInterface(bool_pred_direction_ProxyFlowPropertyInterface* const p_bool_pred_direction_ProxyFlowPropertyInterface) {
    itsBool_pred_direction_ProxyFlowPropertyInterface = p_bool_pred_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Transfer_C::setItsFloat_pred_probability_ProxyFlowPropertyInterface(float_pred_probability_ProxyFlowPropertyInterface* const p_float_pred_probability_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ProxyFlowPropertyInterface = p_float_pred_probability_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Transfer_C::setItsFloat_pred_severity_ProxyFlowPropertyInterface(float_pred_severity_ProxyFlowPropertyInterface* const p_float_pred_severity_ProxyFlowPropertyInterface) {
    itsFloat_pred_severity_ProxyFlowPropertyInterface = p_float_pred_severity_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Transfer_C::setItsFloat_pred_speed_ProxyFlowPropertyInterface(float_pred_speed_ProxyFlowPropertyInterface* const p_float_pred_speed_ProxyFlowPropertyInterface) {
    itsFloat_pred_speed_ProxyFlowPropertyInterface = p_float_pred_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Transfer_C::setItsFloat_storm_probability_ProxyFlowPropertyInterface(float_storm_probability_ProxyFlowPropertyInterface* const p_float_storm_probability_ProxyFlowPropertyInterface) {
    itsFloat_storm_probability_ProxyFlowPropertyInterface = p_float_storm_probability_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Transfer_C::cleanUpRelations(void) {
    if(itsBool_pred_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_pred_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_severity_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_speed_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_storm_probability_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Storm_Output_C::p_Storm_Output_C(void) : bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), _p_(0), itsBool_pred_direction_ProxyFlowPropertyInterface(NULL), itsFloat_pred_probability_ProxyFlowPropertyInterface(NULL), itsFloat_pred_severity_ProxyFlowPropertyInterface(NULL), itsFloat_pred_speed_ProxyFlowPropertyInterface(NULL), itsFloat_storm_probability_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Storm_Output_C::~p_Storm_Output_C(void) {
    cleanUpRelations();
}

bool_pred_direction_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Output_C::getItsBool_pred_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_probability_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Output_C::getItsFloat_pred_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_severity_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Output_C::getItsFloat_pred_severity_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_speed_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Output_C::getItsFloat_pred_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

float_storm_probability_ProxyFlowPropertyInterface* SMSWTD::p_Storm_Output_C::getItsFloat_storm_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::p_Storm_Output_C* SMSWTD::p_Storm_Output_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_Storm_Output_C::setPred_direction(bool p_pred_direction) {
    
    if (itsBool_pred_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_pred_direction_ProxyFlowPropertyInterface->setPred_direction(p_pred_direction);
    }
    
}

void SMSWTD::p_Storm_Output_C::setPred_probability(float p_pred_probability) {
    
    if (itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ProxyFlowPropertyInterface->setPred_probability(p_pred_probability);
    }
    
}

void SMSWTD::p_Storm_Output_C::setPred_severity(float p_pred_severity) {
    
    if (itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_severity_ProxyFlowPropertyInterface->setPred_severity(p_pred_severity);
    }
    
}

void SMSWTD::p_Storm_Output_C::setPred_speed(float p_pred_speed) {
    
    if (itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_speed_ProxyFlowPropertyInterface->setPred_speed(p_pred_speed);
    }
    
}

void SMSWTD::p_Storm_Output_C::setStorm_probability(float p_storm_probability) {
    
    if (itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_storm_probability_ProxyFlowPropertyInterface->setStorm_probability(p_storm_probability);
    }
    
}

void SMSWTD::p_Storm_Output_C::setItsBool_pred_direction_ProxyFlowPropertyInterface(bool_pred_direction_ProxyFlowPropertyInterface* const p_bool_pred_direction_ProxyFlowPropertyInterface) {
    itsBool_pred_direction_ProxyFlowPropertyInterface = p_bool_pred_direction_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Output_C::setItsFloat_pred_probability_ProxyFlowPropertyInterface(float_pred_probability_ProxyFlowPropertyInterface* const p_float_pred_probability_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ProxyFlowPropertyInterface = p_float_pred_probability_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Output_C::setItsFloat_pred_severity_ProxyFlowPropertyInterface(float_pred_severity_ProxyFlowPropertyInterface* const p_float_pred_severity_ProxyFlowPropertyInterface) {
    itsFloat_pred_severity_ProxyFlowPropertyInterface = p_float_pred_severity_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Output_C::setItsFloat_pred_speed_ProxyFlowPropertyInterface(float_pred_speed_ProxyFlowPropertyInterface* const p_float_pred_speed_ProxyFlowPropertyInterface) {
    itsFloat_pred_speed_ProxyFlowPropertyInterface = p_float_pred_speed_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Output_C::setItsFloat_storm_probability_ProxyFlowPropertyInterface(float_storm_probability_ProxyFlowPropertyInterface* const p_float_storm_probability_ProxyFlowPropertyInterface) {
    itsFloat_storm_probability_ProxyFlowPropertyInterface = p_float_storm_probability_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Storm_Output_C::cleanUpRelations(void) {
    if(itsBool_pred_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_pred_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_severity_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_speed_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_storm_probability_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Tsunami_Transfer_C::p_Tsunami_Transfer_C(void) : float_pred_probability_ts_ProxyFlowPropertyInterface(), _p_(0), itsFloat_pred_probability_ts_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Tsunami_Transfer_C::~p_Tsunami_Transfer_C(void) {
    cleanUpRelations();
}

void SMSWTD::p_Tsunami_Transfer_C::connectSMSWTD(SMSWTD* part) {
    setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(part);
    
}

float_pred_probability_ts_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Transfer_C::getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMSWTD::p_Tsunami_Transfer_C::setPred_probability_ts(float p_pred_probability_ts) {
    
    if (itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ts_ProxyFlowPropertyInterface->setPred_probability_ts(p_pred_probability_ts);
    }
    
}

void SMSWTD::p_Tsunami_Transfer_C::setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(float_pred_probability_ts_ProxyFlowPropertyInterface* const p_float_pred_probability_ts_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = p_float_pred_probability_ts_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Tsunami_Transfer_C::cleanUpRelations(void) {
    if(itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = NULL;
        }
}

SMSWTD::p_Tsunami_Output_C::p_Tsunami_Output_C(void) : float_pred_probability_ts_ProxyFlowPropertyInterface(), _p_(0), itsFloat_pred_probability_ts_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::p_Tsunami_Output_C::~p_Tsunami_Output_C(void) {
    cleanUpRelations();
}

float_pred_probability_ts_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Output_C::getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_probability_ts_ProxyFlowPropertyInterface* SMSWTD::p_Tsunami_Output_C::getOutBound(void) {
    return this;
}

void SMSWTD::p_Tsunami_Output_C::setPred_probability_ts(float p_pred_probability_ts) {
    
    if (itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ts_ProxyFlowPropertyInterface->setPred_probability_ts(p_pred_probability_ts);
    }
    
}

void SMSWTD::p_Tsunami_Output_C::setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(float_pred_probability_ts_ProxyFlowPropertyInterface* const p_float_pred_probability_ts_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = p_float_pred_probability_ts_ProxyFlowPropertyInterface;
}

void SMSWTD::p_Tsunami_Output_C::cleanUpRelations(void) {
    if(itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SMSWTD::SMSWTD(IOxfActive* const theActiveContext) : OMReactive(), int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_vibrations_distance_ProxyFlowPropertyInterface(), int_raw_vibrations_intensity_ProxyFlowPropertyInterface(), int_warning_type_ProxyFlowPropertyInterface(), bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), float_pred_probability_ts_ProxyFlowPropertyInterface(), itsCultural_and_Geological_Differences(NULL), itsInformation_Channels(NULL), itsStakeholders(NULL), itsStandards_and_Regulations(NULL), itsStorm_Sensors(NULL), itsTsunami_Sensors(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, Architecture_SMSWTD_SMSWTD_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsPrediction_Module.setShouldDelete(false);
        }
        {
            itsData_Storage.setShouldDelete(false);
        }
        {
            itsActionable_Information_Generator.setShouldDelete(false);
        }
    }
    initRelations();
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

//#[ ignore
void SMSWTD::setPred_direction(bool p_pred_direction) {
    if (pred_direction != p_pred_direction) {
        pred_direction = p_pred_direction;
        FLOW_DATA_RECEIVE("pred_direction", pred_direction, x2String);
        FLOW_DATA_SEND(pred_direction, p_Storm_Output, setPred_direction, x2String);
    }
    
}

void SMSWTD::setPred_probability(float p_pred_probability) {
    if (pred_probability != p_pred_probability) {
        pred_probability = p_pred_probability;
        FLOW_DATA_RECEIVE("pred_probability", pred_probability, x2String);
        FLOW_DATA_SEND(pred_probability, p_Storm_Output, setPred_probability, x2String);
    }
    
}

void SMSWTD::setPred_probability_ts(float p_pred_probability_ts) {
    if (pred_probability_ts != p_pred_probability_ts) {
        pred_probability_ts = p_pred_probability_ts;
        FLOW_DATA_RECEIVE("pred_probability_ts", pred_probability_ts, x2String);
        FLOW_DATA_SEND(pred_probability_ts, p_Tsunami_Output, setPred_probability_ts, x2String);
    }
    
}

void SMSWTD::setPred_severity(float p_pred_severity) {
    if (pred_severity != p_pred_severity) {
        pred_severity = p_pred_severity;
        FLOW_DATA_RECEIVE("pred_severity", pred_severity, x2String);
        FLOW_DATA_SEND(pred_severity, p_Storm_Output, setPred_severity, x2String);
    }
    
}

void SMSWTD::setPred_speed(float p_pred_speed) {
    if (pred_speed != p_pred_speed) {
        pred_speed = p_pred_speed;
        FLOW_DATA_RECEIVE("pred_speed", pred_speed, x2String);
        FLOW_DATA_SEND(pred_speed, p_Storm_Output, setPred_speed, x2String);
    }
    
}

void SMSWTD::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    if (raw_precipitation_amount != p_raw_precipitation_amount) {
        raw_precipitation_amount = p_raw_precipitation_amount;
        FLOW_DATA_RECEIVE("raw_precipitation_amount", raw_precipitation_amount, x2String);
        FLOW_DATA_SEND(raw_precipitation_amount, p_Storm_Data, setRaw_precipitation_amount, x2String);
    }
    
}

void SMSWTD::setRaw_precipitation_type(int p_raw_precipitation_type) {
    if (raw_precipitation_type != p_raw_precipitation_type) {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_RECEIVE("raw_precipitation_type", raw_precipitation_type, x2String);
        FLOW_DATA_SEND(raw_precipitation_type, p_Storm_Data, setRaw_precipitation_type, x2String);
    }
    
}

void SMSWTD::setRaw_vibrations_distance(int p_raw_vibrations_distance) {
    if (raw_vibrations_distance != p_raw_vibrations_distance)  {
        raw_vibrations_distance = p_raw_vibrations_distance;
        FLOW_DATA_RECEIVE("raw_vibrations_distance", raw_vibrations_distance, x2String);
        FLOW_DATA_SEND(raw_vibrations_distance, p_Tsunami_Data, setRaw_vibrations_distance, x2String);
    }
}

void SMSWTD::setRaw_vibrations_intensity(int p_raw_vibrations_intensity) {
    if (raw_vibrations_intensity != p_raw_vibrations_intensity)  {
        raw_vibrations_intensity = p_raw_vibrations_intensity;
        FLOW_DATA_RECEIVE("raw_vibrations_intensity", raw_vibrations_intensity, x2String);
        FLOW_DATA_SEND(raw_vibrations_intensity, p_Tsunami_Data, setRaw_vibrations_intensity, x2String);
    }
}

void SMSWTD::setRaw_wind_direction(bool p_raw_wind_direction) {
    if (raw_wind_direction != p_raw_wind_direction) {
        raw_wind_direction = p_raw_wind_direction;
        FLOW_DATA_RECEIVE("raw_wind_direction", raw_wind_direction, x2String);
        FLOW_DATA_SEND(raw_wind_direction, p_Storm_Data, setRaw_wind_direction, x2String);
    }
    
}

void SMSWTD::setRaw_wind_speed(int p_raw_wind_speed) {
    if (raw_wind_speed != p_raw_wind_speed) {
        raw_wind_speed = p_raw_wind_speed;
        FLOW_DATA_RECEIVE("raw_wind_speed", raw_wind_speed, x2String);
        FLOW_DATA_SEND(raw_wind_speed, p_Storm_Data, setRaw_wind_speed, x2String);
    }
    
}

void SMSWTD::setStorm_probability(float p_storm_probability) {
    if (storm_probability != p_storm_probability) {
        storm_probability = p_storm_probability;
        FLOW_DATA_RECEIVE("storm_probability", storm_probability, x2String);
        FLOW_DATA_SEND(storm_probability, p_Storm_Output, setStorm_probability, x2String);
    }
    
}

void SMSWTD::setWarning_type(int p_warning_type) {
    if (warning_type != p_warning_type)  {
        warning_type = p_warning_type;
        FLOW_DATA_RECEIVE("warning_type", warning_type, x2String);
        FLOW_DATA_SEND(warning_type, p_Warning_Output, setWarning_type, x2String);
    }
}
//#]

SMSWTD::p_Storm_Input_C* SMSWTD::getP_Storm_Input(void) const {
    return (SMSWTD::p_Storm_Input_C*) &p_Storm_Input;
}

SMSWTD::p_Storm_Input_C* SMSWTD::get_p_Storm_Input(void) const {
    return (SMSWTD::p_Storm_Input_C*) &p_Storm_Input;
}

SMSWTD::p_Storm_Data_C* SMSWTD::getP_Storm_Data(void) const {
    return (SMSWTD::p_Storm_Data_C*) &p_Storm_Data;
}

SMSWTD::p_Storm_Data_C* SMSWTD::get_p_Storm_Data(void) const {
    return (SMSWTD::p_Storm_Data_C*) &p_Storm_Data;
}

SMSWTD::p_Tsunami_Data_C* SMSWTD::getP_Tsunami_Data(void) const {
    return (SMSWTD::p_Tsunami_Data_C*) &p_Tsunami_Data;
}

SMSWTD::p_Tsunami_Data_C* SMSWTD::get_p_Tsunami_Data(void) const {
    return (SMSWTD::p_Tsunami_Data_C*) &p_Tsunami_Data;
}

SMSWTD::p_Tsunami_Input_C* SMSWTD::getP_Tsunami_Input(void) const {
    return (SMSWTD::p_Tsunami_Input_C*) &p_Tsunami_Input;
}

SMSWTD::p_Tsunami_Input_C* SMSWTD::get_p_Tsunami_Input(void) const {
    return (SMSWTD::p_Tsunami_Input_C*) &p_Tsunami_Input;
}

SMSWTD::p_Warning_Output_C* SMSWTD::getP_Warning_Output(void) const {
    return (SMSWTD::p_Warning_Output_C*) &p_Warning_Output;
}

SMSWTD::p_Warning_Output_C* SMSWTD::get_p_Warning_Output(void) const {
    return (SMSWTD::p_Warning_Output_C*) &p_Warning_Output;
}

SMSWTD::p_Warning_Transfer_C* SMSWTD::getP_Warning_Transfer(void) const {
    return (SMSWTD::p_Warning_Transfer_C*) &p_Warning_Transfer;
}

SMSWTD::p_Warning_Transfer_C* SMSWTD::get_p_Warning_Transfer(void) const {
    return (SMSWTD::p_Warning_Transfer_C*) &p_Warning_Transfer;
}

SMSWTD::p_Storm_Transfer_C* SMSWTD::getP_Storm_Transfer(void) const {
    return (SMSWTD::p_Storm_Transfer_C*) &p_Storm_Transfer;
}

SMSWTD::p_Storm_Transfer_C* SMSWTD::get_p_Storm_Transfer(void) const {
    return (SMSWTD::p_Storm_Transfer_C*) &p_Storm_Transfer;
}

SMSWTD::p_Storm_Output_C* SMSWTD::getP_Storm_Output(void) const {
    return (SMSWTD::p_Storm_Output_C*) &p_Storm_Output;
}

SMSWTD::p_Storm_Output_C* SMSWTD::get_p_Storm_Output(void) const {
    return (SMSWTD::p_Storm_Output_C*) &p_Storm_Output;
}

SMSWTD::p_Tsunami_Transfer_C* SMSWTD::getP_Tsunami_Transfer(void) const {
    return (SMSWTD::p_Tsunami_Transfer_C*) &p_Tsunami_Transfer;
}

SMSWTD::p_Tsunami_Transfer_C* SMSWTD::get_p_Tsunami_Transfer(void) const {
    return (SMSWTD::p_Tsunami_Transfer_C*) &p_Tsunami_Transfer;
}

SMSWTD::p_Tsunami_Output_C* SMSWTD::getP_Tsunami_Output(void) const {
    return (SMSWTD::p_Tsunami_Output_C*) &p_Tsunami_Output;
}

SMSWTD::p_Tsunami_Output_C* SMSWTD::get_p_Tsunami_Output(void) const {
    return (SMSWTD::p_Tsunami_Output_C*) &p_Tsunami_Output;
}

const bool SMSWTD::getError_state(void) const {
    return Error_state;
}

void SMSWTD::setError_state(const bool p_Error_state) {
    Error_state = p_Error_state;
}

const SMSWTD::severity_range_enum SMSWTD::getSeverity(void) const {
    return Severity;
}

void SMSWTD::setSeverity(SMSWTD::severity_range_enum p_Severity) {
    Severity = p_Severity;
}

const bool SMSWTD::getPred_direction(void) const {
    return pred_direction;
}

const float SMSWTD::getPred_probability(void) const {
    return pred_probability;
}

const float SMSWTD::getPred_probability_ts(void) const {
    return pred_probability_ts;
}

const float SMSWTD::getPred_severity(void) const {
    return pred_severity;
}

const float SMSWTD::getPred_speed(void) const {
    return pred_speed;
}

const int SMSWTD::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

const int SMSWTD::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

const int SMSWTD::getRaw_vibrations_distance(void) const {
    return raw_vibrations_distance;
}

const int SMSWTD::getRaw_vibrations_intensity(void) const {
    return raw_vibrations_intensity;
}

const bool SMSWTD::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

const int SMSWTD::getRaw_wind_speed(void) const {
    return raw_wind_speed;
}

const float SMSWTD::getStorm_probability(void) const {
    return storm_probability;
}

const int SMSWTD::getWarning_type(void) const {
    return warning_type;
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
            done = itsActionable_Information_Generator.startBehavior();
        }
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
        itsPrediction_Module.setActiveContext(theActiveContext, false);
        itsData_Storage.setActiveContext(theActiveContext, false);
        itsActionable_Information_Generator.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD::destroy(void) {
    itsActionable_Information_Generator.destroy();
    itsData_Storage.destroy();
    itsPrediction_Module.destroy();
    OMReactive::destroy();
}

void SMSWTD::OMCreateInstances(void) {
}

void SMSWTD::OMConnectRelations(void) {
    if (get_p_Storm_Input() != NULL) {
        get_p_Storm_Input()->connectSMSWTD(this);
    }
    if (get_p_Tsunami_Input() != NULL) {
        get_p_Tsunami_Input()->connectSMSWTD(this);
    }
    if (get_p_Warning_Transfer() != NULL) {
        get_p_Warning_Transfer()->connectSMSWTD(this);
    }
    if (get_p_Storm_Transfer() != NULL) {
        get_p_Storm_Transfer()->connectSMSWTD(this);
    }
    if (get_p_Tsunami_Transfer() != NULL) {
        get_p_Tsunami_Transfer()->connectSMSWTD(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String(myReal->raw_precipitation_type));
    aomsAttributes->addAttribute("raw_vibrations_distance", x2String(myReal->raw_vibrations_distance));
    aomsAttributes->addAttribute("raw_vibrations_intensity", x2String(myReal->raw_vibrations_intensity));
    aomsAttributes->addAttribute("warning_type", x2String(myReal->warning_type));
    aomsAttributes->addAttribute("pred_direction", x2String(myReal->pred_direction));
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("pred_severity", x2String(myReal->pred_severity));
    aomsAttributes->addAttribute("pred_speed", x2String(myReal->pred_speed));
    aomsAttributes->addAttribute("storm_probability", x2String(myReal->storm_probability));
    aomsAttributes->addAttribute("pred_probability_ts", x2String(myReal->pred_probability_ts));
    aomsAttributes->addAttribute("Error_state", x2String(myReal->Error_state));
    aomsAttributes->addAttribute("Severity", x2String((int)myReal->Severity));
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
    aomsRelations->addRelation("itsData_Storage", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsData_Storage);
    aomsRelations->addRelation("itsActionable_Information_Generator", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsActionable_Information_Generator);
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
