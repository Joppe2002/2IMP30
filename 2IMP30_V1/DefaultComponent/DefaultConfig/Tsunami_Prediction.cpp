/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Sun, 14, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Tsunami_Prediction.h"
//## link itsData_Storage
#include "Data_Storage.h"
//## link itsSystem_Output
#include "System_Output.h"
//#[ ignore
#define Architecture_Tsunami_Prediction_get_Tsunami_Data_SERIALIZE \
    aomsmethod->addAttribute("distance", x2String(distance));\
    aomsmethod->addAttribute("intensity", x2String(intensity));
#define Architecture_Tsunami_Prediction_Tsunami_Prediction_SERIALIZE OM_NO_OP

#define Architecture_Tsunami_Prediction_relay_output_data_ts_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Tsunami_Prediction
Tsunami_Prediction::Tsunami_Prediction(IOxfActive* const theActiveContext) : OMReactive(), itsData_Storage(NULL), itsSystem_Output(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Tsunami_Prediction, Tsunami_Prediction(), 0, Architecture_Tsunami_Prediction_Tsunami_Prediction_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Tsunami_Prediction::~Tsunami_Prediction(void) {
    NOTIFY_DESTRUCTOR(~Tsunami_Prediction, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Tsunami_Prediction::get_Tsunami_Data(int distance, int intensity) {
    NOTIFY_OPERATION(get_Tsunami_Data, get_Tsunami_Data(int,int), 2, Architecture_Tsunami_Prediction_get_Tsunami_Data_SERIALIZE);
    //#[ operation get_Tsunami_Data(int,int)
    vibrations_distance=distance;
    vibrations_intensity=intensity;
    //#]
}

void Tsunami_Prediction::relay_output_data_ts(void) {
    NOTIFY_OPERATION(relay_output_data_ts, relay_output_data_ts(), 0, Architecture_Tsunami_Prediction_relay_output_data_ts_SERIALIZE);
    //#[ operation relay_output_data_ts()
    if(itsSystem_Output){
    itsSystem_Output->get_tsunami_relay_data(warned);
    }
    //#]
}

const bool Tsunami_Prediction::getIsErrorHandling(void) const {
    return isErrorHandling;
}

void Tsunami_Prediction::setIsErrorHandling(const bool p_isErrorHandling) {
    isErrorHandling = p_isErrorHandling;
    NOTIFY_SET_OPERATION;
}

const float Tsunami_Prediction::getPred_probability(void) const {
    return pred_probability;
}

void Tsunami_Prediction::setPred_probability(const float p_pred_probability) {
    pred_probability = p_pred_probability;
    NOTIFY_SET_OPERATION;
}

const int Tsunami_Prediction::getVibrations_distance(void) const {
    return vibrations_distance;
}

void Tsunami_Prediction::setVibrations_distance(const int p_vibrations_distance) {
    vibrations_distance = p_vibrations_distance;
}

const int Tsunami_Prediction::getVibrations_intensity(void) const {
    return vibrations_intensity;
}

void Tsunami_Prediction::setVibrations_intensity(const int p_vibrations_intensity) {
    vibrations_intensity = p_vibrations_intensity;
}

const bool Tsunami_Prediction::getWarned(void) const {
    return warned;
}

void Tsunami_Prediction::setWarned(const bool p_warned) {
    warned = p_warned;
    NOTIFY_SET_OPERATION;
}

const Data_Storage* Tsunami_Prediction::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Tsunami_Prediction::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsTsunami_Prediction(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

const System_Output* Tsunami_Prediction::getItsSystem_Output(void) const {
    return itsSystem_Output;
}

void Tsunami_Prediction::setItsSystem_Output(System_Output* const p_System_Output) {
    if(p_System_Output != NULL)
        {
            p_System_Output->_setItsTsunami_Prediction(this);
        }
    _setItsSystem_Output(p_System_Output);
}

bool Tsunami_Prediction::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_1_timeout == arg)
        {
            state_1_timeout = NULL;
            res = true;
        }
    return res;
}

bool Tsunami_Prediction::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Tsunami_Prediction::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_1_subState = OMNonState;
    state_1_active = OMNonState;
    state_1_timeout = NULL;
    ErrorHandling_subState = OMNonState;
}

void Tsunami_Prediction::cleanUpRelations(void) {
    if(itsData_Storage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
            const Tsunami_Prediction* p_Tsunami_Prediction = itsData_Storage->getItsTsunami_Prediction();
            if(p_Tsunami_Prediction != NULL)
                {
                    itsData_Storage->__setItsTsunami_Prediction(NULL);
                }
            itsData_Storage = NULL;
        }
    if(itsSystem_Output != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSystem_Output");
            const Tsunami_Prediction* p_Tsunami_Prediction = itsSystem_Output->getItsTsunami_Prediction();
            if(p_Tsunami_Prediction != NULL)
                {
                    itsSystem_Output->__setItsTsunami_Prediction(NULL);
                }
            itsSystem_Output = NULL;
        }
}

void Tsunami_Prediction::cancelTimeouts(void) {
    cancel(state_1_timeout);
}

void Tsunami_Prediction::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
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

void Tsunami_Prediction::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsTsunami_Prediction(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Tsunami_Prediction::_clearItsData_Storage(void) {
    NOTIFY_RELATION_CLEARED("itsData_Storage");
    itsData_Storage = NULL;
}

void Tsunami_Prediction::__setItsSystem_Output(System_Output* const p_System_Output) {
    itsSystem_Output = p_System_Output;
    if(p_System_Output != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSystem_Output", p_System_Output, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSystem_Output");
        }
}

void Tsunami_Prediction::_setItsSystem_Output(System_Output* const p_System_Output) {
    if(itsSystem_Output != NULL)
        {
            itsSystem_Output->__setItsTsunami_Prediction(NULL);
        }
    __setItsSystem_Output(p_System_Output);
}

void Tsunami_Prediction::_clearItsSystem_Output(void) {
    NOTIFY_RELATION_CLEARED("itsSystem_Output");
    itsSystem_Output = NULL;
}

void Tsunami_Prediction::state_0_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_0");
    rootState_subState = state_0;
    rootState_active = state_0;
    state_1_entDef();
    state_2_entDef();
}

