/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Architecture.h"
//## classInstance itsData_Storage
#include "Data_Storage.h"
//## classInstance itsSMSWTD
#include "SMSWTD.h"
//## classInstance itsStorm_Prediction
#include "Storm_Prediction.h"
//## classInstance itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//## classInstance itsWheather_Prediction
#include "Wheather_Prediction.h"
//## auto_generated
#include "Actionable_Information_Generator.h"
//## auto_generated
#include "Prediction_Module.h"
//## auto_generated
#include "System_Output.h"
//## package Architecture


//## classInstance itsData_Storage
Data_Storage itsData_Storage;

//## classInstance itsSMSWTD
SMSWTD itsSMSWTD;

//## classInstance itsStorm_Prediction
Storm_Prediction itsStorm_Prediction;

//## classInstance itsTsunami_Prediction
Tsunami_Prediction itsTsunami_Prediction;

//## classInstance itsWheather_Prediction
Wheather_Prediction itsWheather_Prediction;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(Architecture, Architecture)
#endif // _OMINSTRUMENT

void Architecture_initRelations(void) {
    Architecture_OMCreateInstances();
    Architecture_OMConnectRelations();
}

void Architecture_OMCreateInstances(void) {
    {
        {
            itsSMSWTD.setShouldDelete(false);
        }
        {
            itsData_Storage.setShouldDelete(false);
        }
    }
}

void Architecture_OMConnectRelations(void) {
    {
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_storm_altitude_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_storm_diameter_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_storm_latitude_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_storm_longitude_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_wind_direction_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Data()->getItsInt_raw_wind_speed_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_SMSWTD_3()->setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(itsData_Storage.get_p_Tsunami_Data()->getItsBool_raw_flowDirection_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_3()->setItsInt_raw_pressure_ProxyFlowPropertyInterface(itsData_Storage.get_p_Tsunami_Data()->getItsInt_raw_pressure_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_3()->setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(itsData_Storage.get_p_Tsunami_Data()->getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_3()->setItsInt_raw_vibrations_ProxyFlowPropertyInterface(itsData_Storage.get_p_Tsunami_Data()->getItsInt_raw_vibrations_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsData_Storage.get_p_Data_Storage()->setItsInt_flowDirection_ProxyFlowPropertyInterface(itsTsunami_Prediction.get_p_Tsunami_Prediction()->getItsInt_flowDirection_ProxyFlowPropertyInterface());
        
        itsData_Storage.get_p_Data_Storage()->setItsInt_pressure_ProxyFlowPropertyInterface(itsTsunami_Prediction.get_p_Tsunami_Prediction()->getItsInt_pressure_ProxyFlowPropertyInterface());
        
        itsData_Storage.get_p_Data_Storage()->setItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(itsTsunami_Prediction.get_p_Tsunami_Prediction()->getItsInt_tectonicPlate_location_ProxyFlowPropertyInterface());
        
        itsData_Storage.get_p_Data_Storage()->setItsInt_vibrations_ProxyFlowPropertyInterface(itsTsunami_Prediction.get_p_Tsunami_Prediction()->getItsInt_vibrations_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Architecture_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsData_Storage.startBehavior();
        }
    if(done == true)
        {
            done = itsSMSWTD.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSMSWTD, SMSWTD, "itsSMSWTD", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsData_Storage, Data_Storage, "itsData_Storage", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTsunami_Prediction, Tsunami_Prediction, "itsTsunami_Prediction", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWheather_Prediction, Wheather_Prediction, "itsWheather_Prediction", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStorm_Prediction, Storm_Prediction, "itsStorm_Prediction", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Architecture_OMInitializer::Architecture_OMInitializer(void) {
    Architecture_initRelations();
    (void) Architecture_startBehavior();
}

Architecture_OMInitializer::~Architecture_OMInitializer(void) {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/
