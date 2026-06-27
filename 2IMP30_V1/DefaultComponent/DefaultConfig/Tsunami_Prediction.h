/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Sat, 27, Jun 2026  
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
//## class p_Tsunami_Prediction_C
#include "float_pred_probability_ts_ProxyFlowPropertyInterface.h"
//## link itsActionable_Information_Generator
class Actionable_Information_Generator;

//## link itsData_Storage
class Data_Storage;

//## package Architecture

//## class Tsunami_Prediction
class Tsunami_Prediction : public OMReactive {
public :

//#[ ignore
    //## package Architecture
    class p_Tsunami_Prediction_C : public float_pred_probability_ts_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Prediction_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Prediction_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        float_pred_probability_ts_ProxyFlowPropertyInterface* getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_pred_probability_ts_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setPred_probability_ts(float p_pred_probability_ts);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(float_pred_probability_ts_ProxyFlowPropertyInterface* const p_float_pred_probability_ts_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        float_pred_probability_ts_ProxyFlowPropertyInterface* itsFloat_pred_probability_ts_ProxyFlowPropertyInterface;		//## link itsFloat_pred_probability_ts_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
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
    
//#[ ignore
    void setPred_probability_ts(float p_pred_probability_ts);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Tsunami_Prediction_C* getP_Tsunami_Prediction(void) const;
    
    //## auto_generated
    p_Tsunami_Prediction_C* get_p_Tsunami_Prediction(void) const;
    
    //## auto_generated
    const bool getSMS_info(void) const;
    
    //## auto_generated
    void setSMS_info(const bool p_SMS_info);
    
    //## auto_generated
    const bool getApp_info(void) const;
    
    //## auto_generated
    void setApp_info(const bool p_app_info);
    
    //## auto_generated
    const bool getEmergencyResponders_info(void) const;
    
    //## auto_generated
    void setEmergencyResponders_info(const bool p_emergencyResponders_info);
    
    //## auto_generated
    const bool getGovernment_info(void) const;
    
    //## auto_generated
    void setGovernment_info(const bool p_government_info);
    
    //## auto_generated
    const bool getIsErrorHandling(void) const;
    
    //## auto_generated
    void setIsErrorHandling(const bool p_isErrorHandling);
    
    //## auto_generated
    const bool getNews_info(void) const;
    
    //## auto_generated
    void setNews_info(const bool p_news_info);
    
    //## auto_generated
    const float getPred_probability_ts(void) const;
    
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
    const Actionable_Information_Generator* getItsActionable_Information_Generator(void) const;
    
    //## auto_generated
    void setItsActionable_Information_Generator(Actionable_Information_Generator* const p_Actionable_Information_Generator);
    
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
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    bool SMS_info;		//## attribute SMS_info
    
    bool app_info;		//## attribute app_info
    
    bool emergencyResponders_info;		//## attribute emergencyResponders_info
    
    bool government_info;		//## attribute government_info
    
    bool isErrorHandling;		//## attribute isErrorHandling
    
    bool news_info;		//## attribute news_info
    
    float pred_probability_ts;		//## attribute pred_probability_ts
    
    int vibrations_distance;		//## attribute vibrations_distance
    
    int vibrations_intensity;		//## attribute vibrations_intensity
    
    bool warned;		//## attribute warned
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Tsunami_Prediction_C p_Tsunami_Prediction;
//#]

    Actionable_Information_Generator* itsActionable_Information_Generator;		//## link itsActionable_Information_Generator
    
    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsActionable_Information_Generator(Actionable_Information_Generator* const p_Actionable_Information_Generator);
    
    //## auto_generated
    void _setItsActionable_Information_Generator(Actionable_Information_Generator* const p_Actionable_Information_Generator);
    
    //## auto_generated
    void _clearItsActionable_Information_Generator(void);
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus normal_operation_handleEvent(void);
    
    // state_2:
    //## statechart_method
    inline RhpBoolean state_2_IN(void) const;
    
    //## statechart_method
    void state_2_entDef(void);
    
    //## statechart_method
    void state_2_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent(void);
    
    // waiting:
    //## statechart_method
    inline RhpBoolean waiting_IN(void) const;
    
    // medium_risk:
    //## statechart_method
    inline RhpBoolean medium_risk_IN(void) const;
    
    // low_risk:
    //## statechart_method
    inline RhpBoolean low_risk_IN(void) const;
    
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
    
    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Tsunami_Prediction_Enum {
        OMNonState = 0,
        normal_operation = 1,
        state_2 = 2,
        waiting = 3,
        medium_risk = 4,
        low_risk = 5,
        high_risk = 6,
        state_1 = 7,
        prediction = 8,
        idle = 9,
        accepttimeevent_5 = 10,
        ErrorHandling = 11,
        Handled = 12,
        Error = 13
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
    void normal_operation_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void medium_risk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void low_risk_serializeStates(AOMSState* aomsState) const;
    
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

inline RhpBoolean Tsunami_Prediction::normal_operation_IN(void) const {
    return rootState_subState == normal_operation;
}

inline RhpBoolean Tsunami_Prediction::state_2_IN(void) const {
    return normal_operation_IN();
}

inline RhpBoolean Tsunami_Prediction::waiting_IN(void) const {
    return state_2_subState == waiting;
}

inline RhpBoolean Tsunami_Prediction::medium_risk_IN(void) const {
    return state_2_subState == medium_risk;
}

inline RhpBoolean Tsunami_Prediction::low_risk_IN(void) const {
    return state_2_subState == low_risk;
}

inline RhpBoolean Tsunami_Prediction::high_risk_IN(void) const {
    return state_2_subState == high_risk;
}

inline RhpBoolean Tsunami_Prediction::state_1_IN(void) const {
    return normal_operation_IN();
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
