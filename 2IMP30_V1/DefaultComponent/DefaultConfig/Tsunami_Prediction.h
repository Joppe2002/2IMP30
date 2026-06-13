/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.h
*********************************************************************/

#ifndef Tsunami_Prediction_H
#define Tsunami_Prediction_H

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
//## link itsData_Storage
class Data_Storage;

//## link itsSystem_Output
class System_Output;

//## package Architecture

//## class Tsunami_Prediction
class Tsunami_Prediction : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTsunami_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Tsunami_Prediction(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Tsunami_Prediction(void);
    
    ////    Operations    ////
    
    //## operation get_Tsunami_Data(int,int)
    virtual void get_Tsunami_Data(int distance, int intensity);
    
    //## operation relay_output_data_ts()
    virtual void relay_output_data_ts(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getPred_probability(void) const;
    
    //## auto_generated
    void setPred_probability(const float p_pred_probability);
    
    //## auto_generated
    const int getVibrations_distance(void) const;
    
    //## auto_generated
    void setVibrations_distance(const int p_vibrations_distance);
    
    //## auto_generated
    const int getVibrations_intensity(void) const;
    
    //## auto_generated
    void setVibrations_intensity(const int p_vibrations_intensity);
    
    //## auto_generated
    const bool getWarned(void) const;
    
    //## auto_generated
    void setWarned(const bool p_warned);
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    const System_Output* getItsSystem_Output(void) const;
    
    //## auto_generated
    void setItsSystem_Output(System_Output* const p_System_Output);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    float pred_probability;		//## attribute pred_probability
    
    int vibrations_distance;		//## attribute vibrations_distance
    
    int vibrations_intensity;		//## attribute vibrations_intensity
    
    bool warned;		//## attribute warned
    
    ////    Relations and components    ////
    
    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    System_Output* itsSystem_Output;		//## link itsSystem_Output
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _clearItsData_Storage(void);
    
    //## auto_generated
    void __setItsSystem_Output(System_Output* const p_System_Output);
    
    //## auto_generated
    void _setItsSystem_Output(System_Output* const p_System_Output);
    
    //## auto_generated
    void _clearItsSystem_Output(void);
    
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
    IOxfReactive::TakeEventStatus state_2_processEvent(void);
    
    // waiting:
    //## statechart_method
    inline RhpBoolean waiting_IN(void) const;
    
    // medium_risk:
    //## statechart_method
    inline RhpBoolean medium_risk_IN(void) const;
    
    // high_risk:
    //## statechart_method
    inline RhpBoolean high_risk_IN(void) const;
    
    // state_1:
    //## statechart_method
    inline RhpBoolean state_1_IN(void) const;
    
    //## statechart_method
    void state_1_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_processEvent(void);
    
    // prediction:
    //## statechart_method
    inline RhpBoolean prediction_IN(void) const;
    
    // idle:
    //## statechart_method
    inline RhpBoolean idle_IN(void) const;
    
    // accepttimeevent_5:
    //## statechart_method
    inline RhpBoolean accepttimeevent_5_IN(void) const;
    
    // ErrorHandling:
    //## statechart_method
    inline RhpBoolean ErrorHandling_IN(void) const;
    
    //## statechart_method
    void ErrorHandling_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ErrorHandling_handleEvent(void);
    
    // Handled:
    //## statechart_method
    inline RhpBoolean Handled_IN(void) const;
    
    // Error:
    //## statechart_method
    inline RhpBoolean Error_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Error_handleEvent(void);

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Tsunami_Prediction_Enum {
        OMNonState = 0,
        state_0 = 1,
        state_2 = 2,
        waiting = 3,
        medium_risk = 4,
        high_risk = 5,
        state_1 = 6,
        prediction = 7,
        idle = 8,
        accepttimeevent_5 = 9,
        ErrorHandling = 10,
        Handled = 11,
        Error = 12
    };
//#]

private :

//#[ ignore
    Tsunami_Prediction_Enum rootState_subState;
    
    Tsunami_Prediction_Enum rootState_active;
    
    Tsunami_Prediction_Enum state_2_subState;
    
    Tsunami_Prediction_Enum state_2_active;
    
    Tsunami_Prediction_Enum state_1_subState;
    
    Tsunami_Prediction_Enum state_1_active;
    
    IOxfTimeout* state_1_timeout;
    
    Tsunami_Prediction_Enum ErrorHandling_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTsunami_Prediction : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Tsunami_Prediction, OMAnimatedTsunami_Prediction)
    
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
    void waiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void medium_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void high_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void prediction_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ErrorHandling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Handled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Error_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Tsunami_Prediction::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Tsunami_Prediction::state_0_IN(void) const {
    return rootState_subState == state_0;
}

inline RhpBoolean Tsunami_Prediction::state_2_IN(void) const {
    return state_0_IN();
}

inline RhpBoolean Tsunami_Prediction::waiting_IN(void) const {
    return state_2_subState == waiting;
}

inline RhpBoolean Tsunami_Prediction::medium_risk_IN(void) const {
    return state_2_subState == medium_risk;
}

inline RhpBoolean Tsunami_Prediction::high_risk_IN(void) const {
    return state_2_subState == high_risk;
}

inline RhpBoolean Tsunami_Prediction::state_1_IN(void) const {
    return state_0_IN();
}

inline RhpBoolean Tsunami_Prediction::prediction_IN(void) const {
    return state_1_subState == prediction;
}

inline RhpBoolean Tsunami_Prediction::idle_IN(void) const {
    return state_1_subState == idle;
}

inline RhpBoolean Tsunami_Prediction::accepttimeevent_5_IN(void) const {
    return state_1_subState == accepttimeevent_5;
}

inline RhpBoolean Tsunami_Prediction::ErrorHandling_IN(void) const {
    return rootState_subState == ErrorHandling;
}

inline RhpBoolean Tsunami_Prediction::Handled_IN(void) const {
    return ErrorHandling_subState == Handled;
}

inline RhpBoolean Tsunami_Prediction::Error_IN(void) const {
    return ErrorHandling_subState == Error;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.h
*********************************************************************/
