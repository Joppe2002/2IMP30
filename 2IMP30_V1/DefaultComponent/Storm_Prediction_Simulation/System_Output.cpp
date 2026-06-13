/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: Storm_Prediction_Simulation
	Model Element	: System_Output
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\Storm_Prediction_Simulation\System_Output.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "System_Output.h"
//## link itsStorm_Prediction
#include "Storm_Prediction.h"
//## link itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//#[ ignore
#define Architecture_System_Output_get_storm_relay_data_SERIALIZE \
    aomsmethod->addAttribute("severity", x2String(severity));\
    aomsmethod->addAttribute("warned", x2String(warned));
#define Architecture_System_Output_System_Output_SERIALIZE OM_NO_OP

#define Architecture_System_Output_get_tsunami_relay_data_SERIALIZE aomsmethod->addAttribute("warned", x2String(warned));
//#]

//## package Architecture

//## class System_Output
System_Output::System_Output(IOxfActive* const theActiveContext) : OMReactive(), prev_warning_type(0), itsStorm_Prediction(NULL), itsTsunami_Prediction(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(System_Output, System_Output(), 0, Architecture_System_Output_System_Output_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

System_Output::~System_Output(void) {
    NOTIFY_DESTRUCTOR(~System_Output, true);
    cleanUpRelations();
}

void System_Output::get_storm_relay_data(float severity, bool warned) {
    NOTIFY_OPERATION(get_storm_relay_data, get_storm_relay_data(float,bool), 2, Architecture_System_Output_get_storm_relay_data_SERIALIZE);
    //#[ operation get_storm_relay_data(float,bool)
    storm_severity=severity;
    prev_warned=warned;
    //#]
}

void System_Output::get_tsunami_relay_data(bool warned) {
    NOTIFY_OPERATION(get_tsunami_relay_data, get_tsunami_relay_data(bool), 1, Architecture_System_Output_get_tsunami_relay_data_SERIALIZE);
    //#[ operation get_tsunami_relay_data(bool)
    prev_warned_ts=warned;
    //#]
}

const bool System_Output::getPrev_warned(void) const {
    return prev_warned;
}

void System_Output::setPrev_warned(const bool p_prev_warned) {
    prev_warned = p_prev_warned;
}

const int System_Output::getPrev_warned_ts(void) const {
    return prev_warned_ts;
}

void System_Output::setPrev_warned_ts(const int p_prev_warned_ts) {
    prev_warned_ts = p_prev_warned_ts;
}

const bool System_Output::getPrev_warning_ts_medium(void) const {
    return prev_warning_ts_medium;
}

void System_Output::setPrev_warning_ts_medium(const bool p_prev_warning_ts_medium) {
    prev_warning_ts_medium = p_prev_warning_ts_medium;
}

const int System_Output::getPrev_warning_type(void) const {
    return prev_warning_type;
}

void System_Output::setPrev_warning_type(const int p_prev_warning_type) {
    prev_warning_type = p_prev_warning_type;
}

const float System_Output::getStorm_severity(void) const {
    return storm_severity;
}

void System_Output::setStorm_severity(const float p_storm_severity) {
    storm_severity = p_storm_severity;
}

const Storm_Prediction* System_Output::getItsStorm_Prediction(void) const {
    return itsStorm_Prediction;
}

void System_Output::setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction) {
    if(p_Storm_Prediction != NULL)
        {
            p_Storm_Prediction->_setItsSystem_Output(this);
        }
    _setItsStorm_Prediction(p_Storm_Prediction);
}

const Tsunami_Prediction* System_Output::getItsTsunami_Prediction(void) const {
    return itsTsunami_Prediction;
}

void System_Output::setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction) {
    if(p_Tsunami_Prediction != NULL)
        {
            p_Tsunami_Prediction->_setItsSystem_Output(this);
        }
    _setItsTsunami_Prediction(p_Tsunami_Prediction);
}

bool System_Output::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void System_Output::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_1_subState = OMNonState;
    state_1_active = OMNonState;
}

