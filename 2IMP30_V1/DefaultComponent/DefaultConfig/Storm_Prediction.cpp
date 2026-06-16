/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Storm_Prediction.h"
//## link itsActionable_Information_Generator
#include "Actionable_Information_Generator.h"
//## link itsData_Storage
#include "Data_Storage.h"
//#[ ignore
#define Architecture_Storm_Prediction_get_Storm_Data_SERIALIZE \
    aomsmethod->addAttribute("stored_precipitation_amount", x2String(stored_precipitation_amount));\
    aomsmethod->addAttribute("stored_precipitation_type", x2String((int)stored_precipitation_type));\
    aomsmethod->addAttribute("stored_wind_speed", x2String(stored_wind_speed));\
    aomsmethod->addAttribute("stored_wind_direction", x2String(stored_wind_direction));
#define Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE OM_NO_OP

#define Architecture_Storm_Prediction_relay_output_data_SERIALIZE OM_NO_OP

#define OMAnim_Architecture_Storm_Prediction_setStorm_probability_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_storm_probability)

#define OMAnim_Architecture_Storm_Prediction_setStorm_probability_float_SERIALIZE_RET_VAL
//#]

//## package Architecture

//## class Storm_Prediction
//#[ ignore
Storm_Prediction::p_Storm_Prediction_C::p_Storm_Prediction_C(void) : bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), _p_(0), itsBool_pred_direction_ProxyFlowPropertyInterface(NULL), itsFloat_pred_probability_ProxyFlowPropertyInterface(NULL), itsFloat_pred_severity_ProxyFlowPropertyInterface(NULL), itsFloat_pred_speed_ProxyFlowPropertyInterface(NULL), itsFloat_storm_probability_ProxyFlowPropertyInterface(NULL) {
}

Storm_Prediction::p_Storm_Prediction_C::~p_Storm_Prediction_C(void) {
    cleanUpRelations();
}

bool_pred_direction_ProxyFlowPropertyInterface* Storm_Prediction::p_Storm_Prediction_C::getItsBool_pred_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_probability_ProxyFlowPropertyInterface* Storm_Prediction::p_Storm_Prediction_C::getItsFloat_pred_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_severity_ProxyFlowPropertyInterface* Storm_Prediction::p_Storm_Prediction_C::getItsFloat_pred_severity_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_speed_ProxyFlowPropertyInterface* Storm_Prediction::p_Storm_Prediction_C::getItsFloat_pred_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

float_storm_probability_ProxyFlowPropertyInterface* Storm_Prediction::p_Storm_Prediction_C::getItsFloat_storm_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

Storm_Prediction::p_Storm_Prediction_C* Storm_Prediction::p_Storm_Prediction_C::getOutBound(void) {
    return this;
}

void Storm_Prediction::p_Storm_Prediction_C::setPred_direction(bool p_pred_direction) {
    
    if (itsBool_pred_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_pred_direction_ProxyFlowPropertyInterface->setPred_direction(p_pred_direction);
    }
    
}

void Storm_Prediction::p_Storm_Prediction_C::setPred_probability(float p_pred_probability) {
    
    if (itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ProxyFlowPropertyInterface->setPred_probability(p_pred_probability);
    }
    
}

void Storm_Prediction::p_Storm_Prediction_C::setPred_severity(float p_pred_severity) {
    
    if (itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_severity_ProxyFlowPropertyInterface->setPred_severity(p_pred_severity);
    }
    
}

void Storm_Prediction::p_Storm_Prediction_C::setPred_speed(float p_pred_speed) {
    
    if (itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_speed_ProxyFlowPropertyInterface->setPred_speed(p_pred_speed);
    }
    
}

void Storm_Prediction::p_Storm_Prediction_C::setStorm_probability(float p_storm_probability) {
    
    if (itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_storm_probability_ProxyFlowPropertyInterface->setStorm_probability(p_storm_probability);
    }
    
}

void Storm_Prediction::p_Storm_Prediction_C::setItsBool_pred_direction_ProxyFlowPropertyInterface(bool_pred_direction_ProxyFlowPropertyInterface* const p_bool_pred_direction_ProxyFlowPropertyInterface) {
    itsBool_pred_direction_ProxyFlowPropertyInterface = p_bool_pred_direction_ProxyFlowPropertyInterface;
}

