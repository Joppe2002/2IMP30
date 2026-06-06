/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Storm_Prediction.h"
//## link itsData_Storage
#include "Data_Storage.h"
//#[ ignore
#define Architecture_Storm_Prediction_get_Storm_Data_SERIALIZE \
    aomsmethod->addAttribute("stored_precipitation_amount", x2String(stored_precipitation_amount));\
    aomsmethod->addAttribute("stored_precipitation_type", x2String((int)stored_precipitation_type));\
    aomsmethod->addAttribute("stored_wind_speed", x2String(stored_wind_speed));\
    aomsmethod->addAttribute("stored_wind_direction", x2String(stored_wind_direction));
#define Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE OM_NO_OP

#define Architecture_Storm_Prediction_predictStorm_SERIALIZE OM_NO_OP

#define Architecture_Storm_Prediction_Storm_Prediction_Result_Storm_Prediction_Result_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Storm_Prediction
//## class Storm_Prediction::Storm_Prediction_Result
Storm_Prediction::Storm_Prediction_Result::Storm_Prediction_Result(void) {
    NOTIFY_CONSTRUCTOR(Storm_Prediction_Result, Storm_Prediction_Result(), 0, Architecture_Storm_Prediction_Storm_Prediction_Result_Storm_Prediction_Result_SERIALIZE);
}

Storm_Prediction::Storm_Prediction_Result::~Storm_Prediction_Result(void) {
    NOTIFY_DESTRUCTOR(~Storm_Prediction_Result, true);
}

const bool Storm_Prediction::Storm_Prediction_Result::getPred_direction(void) const {
    return pred_direction;
}

void Storm_Prediction::Storm_Prediction_Result::setPred_direction(const bool p_pred_direction) {
    pred_direction = p_pred_direction;
}

const float Storm_Prediction::Storm_Prediction_Result::getPred_probability(void) const {
    return pred_probability;
}

void Storm_Prediction::Storm_Prediction_Result::setPred_probability(const float p_pred_probability) {
    pred_probability = p_pred_probability;
}

const float Storm_Prediction::Storm_Prediction_Result::getPred_severity(void) const {
    return pred_severity;
}

void Storm_Prediction::Storm_Prediction_Result::setPred_severity(const float p_pred_severity) {
    pred_severity = p_pred_severity;
}

const float Storm_Prediction::Storm_Prediction_Result::getPred_speed(void) const {
    return pred_speed;
}

void Storm_Prediction::Storm_Prediction_Result::setPred_speed(const float p_pred_speed) {
    pred_speed = p_pred_speed;
}