void Tsunami_Prediction::state_0_exit(void) {
    switch (state_1_subState) {
        // State idle
        case idle:
        {
            cancel(state_1_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle");
        }
        break;
        // State prediction
        case prediction:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.prediction");
        }
        break;
        case accepttimeevent_5:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.accepttimeevent_5");
        }
        break;
        default:
            break;
    }
    state_1_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_1");
    state_2_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_0");
}

IOxfReactive::TakeEventStatus Tsunami_Prediction::state_0_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_1
        omComponentStatus = state_1_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(state_0) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_2
            omComponentStatus = state_2_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = state_0_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Tsunami_Prediction::state_0_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evErrorOccuredTs_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("12");
            state_0_exit();
            ErrorHandling_entDef();
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    
    return res;
}

void Tsunami_Prediction::state_2_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.waiting");
    state_2_subState = waiting;
    state_2_active = waiting;
    NOTIFY_TRANSITION_TERMINATED("4");
}

void Tsunami_Prediction::state_2_exit(void) {
    switch (state_2_subState) {
        // State waiting
        case waiting:
        {
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.waiting");
        }
        break;
        // State medium_risk
        case medium_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.medium_risk");
        }
        break;
        // State high_risk
        case high_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.high_risk");
        }
        break;
        // State low_risk
        case low_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.low_risk");
        }
        break;
        default:
            break;
    }
    state_2_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_2");
}

IOxfReactive::TakeEventStatus Tsunami_Prediction::state_2_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_2_active) {
        // State waiting
        case waiting:
        {
            if(IS_EVENT_TYPE_OF(evPredictionReadyTs_Architecture_id) == 1)
                {
                    //## transition 6 
                    if(pred_probability<0.6)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.waiting");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.low_risk");
                            pushNullTransition();
                            state_2_subState = low_risk;
                            state_2_active = low_risk;
                            //#[ state state_0.state_2.low_risk.(Entry) 
                            relay_output_data_ts();
                            if (itsSystem_Output != NULL) {
                                itsSystem_Output->GEN(evLowRiskTs());
                            }
                            warned=true;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 7 
                            if(pred_probability>=0.9)
                                {
                                    NOTIFY_TRANSITION_STARTED("5");
                                    NOTIFY_TRANSITION_STARTED("7");
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.waiting");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.high_risk");
                                    pushNullTransition();
                                    state_2_subState = high_risk;
                                    state_2_active = high_risk;
                                    //#[ state state_0.state_2.high_risk.(Entry) 
                                    relay_output_data_ts();
                                    itsSystem_Output->GEN(evHighTsunami());
                                    warned=true;
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("7");
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    NOTIFY_TRANSITION_STARTED("5");
                                    NOTIFY_TRANSITION_STARTED("8");
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.waiting");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.medium_risk");
                                    pushNullTransition();
                                    state_2_subState = medium_risk;
                                    state_2_active = medium_risk;
                                    //#[ state state_0.state_2.medium_risk.(Entry) 
                                    relay_output_data_ts();
                                    itsSystem_Output->GEN(evMediumTsunami());
                                    warned=true;
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("8");
                                    NOTIFY_TRANSITION_TERMINATED("5");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State medium_risk
        case medium_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.medium_risk");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.waiting");
                    state_2_subState = waiting;
                    state_2_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State high_risk
        case high_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.high_risk");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.waiting");
                    state_2_subState = waiting;
                    state_2_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("10");
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
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.low_risk");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.waiting");
                    state_2_subState = waiting;
                    state_2_active = waiting;
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

