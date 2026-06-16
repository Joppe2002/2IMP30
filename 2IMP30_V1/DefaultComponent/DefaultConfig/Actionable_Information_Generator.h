/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Actionable_Information_Generator
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Actionable_Information_Generator.h
*********************************************************************/

#ifndef Actionable_Information_Generator_H
#define Actionable_Information_Generator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## attribute warning_message
#include "Behavior.h"
//## class p_Actionable_Information_Generator_C
#include "int_warning_type_ProxyFlowPropertyInterface.h"
//## link itsStorm_Prediction
class Storm_Prediction;

//## link itsTsunami_Prediction
class Tsunami_Prediction;

//## package Architecture

//## class Actionable_Information_Generator
class Actionable_Information_Generator : public OMReactive {
public :

//#[ ignore
    //## package Architecture
    class p_Actionable_Information_Generator_C : public int_warning_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Actionable_Information_Generator_C(void);
        
        //## auto_generated
        virtual ~p_Actionable_Information_Generator_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_warning_type_ProxyFlowPropertyInterface* getItsInt_warning_type_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_warning_type_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setWarning_type(int p_warning_type);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_warning_type_ProxyFlowPropertyInterface* itsInt_warning_type_ProxyFlowPropertyInterface;		//## link itsInt_warning_type_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedActionable_Information_Generator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Actionable_Information_Generator(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Actionable_Information_Generator(void);
    
    ////    Operations    ////
    
    //## operation get_storm_relay_data(float,bool)
    virtual void get_storm_relay_data(float severity, bool warned);
    
    //## operation get_tsunami_relay_data(bool)
    virtual void get_tsunami_relay_data(bool warned);
    
//#[ ignore
    void setWarning_type(int p_warning_type);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Actionable_Information_Generator_C* getP_Actionable_Information_Generator(void) const;
    
    //## auto_generated
    p_Actionable_Information_Generator_C* get_p_Actionable_Information_Generator(void) const;
    
    //## auto_generated
    const bool getIsErrorHandling(void) const;
    
    //## auto_generated
    void setIsErrorHandling(const bool p_isErrorHandling);
    
    //## auto_generated
    const bool getPrev_warned(void) const;
    
    //## auto_generated
    void setPrev_warned(const bool p_prev_warned);
    
    //## auto_generated
    const int getPrev_warned_ts(void) const;
    
    //## auto_generated
    void setPrev_warned_ts(const int p_prev_warned_ts);
    
    //## auto_generated
    const bool getPrev_warning_ts_high(void) const;
    
    //## auto_generated
    void setPrev_warning_ts_high(const bool p_prev_warning_ts_high);
    
    //## auto_generated
    const bool getPrev_warning_ts_medium(void) const;
    
    //## auto_generated
    void setPrev_warning_ts_medium(const bool p_prev_warning_ts_medium);
    
    //## auto_generated
    const int getPrev_warning_type(void) const;
    
    //## auto_generated
    void setPrev_warning_type(const int p_prev_warning_type);
    
    //## auto_generated
    const float getStorm_severity(void) const;
    
    //## auto_generated
    void setStorm_severity(const float p_storm_severity);
    
    //## auto_generated
    const warning_message_enum getWarning_message(void) const;
    
    //## auto_generated
    void setWarning_message(const warning_message_enum p_warning_message);
    
    //## auto_generated
    const int getWarning_type(void) const;
    
    //## auto_generated
    const Storm_Prediction* getItsStorm_Prediction(void) const;
    
