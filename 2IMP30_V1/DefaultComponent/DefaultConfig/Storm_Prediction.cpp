/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Sun, 7, Jun 2026  
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

#define Architecture_Storm_Prediction_generateActionableInfo_SERIALIZE aomsmethod->addAttribute("Actor", x2String((int)Actor));

#define Architecture_Storm_Prediction_predictStorm_SERIALIZE OM_NO_OP

#define Architecture_Storm_Prediction_updatePredictionData_SERIALIZE OM_NO_OP

#define OMAnim_Architecture_Storm_Prediction_setTest_probability_float_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_test_probability)

#define OMAnim_Architecture_Storm_Prediction_setTest_probability_float_SERIALIZE_RET_VAL

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

Storm_Prediction::Storm_Prediction(IOxfActive* const theActiveContext) : OMReactive(), wasPredicted(false), itsData_Storage(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Storm_Prediction, Storm_Prediction(), 0, Architecture_Storm_Prediction_Storm_Prediction_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Storm_Prediction::~Storm_Prediction(void) {
    NOTIFY_DESTRUCTOR(~Storm_Prediction, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Storm_Prediction::generateActionableInfo(const ActorType& Actor) {
    NOTIFY_OPERATION(generateActionableInfo, generateActionableInfo(const ActorType&), 1, Architecture_Storm_Prediction_generateActionableInfo_SERIALIZE);
    //#[ operation generateActionableInfo(ActorType)
    if(Actor == GOVERNMENT) {
    	printf("Notify Government\n");
    } else if (Actor == EMERGENCY_RESPONDER) {
    	printf("Notify Emergency Responders\n");
    } else {
    	printf("Notify --- --- ??? --- ---\n");
    }
    
    float probability 	= this->st_pred_probability;
    float severity 		= this->st_pred_severity;
    
    
    printf("NOTIFY - STORM approaching with severity: %f, with probability: %f \n", severity, probability); 
    //#]
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
    result->pred_probability = this->test_probability;
    result->pred_severity    = (float)this->wind_direction * (float)this->precipitation_type + (float)4.0;
    result->pred_speed       = (float)this->wind_speed * (float)10.0;
    
    return result;
    //#]
}

void Storm_Prediction::updatePredictionData(void) {
    NOTIFY_OPERATION(updatePredictionData, updatePredictionData(), 0, Architecture_Storm_Prediction_updatePredictionData_SERIALIZE);
    //#[ operation updatePredictionData()
    Storm_Prediction::Storm_Prediction_Result* prediction;
    prediction = this->predictStorm();
    printf("prediction direction   = %d \n", prediction->pred_direction);
    printf("prediction probability = %f \n", prediction->pred_probability);
    printf("prediction severity    = %f \n", prediction->pred_severity);
    printf("prediction speed       = %f \n", prediction->pred_speed);
    
    this->st_pred_direction   = prediction->pred_direction;
    this->st_pred_probability = prediction->pred_probability ;
    this->st_pred_severity    = prediction->pred_severity;
    this->st_pred_speed       = prediction->pred_speed;
    //#]
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

const float Storm_Prediction::getPrev_probability(void) const {
    return prev_probability;
}

void Storm_Prediction::setPrev_probability(const float p_prev_probability) {
    prev_probability = p_prev_probability;
}

const bool Storm_Prediction::getSt_pred_direction(void) const {
    return st_pred_direction;
}

void Storm_Prediction::setSt_pred_direction(const bool p_st_pred_direction) {
    st_pred_direction = p_st_pred_direction;
}

const float Storm_Prediction::getSt_pred_probability(void) const {
    return st_pred_probability;
}

void Storm_Prediction::setSt_pred_probability(const float p_st_pred_probability) {
    st_pred_probability = p_st_pred_probability;
}

const float Storm_Prediction::getSt_pred_severity(void) const {
    return st_pred_severity;
}

void Storm_Prediction::setSt_pred_severity(const float p_st_pred_severity) {
    st_pred_severity = p_st_pred_severity;
    NOTIFY_SET_OPERATION;
}

const float Storm_Prediction::getSt_pred_speed(void) const {
    return st_pred_speed;
}

void Storm_Prediction::setSt_pred_speed(const float p_st_pred_speed) {
    st_pred_speed = p_st_pred_speed;
}

const float Storm_Prediction::getTest_probability(void) const {
    return test_probability;
}

void Storm_Prediction::setTest_probability(const float p_test_probability) {
    test_probability = p_test_probability;
    NOTIFY_SET_OPERATION;
}

const bool Storm_Prediction::getWasPredicted(void) const {
    return wasPredicted;
}

void Storm_Prediction::setWasPredicted(const bool p_wasPredicted) {
    wasPredicted = p_wasPredicted;
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
    if(state_15_timeout == arg)
        {
            state_15_timeout = NULL;
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
    state_16_subState = OMNonState;
    state_16_active = OMNonState;
    state_15_subState = OMNonState;
    state_15_active = OMNonState;
    state_15_timeout = NULL;
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
    cancel(state_15_timeout);
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

void Storm_Prediction::state_9_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_9");
    rootState_subState = state_9;
    rootState_active = state_9;
    state_15_entDef();
    state_16_entDef();
}

void Storm_Prediction::state_9_exit(void) {
    state_15_exit();
    switch (state_16_subState) {
        // State Standby
        case Standby:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.Standby");
        }
        break;
        // State MediumRisk
        case MediumRisk:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.MediumRisk");
        }
        break;
        // State HighRisk
        case HighRisk:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.HighRisk");
        }
        break;
        default:
            break;
    }
    state_16_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_9.state_16");
    
    NOTIFY_STATE_EXITED("ROOT.state_9");
}

IOxfReactive::TakeEventStatus Storm_Prediction::state_9_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_15
        omComponentStatus = state_15_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(state_9) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_16
            omComponentStatus = state_16_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    
    return res;
}

void Storm_Prediction::state_16_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_16");
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.Standby");
    state_16_subState = Standby;
    state_16_active = Standby;
    //#[ state state_9.state_16.Standby.(Entry) 
    printf("Standby - NO significant risk \n");
    
    this->wasPredicted = false;
    
    
    //#]
    NOTIFY_TRANSITION_TERMINATED("11");
}