Storm_Prediction::Storm_Prediction(IOxfActive* const theActiveContext) : OMReactive(), itsData_Storage(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Storm_Prediction, Storm_Prediction(), 0, Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Storm_Prediction::~Storm_Prediction(void) {
    NOTIFY_DESTRUCTOR(~Storm_Prediction, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Storm_Prediction::get_Storm_Data(int stored_precipitation_amount, const precipitation_type_enum& stored_precipitation_type, int stored_wind_speed, bool stored_wind_direction) {
    NOTIFY_OPERATION(get_Storm_Data, get_Storm_Data(int,const precipitation_type_enum&,int,bool), 4, Architecture_Storm_Prediction_get_Storm_Data_SERIALIZE);
    //#[ operation get_Storm_Data(int,precipitation_type_enum,int,bool)
    precipitation_amount = stored_precipitation_amount;
    precipitation_type = stored_precipitation_type;
    wind_speed = stored_wind_speed;
    wind_direction = stored_wind_direction;
    //#]
}

Storm_Prediction::Storm_Prediction_Result* Storm_Prediction::predictStorm(void) {
    NOTIFY_OPERATION(predictStorm, predictStorm(), 0, Architecture_Storm_Prediction_predictStorm_SERIALIZE);
    //#[ operation predictStorm()
    printf("Do prediction \n");
    
    Storm_Prediction::Storm_Prediction_Result* result = new Storm_Prediction::Storm_Prediction_Result();
    result->pred_direction   = this->wind_direction;
    result->pred_probability = (float)rand() / (float)RAND_MAX;
    result->pred_severity    = (float)this->wind_direction * (float)this->precipitation_type + (float)4.0;
    result->pred_speed       = (float)this->wind_speed * (float)10.0;
    
    return result;
    //#]
}

const int Storm_Prediction::getPrecipitation_amount(void) const {
    return precipitation_amount;
}

void Storm_Prediction::setPrecipitation_amount(const int p_precipitation_amount) {
    precipitation_amount = p_precipitation_amount;
    NOTIFY_SET_OPERATION;
}

const precipitation_type_enum Storm_Prediction::getPrecipitation_type(void) const {
    return precipitation_type;
}

void Storm_Prediction::setPrecipitation_type(const precipitation_type_enum p_precipitation_type) {
    precipitation_type = p_precipitation_type;
}

const bool Storm_Prediction::getWind_direction(void) const {
    return wind_direction;
}

void Storm_Prediction::setWind_direction(const bool p_wind_direction) {
    wind_direction = p_wind_direction;
}

const int Storm_Prediction::getWind_speed(void) const {
    return wind_speed;
}

void Storm_Prediction::setWind_speed(const int p_wind_speed) {
    wind_speed = p_wind_speed;
}

const Data_Storage* Storm_Prediction::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Storm_Prediction::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsStorm_Prediction(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

bool Storm_Prediction::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool Storm_Prediction::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Storm_Prediction::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Storm_Prediction::cleanUpRelations(void) {
    if(itsData_Storage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
            const Storm_Prediction* p_Storm_Prediction = itsData_Storage->getItsStorm_Prediction();
            if(p_Storm_Prediction != NULL)
                {
                    itsData_Storage->__setItsStorm_Prediction(NULL);
                }
            itsData_Storage = NULL;
        }
}

void Storm_Prediction::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void Storm_Prediction::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
    itsData_Storage = p_Data_Storage;
    if(p_Data_Storage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsData_Storage", p_Data_Storage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
        }
}

void Storm_Prediction::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsStorm_Prediction(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Storm_Prediction::_clearItsData_Storage(void) {
    NOTIFY_RELATION_CLEARED("itsData_Storage");
    itsData_Storage = NULL;
}

void Storm_Prediction::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        rootState_timeout = scheduleTimeout(5000, "ROOT.Idle");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Storm_Prediction::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Idle");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_3");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_3;
                            rootState_active = accepttimeevent_3;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case accepttimeevent_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_3");
                    NOTIFY_STATE_ENTERED("ROOT.PredictStorm");
                    pushNullTransition();
                    rootState_subState = PredictStorm;
                    rootState_active = PredictStorm;
                    //#[ state PredictStorm.(Entry) 
                    Storm_Prediction::Storm_Prediction_Result* prediction;
                    prediction = this->predictStorm();
                    printf("prediction direction   = %d \n", prediction->pred_direction);
                    printf("prediction probability = %f \n", prediction->pred_probability);
                    printf("prediction severity    = %f \n", prediction->pred_severity);
                    printf("prediction speed 	   = %f \n", prediction->pred_speed);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State PredictStorm
        case PredictStorm:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.PredictStorm");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    rootState_timeout = scheduleTimeout(5000, "ROOT.Idle");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStorm_Prediction::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("precipitation_type", x2String((int)myReal->precipitation_type));
    aomsAttributes->addAttribute("precipitation_amount", x2String(myReal->precipitation_amount));
    aomsAttributes->addAttribute("wind_direction", x2String(myReal->wind_direction));
    aomsAttributes->addAttribute("wind_speed", x2String(myReal->wind_speed));
}

void OMAnimatedStorm_Prediction::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsData_Storage", false, true);
    if(myReal->itsData_Storage)
        {
            aomsRelations->ADD_ITEM(myReal->itsData_Storage);
        }
}

void OMAnimatedStorm_Prediction::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Storm_Prediction::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::accepttimeevent_3:
        {
            accepttimeevent_3_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::PredictStorm:
        {
            PredictStorm_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::PredictStorm_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PredictStorm");
}

void OMAnimatedStorm_Prediction::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedStorm_Prediction::accepttimeevent_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_3");
}

void OMAnimatedStorm_Prediction_Result::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pred_direction", x2String(myReal->pred_direction));
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("pred_severity", x2String(myReal->pred_severity));
    aomsAttributes->addAttribute("pred_speed", x2String(myReal->pred_speed));
}
//#]

IMPLEMENT_REACTIVE_META_P(Storm_Prediction, Architecture, Architecture, false, OMAnimatedStorm_Prediction)

IMPLEMENT_META_P(Storm_Prediction::Storm_Prediction_Result, Architecture, Architecture, false, OMAnimatedStorm_Prediction_Result)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/