    //## auto_generated
    void setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction);
    
    //## auto_generated
    const Tsunami_Prediction* getItsTsunami_Prediction(void) const;
    
    //## auto_generated
    void setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    bool isErrorHandling;		//## attribute isErrorHandling
    
    bool prev_warned;		//## attribute prev_warned
    
    int prev_warned_ts;		//## attribute prev_warned_ts
    
    bool prev_warning_ts_high;		//## attribute prev_warning_ts_high
    
    bool prev_warning_ts_medium;		//## attribute prev_warning_ts_medium
    
    int prev_warning_type;		//## attribute prev_warning_type
    
    float storm_severity;		//## attribute storm_severity
    
    warning_message_enum warning_message;		//## attribute warning_message
    
    int warning_type;		//## attribute warning_type
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Actionable_Information_Generator_C p_Actionable_Information_Generator;
//#]

    Storm_Prediction* itsStorm_Prediction;		//## link itsStorm_Prediction
    
    Tsunami_Prediction* itsTsunami_Prediction;		//## link itsTsunami_Prediction
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction);
    
    //## auto_generated
    void _setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction);
    
    //## auto_generated
    void _clearItsStorm_Prediction(void);
    
    //## auto_generated
    void __setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    void _setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    void _clearItsTsunami_Prediction(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // state_0:
    //## statechart_method
    inline RhpBoolean state_0_IN(void) const;
    
    //## statechart_method
    void state_0_entDef(void);
    
    //## statechart_method
    void state_0_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_0_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_0_handleEvent(void);
    
    // state_2:
    //## statechart_method
    inline RhpBoolean state_2_IN(void) const;
    
    //## statechart_method
    void state_2_entDef(void);
    
    //## statechart_method
    void state_2_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent(void);
    
    // medium_risk_tsunami:
    //## statechart_method
    inline RhpBoolean medium_risk_tsunami_IN(void) const;
    
    // state_2_low_risk:
    //## statechart_method
    inline RhpBoolean state_2_low_risk_IN(void) const;
    
    // idle_tsunami:
    //## statechart_method
    inline RhpBoolean idle_tsunami_IN(void) const;
    
    // high_risk_tsunami:
    //## statechart_method
    inline RhpBoolean high_risk_tsunami_IN(void) const;
    
    // state_16:
    //## statechart_method
    inline RhpBoolean state_16_IN(void) const;
    
    //## statechart_method
    void state_16_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_16_processEvent(void);
    
    // update_warning:
    //## statechart_method
    inline RhpBoolean update_warning_IN(void) const;
    
    // accepttimeevent_18:
    //## statechart_method
    inline RhpBoolean accepttimeevent_18_IN(void) const;
    
    // state_1:
    //## statechart_method
    inline RhpBoolean state_1_IN(void) const;
    
    //## statechart_method
    void state_1_entDef(void);
    
    //## statechart_method
    void state_1_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_processEvent(void);
    
    // medium_risk_severe:
    //## statechart_method
    inline RhpBoolean medium_risk_severe_IN(void) const;
    
    // medium_risk:
    //## statechart_method
    inline RhpBoolean medium_risk_IN(void) const;
    
    // low_risk:
    //## statechart_method
    inline RhpBoolean low_risk_IN(void) const;
    
    // idle_storm:
    //## statechart_method
    inline RhpBoolean idle_storm_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus idle_storm_handleEvent(void);
    
    // high_risk_severe:
    //## statechart_method
    inline RhpBoolean high_risk_severe_IN(void) const;
    
    // high_risk:
    //## statechart_method
    inline RhpBoolean high_risk_IN(void) const;
    
    // error_handling:
    //## statechart_method
    inline RhpBoolean error_handling_IN(void) const;
    
    //## statechart_method
    void error_handling_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus error_handlingTakeevErrorHandledSO(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus error_handling_handleEvent(void);
    
    // handled:
    //## statechart_method
    inline RhpBoolean handled_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus handled_handleEvent(void);
    
    // error:
    //## statechart_method
    inline RhpBoolean error_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus error_handleEvent(void);

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Actionable_Information_Generator_Enum {
        OMNonState = 0,
        state_0 = 1,
        state_2 = 2,
        medium_risk_tsunami = 3,
        state_2_low_risk = 4,
        idle_tsunami = 5,
        high_risk_tsunami = 6,
        state_16 = 7,
        update_warning = 8,
        accepttimeevent_18 = 9,
        state_1 = 10,
        medium_risk_severe = 11,
        medium_risk = 12,
        low_risk = 13,
        idle_storm = 14,
        high_risk_severe = 15,
        high_risk = 16,
        error_handling = 17,
        handled = 18,
        error = 19
    };
//#]

private :

//#[ ignore
    Actionable_Information_Generator_Enum rootState_subState;
    
    Actionable_Information_Generator_Enum rootState_active;
    
    Actionable_Information_Generator_Enum state_2_subState;
    
    Actionable_Information_Generator_Enum state_2_active;
    
    Actionable_Information_Generator_Enum state_16_subState;
    
    Actionable_Information_Generator_Enum state_16_active;
    
    IOxfTimeout* state_16_timeout;
    
    Actionable_Information_Generator_Enum state_1_subState;
    
    Actionable_Information_Generator_Enum state_1_active;
    
    Actionable_Information_Generator_Enum error_handling_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedActionable_Information_Generator : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Actionable_Information_Generator, OMAnimatedActionable_Information_Generator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void medium_risk_tsunami_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_low_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_tsunami_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void high_risk_tsunami_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_16_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void update_warning_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void medium_risk_severe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void medium_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void low_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_storm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void high_risk_severe_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void high_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void error_handling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void handled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void error_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Actionable_Information_Generator::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Actionable_Information_Generator::state_0_IN(void) const {
    return rootState_subState == state_0;
}

inline RhpBoolean Actionable_Information_Generator::state_2_IN(void) const {
    return state_0_IN();
}

inline RhpBoolean Actionable_Information_Generator::medium_risk_tsunami_IN(void) const {
    return state_2_subState == medium_risk_tsunami;
}

inline RhpBoolean Actionable_Information_Generator::state_2_low_risk_IN(void) const {
    return state_2_subState == state_2_low_risk;
}

inline RhpBoolean Actionable_Information_Generator::idle_tsunami_IN(void) const {
    return state_2_subState == idle_tsunami;
}

inline RhpBoolean Actionable_Information_Generator::high_risk_tsunami_IN(void) const {
    return state_2_subState == high_risk_tsunami;
}

inline RhpBoolean Actionable_Information_Generator::state_16_IN(void) const {
    return state_0_IN();
}

inline RhpBoolean Actionable_Information_Generator::update_warning_IN(void) const {
    return state_16_subState == update_warning;
}

inline RhpBoolean Actionable_Information_Generator::accepttimeevent_18_IN(void) const {
    return state_16_subState == accepttimeevent_18;
}

inline RhpBoolean Actionable_Information_Generator::state_1_IN(void) const {
    return state_0_IN();
}

inline RhpBoolean Actionable_Information_Generator::medium_risk_severe_IN(void) const {
    return state_1_subState == medium_risk_severe;
}

inline RhpBoolean Actionable_Information_Generator::medium_risk_IN(void) const {
    return state_1_subState == medium_risk;
}

inline RhpBoolean Actionable_Information_Generator::low_risk_IN(void) const {
    return state_1_subState == low_risk;
}

inline RhpBoolean Actionable_Information_Generator::idle_storm_IN(void) const {
    return state_1_subState == idle_storm;
}

inline RhpBoolean Actionable_Information_Generator::high_risk_severe_IN(void) const {
    return state_1_subState == high_risk_severe;
}

inline RhpBoolean Actionable_Information_Generator::high_risk_IN(void) const {
    return state_1_subState == high_risk;
}

inline RhpBoolean Actionable_Information_Generator::error_handling_IN(void) const {
    return rootState_subState == error_handling;
}

inline RhpBoolean Actionable_Information_Generator::handled_IN(void) const {
    return error_handling_subState == handled;
}

inline RhpBoolean Actionable_Information_Generator::error_IN(void) const {
    return error_handling_subState == error;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Actionable_Information_Generator.h
*********************************************************************/
