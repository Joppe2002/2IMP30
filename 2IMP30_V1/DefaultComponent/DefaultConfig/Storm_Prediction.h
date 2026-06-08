/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/

#ifndef Storm_Prediction_H
#define Storm_Prediction_H

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
//## operation get_Storm_Data(int,precipitation_type_enum,int,bool)
#include "Behavior.h"
//## link itsData_Storage
class Data_Storage;

//#[ ignore
#define OMAnim_Architecture_Storm_Prediction_setStorm_probability_float_ARGS_DECLARATION float p_storm_probability;
//#]

//## package Architecture

//## class Storm_Prediction
class Storm_Prediction : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStorm_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Storm_Prediction(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Storm_Prediction(void);
    
    ////    Operations    ////
    
    //## operation get_Storm_Data(int,precipitation_type_enum,int,bool)
    virtual void get_Storm_Data(int stored_precipitation_amount, const precipitation_type_enum& stored_precipitation_type, int stored_wind_speed, bool stored_wind_direction);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getPrecipitation_amount(void) const;
    
    //## auto_generated
    void setPrecipitation_amount(const int p_precipitation_amount);
    
    //## auto_generated
    const precipitation_type_enum getPrecipitation_type(void) const;
    
    //## auto_generated
    void setPrecipitation_type(const precipitation_type_enum p_precipitation_type);
    
    //## auto_generated
    const bool getPred_direction(void) const;
    
    //## auto_generated
    void setPred_direction(const bool p_pred_direction);
    
    //## auto_generated
    const float getPred_probability(void) const;
    
    //## auto_generated
    void setPred_probability(const float p_pred_probability);
    
    //## auto_generated
    const int getPred_severity(void) const;
    
    //## auto_generated
    void setPred_severity(const int p_pred_severity);
    
    //## auto_generated
    const float getPred_speed(void) const;
    
    //## auto_generated
    void setPred_speed(const float p_pred_speed);
    
    //## auto_generated
    const float getStorm_probability(void) const;
    
    //## auto_generated
    void setStorm_probability(const float p_storm_probability);
    
    //## auto_generated
    const int getStorm_risk(void) const;
    
    //## auto_generated
    void setStorm_risk(const int p_storm_risk);
    
    //## auto_generated
    const bool getWind_direction(void) const;
    
    //## auto_generated
    void setWind_direction(const bool p_wind_direction);
    
    //## auto_generated
    const int getWind_speed(void) const;
    
    //## auto_generated
    void setWind_speed(const int p_wind_speed);
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);
    
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

    int precipitation_amount;		//## attribute precipitation_amount
    
    precipitation_type_enum precipitation_type;		//## attribute precipitation_type
    
    bool pred_direction;		//## attribute pred_direction
    
    float pred_probability;		//## attribute pred_probability
    
    int pred_severity;		//## attribute pred_severity
    
    float pred_speed;		//## attribute pred_speed
    
    float storm_probability;		//## attribute storm_probability
    
    int storm_risk;		//## attribute storm_risk
    
    bool wind_direction;		//## attribute wind_direction
    
    int wind_speed;		//## attribute wind_speed
    
    ////    Relations and components    ////
    
    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _clearItsData_Storage(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // normal_operation:
    //## statechart_method
    inline RhpBoolean normal_operation_IN(void) const;
    
    //## statechart_method
    void normal_operation_entDef(void);
    
    //## statechart_method
    void normal_operation_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus normal_operation_processEvent(void);
    
    // state_7:
    //## statechart_method
    inline RhpBoolean state_7_IN(void) const;
    
    //## statechart_method
    void state_7_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent(void);
    
    // waiting:
    //## statechart_method
    inline RhpBoolean waiting_IN(void) const;
    
    // medium_risk:
    //## statechart_method
    inline RhpBoolean medium_risk_IN(void) const;
    
    // high_risk:
    //## statechart_method
    inline RhpBoolean high_risk_IN(void) const;
    
    // state_6:
    //## statechart_method
    inline RhpBoolean state_6_IN(void) const;
    
    //## statechart_method
    void state_6_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_processEvent(void);
    
    // prediction:
    //## statechart_method
    inline RhpBoolean prediction_IN(void) const;
    
    // idle:
    //## statechart_method
    inline RhpBoolean idle_IN(void) const;
    
    // accepttimeevent_2:
    //## statechart_method
    inline RhpBoolean accepttimeevent_2_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Storm_Prediction_Enum {
        OMNonState = 0,
        normal_operation = 1,
        state_7 = 2,
        waiting = 3,
        medium_risk = 4,
        high_risk = 5,
        state_6 = 6,
        prediction = 7,
        idle = 8,
        accepttimeevent_2 = 9
    };
//#]

private :

//#[ ignore
    Storm_Prediction_Enum rootState_subState;
    
    Storm_Prediction_Enum rootState_active;
    
    Storm_Prediction_Enum state_7_subState;
    
    Storm_Prediction_Enum state_7_active;
    
    Storm_Prediction_Enum state_6_subState;
    
    Storm_Prediction_Enum state_6_active;
    
    IOxfTimeout* state_6_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Architecture_Storm_Prediction_setStorm_probability_float)

//#[ ignore
class OMAnimatedStorm_Prediction : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Storm_Prediction, OMAnimatedStorm_Prediction)
    
    DECLARE_META_OP(Architecture_Storm_Prediction_setStorm_probability_float)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void normal_operation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void medium_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void high_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void prediction_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_2_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Storm_Prediction::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Storm_Prediction::normal_operation_IN(void) const {
    return rootState_subState == normal_operation;
}

inline RhpBoolean Storm_Prediction::state_7_IN(void) const {
    return normal_operation_IN();
}

inline RhpBoolean Storm_Prediction::waiting_IN(void) const {
    return state_7_subState == waiting;
}

inline RhpBoolean Storm_Prediction::medium_risk_IN(void) const {
    return state_7_subState == medium_risk;
}

inline RhpBoolean Storm_Prediction::high_risk_IN(void) const {
    return state_7_subState == high_risk;
}

inline RhpBoolean Storm_Prediction::state_6_IN(void) const {
    return normal_operation_IN();
}

inline RhpBoolean Storm_Prediction::prediction_IN(void) const {
    return state_6_subState == prediction;
}

inline RhpBoolean Storm_Prediction::idle_IN(void) const {
    return state_6_subState == idle;
}

inline RhpBoolean Storm_Prediction::accepttimeevent_2_IN(void) const {
    return state_6_subState == accepttimeevent_2;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/
