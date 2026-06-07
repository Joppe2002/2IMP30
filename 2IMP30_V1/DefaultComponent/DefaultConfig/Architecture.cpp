/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Sun, 7, Jun 2026  
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
//#[ ignore
#define evPredictionReady_SERIALIZE OM_NO_OP

#define evPredictionReady_UNSERIALIZE OM_NO_OP

#define evPredictionReady_CONSTRUCTOR evPredictionReady()
//#]

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
    {
        {
            itsSMSWTD.setShouldDelete(false);
        }
        {
            itsData_Storage.setShouldDelete(false);
        }
        {
            itsStorm_Prediction.setShouldDelete(false);
        }
    }
    itsData_Storage.setItsStorm_Prediction(&itsStorm_Prediction);
    {
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsInt_raw_wind_speed_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsBool_raw_wind_direction_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface());
        
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
    if(done == true)
        {
            done = itsStorm_Prediction.startBehavior();
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

//## event evPredictionReady()
evPredictionReady::evPredictionReady(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evPredictionReady)
    setId(evPredictionReady_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evPredictionReady_Architecture_id(11201);
//#]

IMPLEMENT_META_EVENT_P(evPredictionReady, Architecture, Architecture, evPredictionReady())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/