void System_Output::cleanUpRelations(void) {
    if(itsStorm_Prediction != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStorm_Prediction");
            const System_Output* p_System_Output = itsStorm_Prediction->getItsSystem_Output();
            if(p_System_Output != NULL)
                {
                    itsStorm_Prediction->__setItsSystem_Output(NULL);
                }
            itsStorm_Prediction = NULL;
        }
    if(itsTsunami_Prediction != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTsunami_Prediction");
            const System_Output* p_System_Output = itsTsunami_Prediction->getItsSystem_Output();
            if(p_System_Output != NULL)
                {
                    itsTsunami_Prediction->__setItsSystem_Output(NULL);
                }
            itsTsunami_Prediction = NULL;
        }
}

void System_Output::__setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction) {
    itsStorm_Prediction = p_Storm_Prediction;
    if(p_Storm_Prediction != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStorm_Prediction", p_Storm_Prediction, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStorm_Prediction");
        }
}

void System_Output::_setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction) {
    if(itsStorm_Prediction != NULL)
        {
            itsStorm_Prediction->__setItsSystem_Output(NULL);
        }
    __setItsStorm_Prediction(p_Storm_Prediction);
}

void System_Output::_clearItsStorm_Prediction(void) {
    NOTIFY_RELATION_CLEARED("itsStorm_Prediction");
    itsStorm_Prediction = NULL;
}

void System_Output::__setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction) {
    itsTsunami_Prediction = p_Tsunami_Prediction;
    if(p_Tsunami_Prediction != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTsunami_Prediction", p_Tsunami_Prediction, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTsunami_Prediction");
        }
}

void System_Output::_setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction) {
    if(itsTsunami_Prediction != NULL)
        {
            itsTsunami_Prediction->__setItsSystem_Output(NULL);
        }
    __setItsTsunami_Prediction(p_Tsunami_Prediction);
}

void System_Output::_clearItsTsunami_Prediction(void) {
    NOTIFY_RELATION_CLEARED("itsTsunami_Prediction");
    itsTsunami_Prediction = NULL;
}

void System_Output::state_0_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_0");
    rootState_subState = state_0;
    rootState_active = state_0;
    state_1_entDef();
    state_2_entDef();
}

void System_Output::state_0_exit(void) {
    state_1_exit();
    switch (state_2_subState) {
        // State idle_tsunami
        case idle_tsunami:
        {
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.idle_tsunami");
        }
        break;
        // State high_risk_tsunami
        case high_risk_tsunami:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.high_risk_tsunami");
        }
        break;
        // State medium_risk_tsunami
        case medium_risk_tsunami:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.medium_risk_tsunami");
        }
        break;
        default:
            break;
    }
    state_2_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_2");
    
    NOTIFY_STATE_EXITED("ROOT.state_0");
}

IOxfReactive::TakeEventStatus System_Output::state_0_processEvent(void) {
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
    
    return res;
}

void System_Output::state_2_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2");
    NOTIFY_TRANSITION_STARTED("12");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.idle_tsunami");
    state_2_subState = idle_tsunami;
    state_2_active = idle_tsunami;
    NOTIFY_TRANSITION_TERMINATED("12");
}

IOxfReactive::TakeEventStatus System_Output::state_2_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_2_active) {
        // State idle_tsunami
        case idle_tsunami:
        {
            if(IS_EVENT_TYPE_OF(evHighTsunami_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.idle_tsunami");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.high_risk_tsunami");
                    pushNullTransition();
                    state_2_subState = high_risk_tsunami;
                    state_2_active = high_risk_tsunami;
                    //#[ state state_0.state_2.high_risk_tsunami.(Entry) 
                    if(!prev_warned_ts||prev_warning_ts_medium){
                    	printf("High Tsunami\n");
                    	prev_warning_ts_medium=false;
                    }
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(evMediumTsunami_Architecture_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("14");
                        NOTIFY_STATE_EXITED("ROOT.state_0.state_2.idle_tsunami");
                        NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.medium_risk_tsunami");
                        pushNullTransition();
                        state_2_subState = medium_risk_tsunami;
                        state_2_active = medium_risk_tsunami;
                        //#[ state state_0.state_2.medium_risk_tsunami.(Entry) 
                        if(!prev_warned_ts){
                        	printf("Medium Tsunami\n");
                        	prev_warning_ts_medium=true;
                        }
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("14");
                        res = eventConsumed;
                    }
                }
                
            
            
        }
        break;
        // State high_risk_tsunami
        case high_risk_tsunami:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.high_risk_tsunami");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.idle_tsunami");
                    state_2_subState = idle_tsunami;
                    state_2_active = idle_tsunami;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State medium_risk_tsunami
        case medium_risk_tsunami:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_2.medium_risk_tsunami");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.idle_tsunami");
                    state_2_subState = idle_tsunami;
                    state_2_active = idle_tsunami;
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void System_Output::state_1_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1");
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle_storm");
    state_1_subState = idle_storm;
    state_1_active = idle_storm;
    NOTIFY_TRANSITION_TERMINATED("1");
}