IOxfReactive::TakeEventStatus Storm_Prediction::state_16_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_16_active) {
        // State Standby
        case Standby:
        {
            if(IS_EVENT_TYPE_OF(evPredictionReady_Architecture_id) == 1)
                {
                    //## transition 8 
                    if(st_pred_probability >= 0.6 &&  st_pred_probability < 0.9)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            NOTIFY_TRANSITION_STARTED("8");
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.Standby");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.MediumRisk");
                            state_16_subState = MediumRisk;
                            state_16_active = MediumRisk;
                            //#[ state state_9.state_16.MediumRisk.(Entry) 
                            // Governement
                            this->generateActionableInfo(GOVERNMENT);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("8");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 9 
                            if(st_pred_probability >= 0.9)
                                {
                                    NOTIFY_TRANSITION_STARTED("7");
                                    NOTIFY_TRANSITION_STARTED("9");
                                    NOTIFY_STATE_EXITED("ROOT.state_9.state_16.Standby");
                                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.HighRisk");
                                    state_16_subState = HighRisk;
                                    state_16_active = HighRisk;
                                    //#[ state state_9.state_16.HighRisk.(Entry) 
                                    // Government and Emergency Responders
                                    this->generateActionableInfo(GOVERNMENT);
                                    this->generateActionableInfo(EMERGENCY_RESPONDER);
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("9");
                                    NOTIFY_TRANSITION_TERMINATED("7");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 10 
                                    if(st_pred_probability < 0.6)
                                        {
                                            NOTIFY_TRANSITION_STARTED("7");
                                            NOTIFY_TRANSITION_STARTED("10");
                                            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.Standby");
                                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.Standby");
                                            state_16_subState = Standby;
                                            state_16_active = Standby;
                                            //#[ state state_9.state_16.Standby.(Entry) 
                                            printf("Standby - NO significant risk \n");
                                            
                                            this->wasPredicted = false;
                                            
                                            
                                            //#]
                                            NOTIFY_TRANSITION_TERMINATED("10");
                                            NOTIFY_TRANSITION_TERMINATED("7");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
            
        }
        break;
        // State MediumRisk
        case MediumRisk:
        {
            if(IS_EVENT_TYPE_OF(evPredictionReady_Architecture_id) == 1)
                {
                    //## transition 13 
                    if(st_pred_probability > prev_probability )
                        {
                            //## transition 14 
                            if(st_pred_probability < 0.9)
                                {
                                    NOTIFY_TRANSITION_STARTED("13");
                                    NOTIFY_TRANSITION_STARTED("14");
                                    NOTIFY_STATE_EXITED("ROOT.state_9.state_16.MediumRisk");
                                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.MediumRisk");
                                    state_16_subState = MediumRisk;
                                    state_16_active = MediumRisk;
                                    //#[ state state_9.state_16.MediumRisk.(Entry) 
                                    // Governement
                                    this->generateActionableInfo(GOVERNMENT);
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("14");
                                    NOTIFY_TRANSITION_TERMINATED("13");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 15 
                                    if(st_pred_probability >= 0.9)
                                        {
                                            NOTIFY_TRANSITION_STARTED("13");
                                            NOTIFY_TRANSITION_STARTED("15");
                                            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.MediumRisk");
                                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.HighRisk");
                                            state_16_subState = HighRisk;
                                            state_16_active = HighRisk;
                                            //#[ state state_9.state_16.HighRisk.(Entry) 
                                            // Government and Emergency Responders
                                            this->generateActionableInfo(GOVERNMENT);
                                            this->generateActionableInfo(EMERGENCY_RESPONDER);
                                            //#]
                                            NOTIFY_TRANSITION_TERMINATED("15");
                                            NOTIFY_TRANSITION_TERMINATED("13");
                                            res = eventConsumed;
                                        }
                                }
                        }
                    else
                        {
                            //## transition 18 
                            if(st_pred_probability < 0.6 )
                                {
                                    NOTIFY_TRANSITION_STARTED("18");
                                    NOTIFY_STATE_EXITED("ROOT.state_9.state_16.MediumRisk");
                                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.Standby");
                                    state_16_subState = Standby;
                                    state_16_active = Standby;
                                    //#[ state state_9.state_16.Standby.(Entry) 
                                    printf("Standby - NO significant risk \n");
                                    
                                    this->wasPredicted = false;
                                    
                                    
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("18");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State HighRisk
        case HighRisk:
        {
            if(IS_EVENT_TYPE_OF(evPredictionReady_Architecture_id) == 1)
                {
                    //## transition 16 
                    if(st_pred_probability >= 0.6 &&  st_pred_probability < 0.9 )
                        {
                            NOTIFY_TRANSITION_STARTED("16");
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.HighRisk");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.MediumRisk");
                            state_16_subState = MediumRisk;
                            state_16_active = MediumRisk;
                            //#[ state state_9.state_16.MediumRisk.(Entry) 
                            // Governement
                            this->generateActionableInfo(GOVERNMENT);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("16");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 17 
                            if(st_pred_probability > prev_probability)
                                {
                                    NOTIFY_TRANSITION_STARTED("17");
                                    NOTIFY_STATE_EXITED("ROOT.state_9.state_16.HighRisk");
                                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.HighRisk");
                                    state_16_subState = HighRisk;
                                    state_16_active = HighRisk;
                                    //#[ state state_9.state_16.HighRisk.(Entry) 
                                    // Government and Emergency Responders
                                    this->generateActionableInfo(GOVERNMENT);
                                    this->generateActionableInfo(EMERGENCY_RESPONDER);
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("17");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 19 
                                    if(st_pred_probability < 0.6)
                                        {
                                            NOTIFY_TRANSITION_STARTED("19");
                                            NOTIFY_STATE_EXITED("ROOT.state_9.state_16.HighRisk");
                                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_16.Standby");
                                            state_16_subState = Standby;
                                            state_16_active = Standby;
                                            //#[ state state_9.state_16.Standby.(Entry) 
                                            printf("Standby - NO significant risk \n");
                                            
                                            this->wasPredicted = false;
                                            
                                            
                                            //#]
                                            NOTIFY_TRANSITION_TERMINATED("19");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Storm_Prediction::state_15_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_15");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_15.Initial");
    state_15_subState = Initial;
    state_15_active = Initial;
    state_15_timeout = scheduleTimeout(3000, "ROOT.state_9.state_15.Initial");
    NOTIFY_TRANSITION_TERMINATED("2");
}

void Storm_Prediction::state_15_exit(void) {
    switch (state_15_subState) {
        // State StormExistancePredicted
        case StormExistancePredicted:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_15.StormExistancePredicted");
        }
        break;
        // State do_Predict_Storm
        case do_Predict_Storm:
        {
            popNullTransition();
            //#[ state state_9.state_15.do_Predict_Storm.(Exit) 
            GEN(evPredictionReady);
            printf("SEND PREDICTION\n");
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_9.state_15.do_Predict_Storm");
        }
        break;
        // State Initial
        case Initial:
        {
            cancel(state_15_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_15.Initial");
        }
        break;
        case accepttimeevent_13:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_15.accepttimeevent_13");
        }
        break;
        default:
            break;
    }
    state_15_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_15");
}

IOxfReactive::TakeEventStatus Storm_Prediction::state_15_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_15_active) {
        // State StormExistancePredicted
        case StormExistancePredicted:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_15.StormExistancePredicted");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_15.Initial");
                    state_15_subState = Initial;
                    state_15_active = Initial;
                    state_15_timeout = scheduleTimeout(3000, "ROOT.state_9.state_15.Initial");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State do_Predict_Storm
        case do_Predict_Storm:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 4 
                    if(st_pred_probability >= 0.6)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            //#[ state state_9.state_15.do_Predict_Storm.(Exit) 
                            GEN(evPredictionReady);
                            printf("SEND PREDICTION\n");
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_15.do_Predict_Storm");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_15.StormExistancePredicted");
                            pushNullTransition();
                            state_15_subState = StormExistancePredicted;
                            state_15_active = StormExistancePredicted;
                            //#[ state state_9.state_15.StormExistancePredicted.(Entry) 
                            //if(this->wasPredicted && this->prev_probability >= this->st_pred_probability){
                            //	printf("Storm Predicted - NO new notification.\n");
                            //}  else {
                            //	printf("Storm Predicted - SEND new NOTIFICATION\n");
                            //}
                            
                            //this->wasPredicted = true; 
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 5 
                            if(st_pred_probability < 0.6)
                                {
                                    NOTIFY_TRANSITION_STARTED("3");
                                    NOTIFY_TRANSITION_STARTED("5");
                                    popNullTransition();
                                    //#[ state state_9.state_15.do_Predict_Storm.(Exit) 
                                    GEN(evPredictionReady);
                                    printf("SEND PREDICTION\n");
                                    //#]
                                    NOTIFY_STATE_EXITED("ROOT.state_9.state_15.do_Predict_Storm");
                                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_15.Initial");
                                    state_15_subState = Initial;
                                    state_15_active = Initial;
                                    state_15_timeout = scheduleTimeout(3000, "ROOT.state_9.state_15.Initial");
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    NOTIFY_TRANSITION_TERMINATED("3");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State Initial
        case Initial:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_15_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(state_15_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_15.Initial");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_15.accepttimeevent_13");
                            pushNullTransition();
                            state_15_subState = accepttimeevent_13;
                            state_15_active = accepttimeevent_13;
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_15.accepttimeevent_13");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_15.do_Predict_Storm");
                    pushNullTransition();
                    state_15_subState = do_Predict_Storm;
                    state_15_active = do_Predict_Storm;
                    //#[ state state_9.state_15.do_Predict_Storm.(Entry) 
                    this->prev_probability = this->st_pred_probability;
                    
                    updatePredictionData();
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

void Storm_Prediction::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("12");
        state_9_entDef();
        NOTIFY_TRANSITION_TERMINATED("12");
    }
}

IOxfReactive::TakeEventStatus Storm_Prediction::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_9
    if(rootState_active == state_9)
        {
            res = state_9_processEvent();
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
    aomsAttributes->addAttribute("st_pred_direction", x2String(myReal->st_pred_direction));
    aomsAttributes->addAttribute("st_pred_probability", x2String(myReal->st_pred_probability));
    aomsAttributes->addAttribute("st_pred_severity", x2String(myReal->st_pred_severity));
    aomsAttributes->addAttribute("st_pred_speed", x2String(myReal->st_pred_speed));
    aomsAttributes->addAttribute("wasPredicted", x2String(myReal->wasPredicted));
    aomsAttributes->addAttribute("prev_probability", x2String(myReal->prev_probability));
    aomsAttributes->addAttribute("test_probability", x2String(myReal->test_probability));
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
    if(myReal->rootState_subState == Storm_Prediction::state_9)
        {
            state_9_serializeStates(aomsState);
        }
}

void OMAnimatedStorm_Prediction::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9");
    state_15_serializeStates(aomsState);
    state_16_serializeStates(aomsState);
}

void OMAnimatedStorm_Prediction::state_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_16");
    switch (myReal->state_16_subState) {
        case Storm_Prediction::Standby:
        {
            Standby_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::MediumRisk:
        {
            MediumRisk_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::HighRisk:
        {
            HighRisk_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::Standby_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_16.Standby");
}

void OMAnimatedStorm_Prediction::MediumRisk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_16.MediumRisk");
}

void OMAnimatedStorm_Prediction::HighRisk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_16.HighRisk");
}

void OMAnimatedStorm_Prediction::state_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_15");
    switch (myReal->state_15_subState) {
        case Storm_Prediction::StormExistancePredicted:
        {
            StormExistancePredicted_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::do_Predict_Storm:
        {
            do_Predict_Storm_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::Initial:
        {
            Initial_serializeStates(aomsState);
        }
        break;
        case Storm_Prediction::accepttimeevent_13:
        {
            accepttimeevent_13_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStorm_Prediction::StormExistancePredicted_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_15.StormExistancePredicted");
}

void OMAnimatedStorm_Prediction::Initial_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_15.Initial");
}

void OMAnimatedStorm_Prediction::do_Predict_Storm_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_15.do_Predict_Storm");
}

void OMAnimatedStorm_Prediction::accepttimeevent_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_15.accepttimeevent_13");
}

void OMAnimatedStorm_Prediction_Result::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pred_direction", x2String(myReal->pred_direction));
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("pred_severity", x2String(myReal->pred_severity));
    aomsAttributes->addAttribute("pred_speed", x2String(myReal->pred_speed));
}
//#]

IMPLEMENT_REACTIVE_META_P(Storm_Prediction, Architecture, Architecture, false, OMAnimatedStorm_Prediction)

IMPLEMENT_META_OP(OMAnimatedStorm_Prediction, Architecture_Storm_Prediction_setTest_probability_float, "setTest_probability", FALSE, "setTest_probability(float)", 1)

IMPLEMENT_OP_CALL(Architecture_Storm_Prediction_setTest_probability_float, Storm_Prediction, setTest_probability(p_test_probability), NO_OP())

IMPLEMENT_META_P(Storm_Prediction::Storm_Prediction_Result, Architecture, Architecture, false, OMAnimatedStorm_Prediction_Result)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.cpp
*********************************************************************/
