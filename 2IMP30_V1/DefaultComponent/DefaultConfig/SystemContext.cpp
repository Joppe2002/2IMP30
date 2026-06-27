/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SystemContext
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\SystemContext.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SystemContext.h"
//## classInstance itsGovernment_Networks
#include "Government_Networks.h"
//## classInstance itsMobile_Apps
#include "Mobile_Apps.h"
//## classInstance itsNews_Outlets
#include "News_Outlets.h"
//## classInstance itsSMS_Signaling
#include "SMS_Signaling.h"
//## classInstance itsStorm_Sensors
#include "Storm_Sensors.h"
//## classInstance itsTsunami_Sensors
#include "Tsunami_Sensors.h"
//## auto_generated
#include "Aircraft_Sensors.h"
//## auto_generated
#include "Cultural_and_Geological_Differences.h"
//## auto_generated
#include "EmergencyResponder_Channels.h"
//## auto_generated
#include "Flow_Direction_Detector.h"
//## auto_generated
#include "Information_Channels.h"
//## auto_generated
#include "Pressure_Sensor.h"
//## auto_generated
#include "Satellite_Imagery.h"
//## auto_generated
#include "Seabed_Sensors.h"
//## classInstance itsSMSWTD
#include "SMSWTD.h"
//## auto_generated
#include "Standards_and_Regulations.h"
//## classInstance itsStorm_Sensors
#include "Architecture.h"
//## auto_generated
#include "Underwater_Sensors.h"
//## package SystemContext


//## classInstance itsGovernment_Networks
Government_Networks itsGovernment_Networks;

//## classInstance itsMobile_Apps
Mobile_Apps itsMobile_Apps;

//## classInstance itsNews_Outlets
News_Outlets itsNews_Outlets;

//## classInstance itsSMS_Signaling
SMS_Signaling itsSMS_Signaling;

//## classInstance itsStorm_Sensors
Storm_Sensors itsStorm_Sensors;

//## classInstance itsTsunami_Sensors
Tsunami_Sensors itsTsunami_Sensors;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SystemContext, SystemContext)
#endif // _OMINSTRUMENT

void SystemContext_initRelations(void) {
    SystemContext_OMCreateInstances();
    SystemContext_OMConnectRelations();
}

void SystemContext_OMCreateInstances(void) {
}

void SystemContext_OMConnectRelations(void) {
    {
        
        itsStorm_Sensors.get_p_Storm_Sensors()->setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Input()->getItsInt_raw_wind_speed_ProxyFlowPropertyInterface());
        
        itsStorm_Sensors.get_p_Storm_Sensors()->setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Input()->getItsBool_raw_wind_direction_ProxyFlowPropertyInterface());
        
        itsStorm_Sensors.get_p_Storm_Sensors()->setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Input()->getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface());
        
        itsStorm_Sensors.get_p_Storm_Sensors()->setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Input()->getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsTsunami_Sensors.get_p_Tsunami_Sensors()->setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Tsunami_Input()->getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface());
        
        itsTsunami_Sensors.get_p_Tsunami_Sensors()->setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Tsunami_Input()->getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Tsunami_Output()->setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_Tsunami_Input()->getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsStorm_Sensors, Storm_Sensors, "itsStorm_Sensors", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTsunami_Sensors, Tsunami_Sensors, "itsTsunami_Sensors", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsGovernment_Networks, Government_Networks, "itsGovernment_Networks", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMobile_Apps, Mobile_Apps, "itsMobile_Apps", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNews_Outlets, News_Outlets, "itsNews_Outlets", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSMS_Signaling, SMS_Signaling, "itsSMS_Signaling", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SystemContext.cpp
*********************************************************************/