void System_Output::state_1_exit(void) {
    switch (state_1_subState) {
        // State idle_storm
        case idle_storm:
        {
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle_storm");
        }
        break;
        // State medium_risk
        case medium_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.medium_risk");
        }
        break;
        // State high_risk
        case high_risk:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.high_risk");
        }
        break;
        // State medium_risk_severe
        case medium_risk_severe:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.medium_risk_severe");
        }
        break;
        // State high_risk_severe
        case high_risk_severe:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.high_risk_severe");
        }
        break;
        default:
            break;
    }
    state_1_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_1");
}

IOxfReactive::TakeEventStatus System_Output::state_1_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_1_active) {
        // State idle_storm
        case idle_storm:
        {
            res = idle_storm_handleEvent();
        }
        break;
        // State medium_risk
        case medium_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.medium_risk");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle_storm");
                    state_1_subState = idle_storm;
                    state_1_active = idle_storm;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State high_risk
        case high_risk:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.high_risk");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle_storm");
                    state_1_subState = idle_storm;
                    state_1_active = idle_storm;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State medium_risk_severe
        case medium_risk_severe:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.medium_risk_severe");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle_storm");
                    state_1_subState = idle_storm;
                    state_1_active = idle_storm;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State high_risk_severe
        case high_risk_severe:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.high_risk_severe");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.idle_storm");
                    state_1_subState = idle_storm;
                    state_1_active = idle_storm;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus System_Output::idle_storm_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evHighStorm_Architecture_id) == 1)
        {
            //## transition 4 
            if(storm_severity>=4)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle_storm");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.high_risk_severe");
                    pushNullTransition();
                    state_1_subState = high_risk_severe;
                    state_1_active = high_risk_severe;
                    //#[ state state_0.state_1.high_risk_severe.(Entry) 
                    if(!prev_warned || prev_warning_type<3){
                    	printf("High severe storm, with severity %.1f\n", storm_severity);
                    	prev_warning_type=3;
                    }
                    
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle_storm");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.high_risk");
                    pushNullTransition();
                    state_1_subState = high_risk;
                    state_1_active = high_risk;
                    //#[ state state_0.state_1.high_risk.(Entry) 
                    if(!prev_warned || prev_warning_type<2){
                    	printf("High storm, with severity %.1f\n", storm_severity);
                    	prev_warning_type=2;
                    }
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    else {
        if(IS_EVENT_TYPE_OF(evMediumStorm_Architecture_id) == 1)
            {
                //## transition 6 
                if(storm_severity>=4)
                    {
                        NOTIFY_TRANSITION_STARTED("2");
                        NOTIFY_TRANSITION_STARTED("6");
                        NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle_storm");
                        NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.medium_risk_severe");
                        pushNullTransition();
                        state_1_subState = medium_risk_severe;
                        state_1_active = medium_risk_severe;
                        //#[ state state_0.state_1.medium_risk_severe.(Entry) 
                        if(!prev_warned || prev_warning_type==0 || prev_warning_type==2){
                        	printf("Medium severe storm, with severity %.1f\n", storm_severity);
                        	prev_warning_type=1;
                        }
                        
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("6");
                        NOTIFY_TRANSITION_TERMINATED("2");
                        res = eventConsumed;
                    }
                else
                    {
                        NOTIFY_TRANSITION_STARTED("2");
                        NOTIFY_TRANSITION_STARTED("7");
                        NOTIFY_STATE_EXITED("ROOT.state_0.state_1.idle_storm");
                        NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.medium_risk");
                        pushNullTransition();
                        state_1_subState = medium_risk;
                        state_1_active = medium_risk;
                        //#[ state state_0.state_1.medium_risk.(Entry) 
                        if(!prev_warned){
                        	printf("Medium storm, with severity %.1f\n", storm_severity);
                        	prev_warning_type=0;
                        }
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("7");
                        NOTIFY_TRANSITION_TERMINATED("2");
                        res = eventConsumed;
                    }
            }
        }
        
    
    
    return res;
}

