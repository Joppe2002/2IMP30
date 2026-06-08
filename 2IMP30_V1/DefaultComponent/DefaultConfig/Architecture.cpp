/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Mon, 8, Jun 2026  
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
//## classInstance itsSystem_Output
#include "System_Output.h"
//## classInstance itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//## classInstance itsWheather_Prediction
#include "Wheather_Prediction.h"
//## auto_generated
#include "Actionable_Information_Generator.h"
//## auto_generated
#include "Prediction_Module.h"
//#[ ignore
#define evPredictionReady_SERIALIZE OM_NO_OP

#define evPredictionReady_UNSERIALIZE OM_NO_OP

#define evPredictionReady_CONSTRUCTOR evPredictionReady()

#define evMediumStorm_SERIALIZE OM_NO_OP

#define evMediumStorm_UNSERIALIZE OM_NO_OP

#define evMediumStorm_CONSTRUCTOR evMediumStorm()

#define evHighStorm_SERIALIZE OM_NO_OP

#define evHighStorm_UNSERIALIZE OM_NO_OP

#define evHighStorm_CONSTRUCTOR evHighStorm()

#define evPredictionReadyTs_SERIALIZE OM_NO_OP

#define evPredictionReadyTs_UNSERIALIZE OM_NO_OP

#define evPredictionReadyTs_CONSTRUCTOR evPredictionReadyTs()

#define evHighTsunami_SERIALIZE OM_NO_OP

#define evHighTsunami_UNSERIALIZE OM_NO_OP

#define evHighTsunami_CONSTRUCTOR evHighTsunami()

#define evMediumTsunami_SERIALIZE OM_NO_OP

#define evMediumTsunami_UNSERIALIZE OM_NO_OP

#define evMediumTsunami_CONSTRUCTOR evMediumTsunami()
//#]

//## package Architecture


//## classInstance itsData_Storage
Data_Storage itsData_Storage;

//## classInstance itsSMSWTD
SMSWTD itsSMSWTD;

//## classInstance itsStorm_Prediction
Storm_Prediction itsStorm_Prediction;

//## classInstance itsSystem_Output
System_Output itsSystem_Output;

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
            itsTsunami_Prediction.setShouldDelete(false);
        }
        {
            itsStorm_Prediction.setShouldDelete(false);
        }
        {
            itsSystem_Output.setShouldDelete(false);
        }
    }
    itsData_Storage.setItsStorm_Prediction(&itsStorm_Prediction);
    itsStorm_Prediction.setItsSystem_Output(&itsSystem_Output);
    itsData_Storage.setItsTsunami_Prediction(&itsTsunami_Prediction);
    itsSystem_Output.setItsTsunami_Prediction(&itsTsunami_Prediction);
    {
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsInt_raw_wind_speed_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsBool_raw_wind_direction_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_1()->setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage()->getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_SMSWTD_2()->setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage_1()->getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_SMSWTD_2()->setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(itsData_Storage.get_p_Data_Storage_1()->getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface());
        
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
    if(done == true)
        {
            done = itsSystem_Output.startBehavior();
        }
    if(done == true)
        {
            done = itsTsunami_Prediction.startBehavior();
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
    OM_SET_INSTANCE_NAME(&itsSystem_Output, System_Output, "itsSystem_Output", AOMNoMultiplicity);
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

//## event evMediumStorm()
evMediumStorm::evMediumStorm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evMediumStorm)
    setId(evMediumStorm_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evMediumStorm_Architecture_id(11202);
//#]

IMPLEMENT_META_EVENT_P(evMediumStorm, Architecture, Architecture, evMediumStorm())

//## event evHighStorm()
evHighStorm::evHighStorm(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evHighStorm)
    setId(evHighStorm_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evHighStorm_Architecture_id(11203);
//#]

IMPLEMENT_META_EVENT_P(evHighStorm, Architecture, Architecture, evHighStorm())

//## event evPredictionReadyTs()
evPredictionReadyTs::evPredictionReadyTs(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evPredictionReadyTs)
    setId(evPredictionReadyTs_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evPredictionReadyTs_Architecture_id(11204);
//#]

IMPLEMENT_META_EVENT_P(evPredictionReadyTs, Architecture, Architecture, evPredictionReadyTs())

//## event evHighTsunami()
evHighTsunami::evHighTsunami(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evHighTsunami)
    setId(evHighTsunami_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evHighTsunami_Architecture_id(11205);
//#]

IMPLEMENT_META_EVENT_P(evHighTsunami, Architecture, Architecture, evHighTsunami())

//## event evMediumTsunami()
evMediumTsunami::evMediumTsunami(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evMediumTsunami)
    setId(evMediumTsunami_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evMediumTsunami_Architecture_id(11206);
//#]

IMPLEMENT_META_EVENT_P(evMediumTsunami, Architecture, Architecture, evMediumTsunami())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/