void Storm_Prediction::p_Storm_Prediction_C::setItsFloat_pred_probability_ProxyFlowPropertyInterface(float_pred_probability_ProxyFlowPropertyInterface* const p_float_pred_probability_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ProxyFlowPropertyInterface = p_float_pred_probability_ProxyFlowPropertyInterface;
}

void Storm_Prediction::p_Storm_Prediction_C::setItsFloat_pred_severity_ProxyFlowPropertyInterface(float_pred_severity_ProxyFlowPropertyInterface* const p_float_pred_severity_ProxyFlowPropertyInterface) {
    itsFloat_pred_severity_ProxyFlowPropertyInterface = p_float_pred_severity_ProxyFlowPropertyInterface;
}

void Storm_Prediction::p_Storm_Prediction_C::setItsFloat_pred_speed_ProxyFlowPropertyInterface(float_pred_speed_ProxyFlowPropertyInterface* const p_float_pred_speed_ProxyFlowPropertyInterface) {
    itsFloat_pred_speed_ProxyFlowPropertyInterface = p_float_pred_speed_ProxyFlowPropertyInterface;
}

void Storm_Prediction::p_Storm_Prediction_C::setItsFloat_storm_probability_ProxyFlowPropertyInterface(float_storm_probability_ProxyFlowPropertyInterface* const p_float_storm_probability_ProxyFlowPropertyInterface) {
    itsFloat_storm_probability_ProxyFlowPropertyInterface = p_float_storm_probability_ProxyFlowPropertyInterface;
}