void Tsunami_Prediction::state_1_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1");
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle");
    state_1_subState = idle;
    state_1_active = idle;
    state_1_timeout = scheduleTimeout(5000, "ROOT.state_0.state_1.idle");
    NOTIFY_TRANSITION_TERMINATED("11");
}

IOxfReactive::TakeEventStatus Tsunami_Prediction::state_1_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_1_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_1_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.accepttimeevent_5");
                            pushNullTransition();
                            state_1_subState = accepttimeevent_5;
                            state_1_active = accepttimeevent_5;
                            NOTIFY_TRANSITION_TERMINATED("1");
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
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.prediction");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle");
                    state_1_subState = idle;
                    state_1_active = idle;
                    state_1_timeout = scheduleTimeout(5000, "ROOT.state_0.state_1.idle");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        case accepttimeevent_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.accepttimeevent_5");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.prediction");
                    pushNullTransition();
                    state_1_subState = prediction;
                    state_1_active = prediction;
                    //#[ state state_0.state_1.prediction.(Entry) 
                    pred_probability=(100-vibrations_distance)*vibrations_intensity*vibrations_intensity*0.000005;
                    if (pred_probability>1) pred_probability=1;
                    GEN(evPredictionReadyTs);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Tsunami_Prediction::ErrorHandling_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.ErrorHandling");
    rootState_subState = ErrorHandling;
    //#[ state ErrorHandling.(Entry) 
    printf("Tsunami Prediction Module not working");
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

IOxfReactive::TakeEventStatus Tsunami_Prediction::ErrorHandling_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evErrorHandledTs_Architecture_id) == 1)
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
            state_0_entDef();
            NOTIFY_TRANSITION_TERMINATED("13");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Tsunami_Prediction::Error_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evRepairTsPred_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("15");
            NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Error");
            NOTIFY_STATE_ENTERED("ROOT.ErrorHandling.Handled");
            ErrorHandling_subState = Handled;
            rootState_active = Handled;
            //#[ state ErrorHandling.Handled.(Entry) 
            GEN(evErrorHandledTs());
            
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

void Tsunami_Prediction::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        state_0_entDef();
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Tsunami_Prediction::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State state_0
        case state_0:
        {
            res = state_0_processEvent();
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTsunami_Prediction::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("vibrations_intensity", x2String(myReal->vibrations_intensity));
    aomsAttributes->addAttribute("vibrations_distance", x2String(myReal->vibrations_distance));
    aomsAttributes->addAttribute("warned", x2String(myReal->warned));
    aomsAttributes->addAttribute("isErrorHandling", x2String(myReal->isErrorHandling));
}

void OMAnimatedTsunami_Prediction::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsData_Storage", false, true);
    if(myReal->itsData_Storage)
        {
            aomsRelations->ADD_ITEM(myReal->itsData_Storage);
        }
    aomsRelations->addRelation("itsSystem_Output", false, true);
    if(myReal->itsSystem_Output)
        {
            aomsRelations->ADD_ITEM(myReal->itsSystem_Output);
        }
}

void OMAnimatedTsunami_Prediction::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Tsunami_Prediction::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::ErrorHandling:
        {
            ErrorHandling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTsunami_Prediction::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
    state_1_serializeStates(aomsState);
    state_2_serializeStates(aomsState);
}

void OMAnimatedTsunami_Prediction::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2");
    switch (myReal->state_2_subState) {
        case Tsunami_Prediction::waiting:
        {
            waiting_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::medium_risk:
        {
            medium_risk_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::high_risk:
        {
            high_risk_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::low_risk:
        {
            low_risk_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTsunami_Prediction::waiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.waiting");
}

void OMAnimatedTsunami_Prediction::medium_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.medium_risk");
}

void OMAnimatedTsunami_Prediction::low_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.low_risk");
}

void OMAnimatedTsunami_Prediction::high_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.high_risk");
}

void OMAnimatedTsunami_Prediction::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1");
    switch (myReal->state_1_subState) {
        case Tsunami_Prediction::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::prediction:
        {
            prediction_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::accepttimeevent_5:
        {
            accepttimeevent_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTsunami_Prediction::prediction_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.prediction");
}

void OMAnimatedTsunami_Prediction::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.idle");
}

void OMAnimatedTsunami_Prediction::accepttimeevent_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.accepttimeevent_5");
}

void OMAnimatedTsunami_Prediction::ErrorHandling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling");
    switch (myReal->ErrorHandling_subState) {
        case Tsunami_Prediction::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case Tsunami_Prediction::Handled:
        {
            Handled_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTsunami_Prediction::Handled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling.Handled");
}

void OMAnimatedTsunami_Prediction::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling.Error");
}
//#]

IMPLEMENT_REACTIVE_META_P(Tsunami_Prediction, Architecture, Architecture, false, OMAnimatedTsunami_Prediction)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.cpp
*********************************************************************/
