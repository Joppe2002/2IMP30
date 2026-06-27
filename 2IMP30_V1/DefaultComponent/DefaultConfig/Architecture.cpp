/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Architecture.h"
//## classInstance itsActionable_Information_Generator
#include "Actionable_Information_Generator.h"
//## classInstance itsData_Storage
#include "Data_Storage.h"
//## classInstance itsEmergencyResponder_Channels
#include "EmergencyResponder_Channels.h"
//## classInstance itsSMSWTD
#include "SMSWTD.h"
//## classInstance itsStorm_Prediction
#include "Storm_Prediction.h"
//## classInstance itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//## classInstance itsWheather_Prediction
#include "Wheather_Prediction.h"
//## classInstance itsGovernment_Networks
#include "Government_Networks.h"
//## classInstance itsMobile_Apps
#include "Mobile_Apps.h"
//## classInstance itsNews_Outlets
#include "News_Outlets.h"
//## auto_generated
#include "Prediction_Module.h"
//## classInstance itsSMS_Signaling
#include "SMS_Signaling.h"
//## classInstance itsSMSWTD
#include "SystemContext.h"
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

#define evErrorOccuredSt_SERIALIZE OM_NO_OP

#define evErrorOccuredSt_UNSERIALIZE OM_NO_OP

#define evErrorOccuredSt_CONSTRUCTOR evErrorOccuredSt()

#define evErrorHandledSt_SERIALIZE OM_NO_OP

#define evErrorHandledSt_UNSERIALIZE OM_NO_OP

#define evErrorHandledSt_CONSTRUCTOR evErrorHandledSt()

#define evErrorOccuredTs_SERIALIZE OM_NO_OP

#define evErrorOccuredTs_UNSERIALIZE OM_NO_OP

#define evErrorOccuredTs_CONSTRUCTOR evErrorOccuredTs()

#define evErrorHandledTs_SERIALIZE OM_NO_OP

#define evErrorHandledTs_UNSERIALIZE OM_NO_OP

#define evErrorHandledTs_CONSTRUCTOR evErrorHandledTs()

#define evRepairTsPred_SERIALIZE OM_NO_OP

#define evRepairTsPred_UNSERIALIZE OM_NO_OP

#define evRepairTsPred_CONSTRUCTOR evRepairTsPred()

#define evRepairStPred_SERIALIZE OM_NO_OP

#define evRepairStPred_UNSERIALIZE OM_NO_OP

#define evRepairStPred_CONSTRUCTOR evRepairStPred()

#define evErrorOccuredDS_SERIALIZE OM_NO_OP

#define evErrorOccuredDS_UNSERIALIZE OM_NO_OP

#define evErrorOccuredDS_CONSTRUCTOR evErrorOccuredDS()

#define evErrorHandledDS_SERIALIZE OM_NO_OP

#define evErrorHandledDS_UNSERIALIZE OM_NO_OP

#define evErrorHandledDS_CONSTRUCTOR evErrorHandledDS()

#define evRepairDS_SERIALIZE OM_NO_OP

#define evRepairDS_UNSERIALIZE OM_NO_OP

#define evRepairDS_CONSTRUCTOR evRepairDS()

#define evLowRiskTs_SERIALIZE OM_NO_OP

#define evLowRiskTs_UNSERIALIZE OM_NO_OP

#define evLowRiskTs_CONSTRUCTOR evLowRiskTs()

#define evLowRiskSt_SERIALIZE OM_NO_OP

#define evLowRiskSt_UNSERIALIZE OM_NO_OP

#define evLowRiskSt_CONSTRUCTOR evLowRiskSt()

#define evErrorOccuredSO_SERIALIZE OM_NO_OP

#define evErrorOccuredSO_UNSERIALIZE OM_NO_OP

#define evErrorOccuredSO_CONSTRUCTOR evErrorOccuredSO()

#define evErrorHandledSO_SERIALIZE OM_NO_OP

#define evErrorHandledSO_UNSERIALIZE OM_NO_OP

#define evErrorHandledSO_CONSTRUCTOR evErrorHandledSO()

#define evRepairSO_SERIALIZE OM_NO_OP

#define evRepairSO_UNSERIALIZE OM_NO_OP

#define evRepairSO_CONSTRUCTOR evRepairSO()
//#]

//## package Architecture


//## classInstance itsActionable_Information_Generator
Actionable_Information_Generator itsActionable_Information_Generator;

//## classInstance itsData_Storage
Data_Storage itsData_Storage;