void Storm_Prediction::p_Storm_Prediction_C::cleanUpRelations(void) {
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
//#]

Storm_Prediction::Storm_Prediction(IOxfActive* const theActiveContext) : OMReactive(), itsActionable_Information_Generator(NULL), itsData_Storage(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Storm_Prediction, Storm_Prediction(), 0, Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
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

void Storm_Prediction::relay_output_data(void) {
    NOTIFY_OPERATION(relay_output_data, relay_output_data(), 0, Architecture_Storm_Prediction_relay_output_data_SERIALIZE);
    //#[ operation relay_output_data()
    if(itsActionable_Information_Generator){
    itsActionable_Information_Generator->get_storm_relay_data(pred_severity, warned);
    }
    
    //#]
}

//#[ ignore
void Storm_Prediction::setPred_direction(bool p_pred_direction) {
    if (pred_direction != p_pred_direction)  {
        pred_direction = p_pred_direction;
        FLOW_DATA_SEND(pred_direction, p_Storm_Prediction, setPred_direction, x2String);
    }
}

void Storm_Prediction::setPred_probability(float p_pred_probability) {
    if (pred_probability != p_pred_probability)  {
        pred_probability = p_pred_probability;
        FLOW_DATA_SEND(pred_probability, p_Storm_Prediction, setPred_probability, x2String);
    }
}

void Storm_Prediction::setPred_severity(float p_pred_severity) {
    if (pred_severity != p_pred_severity)  {
        pred_severity = p_pred_severity;
        FLOW_DATA_SEND(pred_severity, p_Storm_Prediction, setPred_severity, x2String);
    }
}

void Storm_Prediction::setPred_speed(float p_pred_speed) {
    if (pred_speed != p_pred_speed)  {
        pred_speed = p_pred_speed;
        FLOW_DATA_SEND(pred_speed, p_Storm_Prediction, setPred_speed, x2String);
    }
}

void Storm_Prediction::setStorm_probability(float p_storm_probability) {
    if (storm_probability != p_storm_probability)  {
        storm_probability = p_storm_probability;
        FLOW_DATA_SEND(storm_probability, p_Storm_Prediction, setStorm_probability, x2String);
    }
}
//#]

Storm_Prediction::p_Storm_Prediction_C* Storm_Prediction::getP_Storm_Prediction(void) const {
    return (Storm_Prediction::p_Storm_Prediction_C*) &p_Storm_Prediction;
}

Storm_Prediction::p_Storm_Prediction_C* Storm_Prediction::get_p_Storm_Prediction(void) const {
    return (Storm_Prediction::p_Storm_Prediction_C*) &p_Storm_Prediction;
}

const bool Storm_Prediction::getSMS_info(void) const {
    return SMS_info;
}

void Storm_Prediction::setSMS_info(const bool p_SMS_info) {
    SMS_info = p_SMS_info;
    NOTIFY_SET_OPERATION;
}

const bool Storm_Prediction::getApp_info(void) const {
    return app_info;
}

void Storm_Prediction::setApp_info(const bool p_app_info) {
    app_info = p_app_info;
    NOTIFY_SET_OPERATION;
}

const bool Storm_Prediction::getGovernment_info(void) const {
    return government_info;
}

void Storm_Prediction::setGovernment_info(const bool p_government_info) {
    government_info = p_government_info;
    NOTIFY_SET_OPERATION;
}

const bool Storm_Prediction::getIsErrorHandling(void) const {
    return isErrorHandling;
}

void Storm_Prediction::setIsErrorHandling(const bool p_isErrorHandling) {
    isErrorHandling = p_isErrorHandling;
    NOTIFY_SET_OPERATION;
}

const bool Storm_Prediction::getNews_info(void) const {
    return news_info;
}

void Storm_Prediction::setNews_info(const bool p_news_info) {
    news_info = p_news_info;
    NOTIFY_SET_OPERATION;
}

const int Storm_Prediction::getPrecipitation_amount(void) const {
    return precipitation_amount;
}

void Storm_Prediction::setPrecipitation_amount(const int p_precipitation_amount) {
    precipitation_amount = p_precipitation_amount;
}

const precipitation_type_enum Storm_Prediction::getPrecipitation_type(void) const {
    return precipitation_type;
}

void Storm_Prediction::setPrecipitation_type(const precipitation_type_enum p_precipitation_type) {
    precipitation_type = p_precipitation_type;
}

const bool Storm_Prediction::getPred_direction(void) const {
    return pred_direction;
}

const float Storm_Prediction::getPred_probability(void) const {
    return pred_probability;
}

const float Storm_Prediction::getPred_severity(void) const {
    return pred_severity;
}

const float Storm_Prediction::getPred_speed(void) const {
    return pred_speed;
}

const float Storm_Prediction::getStorm_probability(void) const {
    return storm_probability;
}

const bool Storm_Prediction::getWarned(void) const {
    return warned;
}

void Storm_Prediction::setWarned(const bool p_warned) {
    warned = p_warned;
    NOTIFY_SET_OPERATION;
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

const Actionable_Information_Generator* Storm_Prediction::getItsActionable_Information_Generator(void) const {
    return itsActionable_Information_Generator;
}

void Storm_Prediction::setItsActionable_Information_Generator(Actionable_Information_Generator* const p_Actionable_Information_Generator) {
    if(p_Actionable_Information_Generator != NULL)
        {
            p_Actionable_Information_Generator->_setItsStorm_Prediction(this);
        }
    _setItsActionable_Information_Generator(p_Actionable_Information_Generator);
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
    if(state_6_timeout == arg)
        {
            state_6_timeout = NULL;
            res = true;
        }
    return res;
}

bool Storm_Prediction::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Storm_Prediction::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Storm_Prediction::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_7_subState = OMNonState;
    state_7_active = OMNonState;
    state_6_subState = OMNonState;
    state_6_active = OMNonState;
    state_6_timeout = NULL;
    ErrorHandling_subState = OMNonState;
}

void Storm_Prediction::cleanUpRelations(void) {
    if(itsActionable_Information_Generator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsActionable_Information_Generator");
            const Storm_Prediction* p_Storm_Prediction = itsActionable_Information_Generator->getItsStorm_Prediction();
            if(p_Storm_Prediction != NULL)
                {
                    itsActionable_Information_Generator->__setItsStorm_Prediction(NULL);
                }
            itsActionable_Information_Generator = NULL;
        }
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
    cancel(state_6_timeout);
}

void Storm_Prediction::__setItsActionable_Information_Generator(Actionable_Information_Generator* const p_Actionable_Information_Generator) {
    itsActionable_Information_Generator = p_Actionable_Information_Generator;
    if(p_Actionable_Information_Generator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsActionable_Information_Generator", p_Actionable_Information_Generator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsActionable_Information_Generator");
        }
}

void Storm_Prediction::_setItsActionable_Information_Generator(Actionable_Information_Generator* const p_Actionable_Information_Generator) {
    if(itsActionable_Information_Generator != NULL)
        {
            itsActionable_Information_Generator->__setItsStorm_Prediction(NULL);
        }
    __setItsActionable_Information_Generator(p_Actionable_Information_Generator);
}

void Storm_Prediction::_clearItsActionable_Information_Generator(void) {
    NOTIFY_RELATION_CLEARED("itsActionable_Information_Generator");
    itsActionable_Information_Generator = NULL;
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

void Storm_Prediction::normal_operation_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.normal_operation");
    rootState_subState = normal_operation;
    rootState_active = normal_operation;
    state_6_entDef();
    state_7_entDef();
}

void Storm_Prediction::normal_operation_exit(void) {
    switch (state_6_subState) {
        // State idle
        case idle:
        {
            cancel(state_6_timeout);
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6.idle");
        }
        break;
        // State prediction
        case prediction:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6.prediction");
        }
        break;
        case accepttimeevent_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6.accepttimeevent_2");
        }
        break;
        default:
            break;
    }
    state_6_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6");
    state_7_exit();
    
    NOTIFY_STATE_EXITED("ROOT.normal_operation");
}

