/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: Storm_Prediction_Simulation
	Model Element	: Architecture
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\Storm_Prediction_Simulation\Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Architecture.h"
//## auto_generated
#include "Data_Storage.h"
//## auto_generated
#include "Storm_Prediction.h"
//## auto_generated
#include "System_Output.h"
//## auto_generated
#include "Tsunami_Prediction.h"
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
//#]

//## package Architecture


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(Architecture, Architecture)
#endif // _OMINSTRUMENT

void Architecture_initRelations(void) {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
}
#endif // _OMINSTRUMENT

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

/*********************************************************************
	File Path	: DefaultComponent\Storm_Prediction_Simulation\Architecture.cpp
*********************************************************************/