//## classInstance itsEmergencyResponder_Channels
EmergencyResponder_Channels itsEmergencyResponder_Channels;

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
        {
            itsTsunami_Prediction.setShouldDelete(false);
        }
        {
            itsStorm_Prediction.setShouldDelete(false);
        }
        {
            itsActionable_Information_Generator.setShouldDelete(false);
        }
    }
}

void Architecture_OMConnectRelations(void) {
    itsData_Storage.setItsStorm_Prediction(&itsStorm_Prediction);
    itsStorm_Prediction.setItsActionable_Information_Generator(&itsActionable_Information_Generator);
    itsData_Storage.setItsTsunami_Prediction(&itsTsunami_Prediction);
    itsActionable_Information_Generator.setItsTsunami_Prediction(&itsTsunami_Prediction);
    {
        
        itsSMSWTD.get_p_Warning_Output()->setItsInt_warning_type_ProxyFlowPropertyInterface(itsEmergencyResponder_Channels.get_p_EmergencyResponder_Channels()->getItsInt_warning_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Warning_Output()->setItsInt_warning_type_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Government_Networks()->getItsInt_warning_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Warning_Output()->setItsInt_warning_type_ProxyFlowPropertyInterface(itsMobile_Apps.get_p_Warning_Input()->getItsInt_warning_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Warning_Output()->setItsInt_warning_type_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_News_Outlets()->getItsInt_warning_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Warning_Output()->setItsInt_warning_type_ProxyFlowPropertyInterface(itsSMS_Signaling.get_p_Warning_Input()->getItsInt_warning_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Storm_Output()->setItsBool_pred_direction_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Storm_Input()->getItsBool_pred_direction_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_pred_severity_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Storm_Input()->getItsFloat_pred_severity_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_pred_probability_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Storm_Input()->getItsFloat_pred_probability_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_pred_speed_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Storm_Input()->getItsFloat_pred_speed_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_storm_probability_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Storm_Input()->getItsFloat_storm_probability_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Storm_Output()->setItsBool_pred_direction_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_Storm_Input()->getItsBool_pred_direction_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_pred_severity_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_Storm_Input()->getItsFloat_pred_severity_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_pred_probability_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_Storm_Input()->getItsFloat_pred_probability_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_pred_speed_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_Storm_Input()->getItsFloat_pred_speed_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Output()->setItsFloat_storm_probability_ProxyFlowPropertyInterface(itsNews_Outlets.get_p_Storm_Input()->getItsFloat_storm_probability_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Tsunami_Output()->setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(itsGovernment_Networks.get_p_Tsunami_Storm()->getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsTsunami_Prediction.get_p_Tsunami_Prediction()->setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Tsunami_Transfer()->getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Storm_Data()->setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Input()->getItsInt_raw_wind_speed_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Data()->setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Input()->getItsBool_raw_wind_direction_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Data()->setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Input()->getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Storm_Data()->setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(itsData_Storage.get_p_Storm_Input()->getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsSMSWTD.get_p_Tsunami_Data()->setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(itsData_Storage.get_p_Tsunami_Input()->getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_p_Tsunami_Data()->setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(itsData_Storage.get_p_Tsunami_Input()->getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsActionable_Information_Generator.get_p_Actionable_Information_Generator()->setItsInt_warning_type_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Warning_Transfer()->getItsInt_warning_type_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsStorm_Prediction.get_p_Storm_Prediction()->setItsBool_pred_direction_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Transfer()->getItsBool_pred_direction_ProxyFlowPropertyInterface());
        
        itsStorm_Prediction.get_p_Storm_Prediction()->setItsFloat_pred_severity_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Transfer()->getItsFloat_pred_severity_ProxyFlowPropertyInterface());
        
        itsStorm_Prediction.get_p_Storm_Prediction()->setItsFloat_pred_probability_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Transfer()->getItsFloat_pred_probability_ProxyFlowPropertyInterface());
        
        itsStorm_Prediction.get_p_Storm_Prediction()->setItsFloat_pred_speed_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Transfer()->getItsFloat_pred_speed_ProxyFlowPropertyInterface());
        
        itsStorm_Prediction.get_p_Storm_Prediction()->setItsFloat_storm_probability_ProxyFlowPropertyInterface(itsSMSWTD.get_p_Storm_Transfer()->getItsFloat_storm_probability_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Architecture_startBehavior(void) {
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
            done = itsSMSWTD.startBehavior();
        }
    if(done == true)
        {
            done = itsStorm_Prediction.startBehavior();
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
    OM_SET_INSTANCE_NAME(&itsActionable_Information_Generator, Actionable_Information_Generator, "itsActionable_Information_Generator", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsEmergencyResponder_Channels, EmergencyResponder_Channels, "itsEmergencyResponder_Channels", AOMNoMultiplicity);
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

//## event evErrorOccuredSt()
evErrorOccuredSt::evErrorOccuredSt(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorOccuredSt)
    setId(evErrorOccuredSt_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorOccuredSt_Architecture_id(11207);
//#]

IMPLEMENT_META_EVENT_P(evErrorOccuredSt, Architecture, Architecture, evErrorOccuredSt())

//## event evErrorHandledSt()
evErrorHandledSt::evErrorHandledSt(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorHandledSt)
    setId(evErrorHandledSt_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorHandledSt_Architecture_id(11208);
//#]

IMPLEMENT_META_EVENT_P(evErrorHandledSt, Architecture, Architecture, evErrorHandledSt())

//## event evErrorOccuredTs()
evErrorOccuredTs::evErrorOccuredTs(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorOccuredTs)
    setId(evErrorOccuredTs_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorOccuredTs_Architecture_id(11209);
//#]

IMPLEMENT_META_EVENT_P(evErrorOccuredTs, Architecture, Architecture, evErrorOccuredTs())

//## event evErrorHandledTs()
evErrorHandledTs::evErrorHandledTs(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorHandledTs)
    setId(evErrorHandledTs_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorHandledTs_Architecture_id(11210);
//#]

IMPLEMENT_META_EVENT_P(evErrorHandledTs, Architecture, Architecture, evErrorHandledTs())

//## event evRepairTsPred()
evRepairTsPred::evRepairTsPred(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evRepairTsPred)
    setId(evRepairTsPred_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evRepairTsPred_Architecture_id(11211);
//#]

IMPLEMENT_META_EVENT_P(evRepairTsPred, Architecture, Architecture, evRepairTsPred())

//## event evRepairStPred()
evRepairStPred::evRepairStPred(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evRepairStPred)
    setId(evRepairStPred_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evRepairStPred_Architecture_id(11212);
//#]

IMPLEMENT_META_EVENT_P(evRepairStPred, Architecture, Architecture, evRepairStPred())

//## event evErrorOccuredDS()
evErrorOccuredDS::evErrorOccuredDS(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorOccuredDS)
    setId(evErrorOccuredDS_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorOccuredDS_Architecture_id(11213);
//#]

IMPLEMENT_META_EVENT_P(evErrorOccuredDS, Architecture, Architecture, evErrorOccuredDS())

//## event evErrorHandledDS()
evErrorHandledDS::evErrorHandledDS(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorHandledDS)
    setId(evErrorHandledDS_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorHandledDS_Architecture_id(11214);
//#]

IMPLEMENT_META_EVENT_P(evErrorHandledDS, Architecture, Architecture, evErrorHandledDS())

//## event evRepairDS()
evRepairDS::evRepairDS(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evRepairDS)
    setId(evRepairDS_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evRepairDS_Architecture_id(11215);
//#]

IMPLEMENT_META_EVENT_P(evRepairDS, Architecture, Architecture, evRepairDS())

//## event evLowRiskTs()
evLowRiskTs::evLowRiskTs(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evLowRiskTs)
    setId(evLowRiskTs_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evLowRiskTs_Architecture_id(11216);
//#]

IMPLEMENT_META_EVENT_P(evLowRiskTs, Architecture, Architecture, evLowRiskTs())

//## event evLowRiskSt()
evLowRiskSt::evLowRiskSt(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evLowRiskSt)
    setId(evLowRiskSt_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evLowRiskSt_Architecture_id(11217);
//#]

IMPLEMENT_META_EVENT_P(evLowRiskSt, Architecture, Architecture, evLowRiskSt())

//## event evErrorOccuredSO()
evErrorOccuredSO::evErrorOccuredSO(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorOccuredSO)
    setId(evErrorOccuredSO_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorOccuredSO_Architecture_id(11218);
//#]

IMPLEMENT_META_EVENT_P(evErrorOccuredSO, Architecture, Architecture, evErrorOccuredSO())

//## event evErrorHandledSO()
evErrorHandledSO::evErrorHandledSO(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evErrorHandledSO)
    setId(evErrorHandledSO_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evErrorHandledSO_Architecture_id(11219);
//#]

IMPLEMENT_META_EVENT_P(evErrorHandledSO, Architecture, Architecture, evErrorHandledSO())

//## event evRepairSO()
evRepairSO::evRepairSO(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evRepairSO)
    setId(evRepairSO_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evRepairSO_Architecture_id(11220);
//#]

IMPLEMENT_META_EVENT_P(evRepairSO, Architecture, Architecture, evRepairSO())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/