IOxfReactive::TakeEventStatus Storm_Prediction::normal_operation_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_6
        omComponentStatus = state_6_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(normal_operation) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_7
            omComponentStatus = state_7_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = normal_operation_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Storm_Prediction::normal_operation_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evErrorOccuredSt_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("12");
            normal_operation_exit();
            ErrorHandling_entDef();
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    
    return res;
}

void Storm_Prediction::state_7_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.waiting");
    state_7_subState = waiting;
    state_7_active = waiting;
    NOTIFY_TRANSITION_TERMINATED("8");
}

void Storm_Prediction::state_7_exit(void) {
    switch (state_7_subState) {
        // State waiting
        case waiting:
        {
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.waiting");
        }
        break;
        // State medium_risk
        case medium_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.medium_risk");
        }
        break;
        // State high_risk
        case high_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.high_risk");
        }
        break;
        // State low_risk
        case low_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.low_risk");
        }
        break;
        default:
            break;
    }
    state_7_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7");
}

IOxfReactive::TakeEventStatus Storm_Prediction::state_7_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_7_active) {
        // State waiting
        case waiting:
        {
            res = waiting_handleEvent();
        }
        break;
        // State medium_risk
        case medium_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.medium_risk");
                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.waiting");
                    state_7_subState = waiting;
                    state_7_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State high_risk
        case high_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.high_risk");
                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.waiting");
                    state_7_subState = waiting;
                    state_7_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State low_risk
        case low_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.low_risk");
                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.waiting");
                    state_7_subState = waiting;
                    state_7_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Storm_Prediction::waiting_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evPredictionReady_Architecture_id) == 1)
        {
            //## transition 6 
            if(pred_probability >=0.9 && pred_direction == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.waiting");
                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.high_risk");
                    pushNullTransition();
                    state_7_subState = high_risk;
                    state_7_active = high_risk;
                    //#[ state normal_operation.state_7.high_risk.(Entry) 
                    relay_output_data();
                    if (itsActionable_Information_Generator){
                    itsActionable_Information_Generator->GEN(evHighStorm());
                    }
                    warned=true;
                    
                    government_info = true;
                    news_info = true;
                    SMS_info = true;
                    app_info = true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 9 
                    if(pred_probability < 0.6 || pred_direction == 0)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("9");
                            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.waiting");
                            NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.low_risk");
                            pushNullTransition();
                            state_7_subState = low_risk;
                            state_7_active = low_risk;
                            //#[ state normal_operation.state_7.low_risk.(Entry) 
                            relay_output_data();
                            if (itsActionable_Information_Generator) {
                            itsActionable_Information_Generator->GEN(evLowRiskSt());
                            }
                            warned=false;
                            
                            government_info = false;
                            news_info = false;
                            SMS_info = false;
                            app_info = false;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("9");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 10 
                            if(pred_probability >= 0.6 && pred_probability < 0.9 && pred_direction == 1)
                                {
                                    NOTIFY_TRANSITION_STARTED("5");
                                    NOTIFY_TRANSITION_STARTED("10");
                                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_7.waiting");
                                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_7.medium_risk");
                                    pushNullTransition();
                                    state_7_subState = medium_risk;
                                    state_7_active = medium_risk;
                                    //#[ state normal_operation.state_7.medium_risk.(Entry) 
                                    relay_output_data();
                                    if (itsActionable_Information_Generator){
                                    itsActionable_Information_Generator->GEN(evMediumStorm());
                                    }
                                    warned=true;
                                    
                                    government_info = true;
                                    news_info = false;
                                    SMS_info = false;
                                    app_info = false;
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("10");
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    res = eventConsumed;
                                }
                        }
                }
        }
    
    
    return res;
}