void System_Output::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        state_0_entDef();
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus System_Output::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            res = state_0_processEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSystem_Output::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("storm_severity", x2String(myReal->storm_severity));
    aomsAttributes->addAttribute("prev_warning_type", x2String(myReal->prev_warning_type));
    aomsAttributes->addAttribute("prev_warned", x2String(myReal->prev_warned));
    aomsAttributes->addAttribute("prev_warned_ts", x2String(myReal->prev_warned_ts));
    aomsAttributes->addAttribute("prev_warning_ts_medium", x2String(myReal->prev_warning_ts_medium));
}

void OMAnimatedSystem_Output::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStorm_Prediction", false, true);
    if(myReal->itsStorm_Prediction)
        {
            aomsRelations->ADD_ITEM(myReal->itsStorm_Prediction);
        }
    aomsRelations->addRelation("itsTsunami_Prediction", false, true);
    if(myReal->itsTsunami_Prediction)
        {
            aomsRelations->ADD_ITEM(myReal->itsTsunami_Prediction);
        }
}

void OMAnimatedSystem_Output::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == System_Output::state_0)
        {
            state_0_serializeStates(aomsState);
        }
}

void OMAnimatedSystem_Output::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
    state_1_serializeStates(aomsState);
    state_2_serializeStates(aomsState);
}

void OMAnimatedSystem_Output::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2");
    switch (myReal->state_2_subState) {
        case System_Output::idle_tsunami:
        {
            idle_tsunami_serializeStates(aomsState);
        }
        break;
        case System_Output::high_risk_tsunami:
        {
            high_risk_tsunami_serializeStates(aomsState);
        }
        break;
        case System_Output::medium_risk_tsunami:
        {
            medium_risk_tsunami_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSystem_Output::medium_risk_tsunami_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.medium_risk_tsunami");
}

void OMAnimatedSystem_Output::idle_tsunami_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.idle_tsunami");
}

void OMAnimatedSystem_Output::high_risk_tsunami_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.high_risk_tsunami");
}

void OMAnimatedSystem_Output::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1");
    switch (myReal->state_1_subState) {
        case System_Output::idle_storm:
        {
            idle_storm_serializeStates(aomsState);
        }
        break;
        case System_Output::medium_risk:
        {
            medium_risk_serializeStates(aomsState);
        }
        break;
        case System_Output::high_risk:
        {
            high_risk_serializeStates(aomsState);
        }
        break;
        case System_Output::medium_risk_severe:
        {
            medium_risk_severe_serializeStates(aomsState);
        }
        break;
        case System_Output::high_risk_severe:
        {
            high_risk_severe_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSystem_Output::medium_risk_severe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.medium_risk_severe");
}

void OMAnimatedSystem_Output::medium_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.medium_risk");
}

void OMAnimatedSystem_Output::idle_storm_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.idle_storm");
}

void OMAnimatedSystem_Output::high_risk_severe_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.high_risk_severe");
}

void OMAnimatedSystem_Output::high_risk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.high_risk");
}
//#]

IMPLEMENT_REACTIVE_META_P(System_Output, Architecture, Architecture, false, OMAnimatedSystem_Output)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Storm_Prediction_Simulation\System_Output.cpp
*********************************************************************/