void Storm_Prediction::state_6_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_6");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_6.idle");
    state_6_subState = idle;
    state_6_active = idle;
    state_6_timeout = scheduleTimeout(5000, "ROOT.normal_operation.state_6.idle");
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus Storm_Prediction::state_6_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_6_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_6_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(state_6_timeout);
                            NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6.idle");
                            NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_6.accepttimeevent_2");
                            pushNullTransition();
                            state_6_subState = accepttimeevent_2;
                            state_6_active = accepttimeevent_2;
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State prediction
        case prediction:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6.prediction");
                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_6.idle");
                    state_6_subState = idle;
                    state_6_active = idle;
                    state_6_timeout = scheduleTimeout(5000, "ROOT.normal_operation.state_6.idle");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        case accepttimeevent_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.normal_operation.state_6.accepttimeevent_2");
                    NOTIFY_STATE_ENTERED("ROOT.normal_operation.state_6.prediction");
                    pushNullTransition();
                    state_6_subState = prediction;
                    state_6_active = prediction;
                    //#[ state normal_operation.state_6.prediction.(Entry) 
                    pred_direction = wind_direction;
                    pred_probability = storm_probability;
                    pred_severity = (precipitation_amount+ wind_speed) /40;
                    pred_speed = wind_speed *0.8f;
                    
                    GEN(evPredictionReady);
                    
                    //printf("direction = %d \n", pred_direction);
                    //printf("probability = %f \n", pred_probability);
                    //printf("severity = %f \n", pred_severity);
                    //printf("speed = %f \n", pred_speed);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Storm_Prediction::ErrorHandling_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.ErrorHandling");
    rootState_subState = ErrorHandling;
    //#[ state ErrorHandling.(Entry) 
    printf("Storm Prediction module not working");
    //#]
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.ErrorHandling.Error");
    ErrorHandling_subState = Error;
    rootState_active = Error;
    //#[ state ErrorHandling.Error.(Entry) 
    isErrorHandling = true;
    //#]
    NOTIFY_TRANSITION_TERMINATED("14");
}

IOxfReactive::TakeEventStatus Storm_Prediction::ErrorHandling_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evErrorHandledSt_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("13");
            switch (ErrorHandling_subState) {
                // State Error
                case Error:
                {
                    NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Error");
                }
                break;
                // State Handled
                case Handled:
                {
                    NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Handled");
                }
                break;
                default:
                    break;
            }
            ErrorHandling_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.ErrorHandling");
            normal_operation_entDef();
            NOTIFY_TRANSITION_TERMINATED("13");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Storm_Prediction::Error_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evRepairStPred_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("15");
            NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Error");
            NOTIFY_STATE_ENTERED("ROOT.ErrorHandling.Handled");
            ErrorHandling_subState = Handled;
            rootState_active = Handled;
            //#[ state ErrorHandling.Handled.(Entry) 
            GEN(evErrorHandledSt());
            
            isErrorHandling = false;
            //#]
            NOTIFY_TRANSITION_TERMINATED("15");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = ErrorHandling_handleEvent();
        }
    return res;
}

void Storm_Prediction::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("4");
        normal_operation_entDef();
        NOTIFY_TRANSITION_TERMINATED("4");
    }
}

IOxfReactive::TakeEventStatus Storm_Prediction::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State normal_operation
        case normal_operation:
        {
            res = normal_operation_processEvent();
        }
        break;
        // State Error
        case Error:
        {
            res = Error_handleEvent();
        }
        break;
        // State Handled
        case Handled:
        {
            res = ErrorHandling_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Storm_Prediction::OMCreateInstances(void) {
}

void Storm_Prediction::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStorm_Prediction::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("precipitation_type", x2String((int)myReal->precipitation_type));
    aomsAttributes->addAttribute("precipitation_amount", x2String(myReal->precipitation_amount));
    aomsAttributes->addAttribute("wind_direction", x2String(myReal->wind_direction));
    aomsAttributes->addAttribute("wind_speed", x2String(myReal->wind_speed));
    aomsAttributes->addAttribute("pred_direction", x2String(myReal->pred_direction));
    aomsAttributes->addAttribute("pred_severity", x2String(myReal->pred_severity));
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("pred_speed", x2String(myReal->pred_speed));
    aomsAttributes->addAttribute("storm_probability", x2String(myReal->storm_probability));
    aomsAttributes->addAttribute("warned", x2String(myReal->warned));
    aomsAttributes->addAttribute("isErrorHandling", x2String(myReal->isErrorHandling));
    aomsAttributes->addAttribute("government_info", x2String(myReal->government_info));
    aomsAttributes->addAttribute("news_info", x2String(myReal->news_info));
    aomsAttributes->addAttribute("app_info", x2String(myReal->app_info));
    aomsAttributes->addAttribute("SMS_info", x2String(myReal->SMS_info));
}

void OMAnimatedStorm_Prediction::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsData_Storage", false, true);
    if(myReal->itsData_Storage)
        {
            aomsRelations->ADD_ITEM(myReal->itsData_Storage);
        }
    aomsRelations->addRelation("itsActionable_Information_Generator", false, true);
    if(myReal->itsActionable_Information_Generator)
        {
            aomsRelations->ADD_ITEM(myReal->itsActionable_Information_Generator);
        }
}

void OMAnimatedStorm_Prediction::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Storm_Prediction::normal_operation:
        {
            normal_operation_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::ErrorHandling:
        {
            ErrorHandling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::normal_operation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation");
    state_6_serializeStates(aomsState);
    state_7_serializeStates(aomsState);
}

void OMAnimatedStorm_Prediction::state_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_7");
    switch (myReal->state_7_subState) {
        case Storm_Prediction::waiting:
        {
            waiting_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::medium_risk:
        {
            medium_risk_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::high_risk:
        {
            high_risk_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::low_risk:
        {
            low_risk_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::waiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_7.waiting");
}

void OMAnimatedStorm_Prediction::medium_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_7.medium_risk");
}

void OMAnimatedStorm_Prediction::low_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_7.low_risk");
}

void OMAnimatedStorm_Prediction::high_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_7.high_risk");
}

void OMAnimatedStorm_Prediction::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_6");
    switch (myReal->state_6_subState) {
        case Storm_Prediction::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::prediction:
        {
            prediction_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::accepttimeevent_2:
        {
            accepttimeevent_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::prediction_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_6.prediction");
}

void OMAnimatedStorm_Prediction::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_6.idle");
}

void OMAnimatedStorm_Prediction::accepttimeevent_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.normal_operation.state_6.accepttimeevent_2");
}

void OMAnimatedStorm_Prediction::ErrorHandling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling");
    switch (myReal->ErrorHandling_subState) {
        case Storm_Prediction::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::Handled:
        {
            Handled_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::Handled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling.Handled");
}

void OMAnimatedStorm_Prediction::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling.Error");
}
//#]

IMPLEMENT_REACTIVE_META_P(Storm_Prediction, Architecture, Architecture, false, OMAnimatedStorm_Prediction)

IMPLEMENT_META_OP(OMAnimatedStorm_Prediction, Architecture_Storm_Prediction_setStorm_probability_float, "setStorm_probability", FALSE, "setStorm_probability(float)", 1)

IMPLEMENT_OP_CALL(Architecture_Storm_Prediction_setStorm_probability_float, Storm_Prediction, setStorm_probability(p_storm_probability), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/
