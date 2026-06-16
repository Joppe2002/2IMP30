/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Tue, 16, Jun 2026  
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
//## class p_Storm_Prediction_C
#include "bool_pred_direction_ProxyFlowPropertyInterface.h"
//## class p_Storm_Prediction_C
#include "float_pred_probability_ProxyFlowPropertyInterface.h"
//## class p_Storm_Prediction_C
#include "float_pred_severity_ProxyFlowPropertyInterface.h"
//## class p_Storm_Prediction_C
#include "float_pred_speed_ProxyFlowPropertyInterface.h"
//## class p_Storm_Prediction_C
#include "float_storm_probability_ProxyFlowPropertyInterface.h"
//## link itsActionable_Information_Generator
class Actionable_Information_Generator;

//## link itsData_Storage
class Data_Storage;

//#[ ignore
#define OMAnim_Architecture_Storm_Prediction_setStorm_probability_float_ARGS_DECLARATION float p_storm_probability;
//#]

//## package Architecture

//## class Storm_Prediction
class Storm_Prediction : public OMReactive {
public :

//#[ ignore
    //## package Architecture
    class p_Storm_Prediction_C : public bool_pred_direction_ProxyFlowPropertyInterface, public float_pred_severity_ProxyFlowPropertyInterface, public float_pred_probability_ProxyFlowPropertyInterface, public float_pred_speed_ProxyFlowPropertyInterface, public float_storm_probability_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Prediction_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Prediction_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        bool_pred_direction_ProxyFlowPropertyInterface* getItsBool_pred_direction_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_pred_probability_ProxyFlowPropertyInterface* getItsFloat_pred_probability_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_pred_severity_ProxyFlowPropertyInterface* getItsFloat_pred_severity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_pred_speed_ProxyFlowPropertyInterface* getItsFloat_pred_speed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        float_storm_probability_ProxyFlowPropertyInterface* getItsFloat_storm_probability_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        Storm_Prediction::p_Storm_Prediction_C* getOutBound(void);
        
        //## auto_generated
        virtual void setPred_direction(bool p_pred_direction);
        
        //## auto_generated
        virtual void setPred_probability(float p_pred_probability);
        
        //## auto_generated
        virtual void setPred_severity(float p_pred_severity);
        
        //## auto_generated
        virtual void setPred_speed(float p_pred_speed);
        
        //## auto_generated
        virtual void setStorm_probability(float p_storm_probability);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_pred_direction_ProxyFlowPropertyInterface(bool_pred_direction_ProxyFlowPropertyInterface* const p_bool_pred_direction_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_pred_probability_ProxyFlowPropertyInterface(float_pred_probability_ProxyFlowPropertyInterface* const p_float_pred_probability_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_pred_severity_ProxyFlowPropertyInterface(float_pred_severity_ProxyFlowPropertyInterface* const p_float_pred_severity_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_pred_speed_ProxyFlowPropertyInterface(float_pred_speed_ProxyFlowPropertyInterface* const p_float_pred_speed_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsFloat_storm_probability_ProxyFlowPropertyInterface(float_storm_probability_ProxyFlowPropertyInterface* const p_float_storm_probability_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_pred_direction_ProxyFlowPropertyInterface* itsBool_pred_direction_ProxyFlowPropertyInterface;		//## link itsBool_pred_direction_ProxyFlowPropertyInterface
        
        float_pred_probability_ProxyFlowPropertyInterface* itsFloat_pred_probability_ProxyFlowPropertyInterface;		//## link itsFloat_pred_probability_ProxyFlowPropertyInterface
        
        float_pred_severity_ProxyFlowPropertyInterface* itsFloat_pred_severity_ProxyFlowPropertyInterface;		//## link itsFloat_pred_severity_ProxyFlowPropertyInterface
        
        float_pred_speed_ProxyFlowPropertyInterface* itsFloat_pred_speed_ProxyFlowPropertyInterface;		//## link itsFloat_pred_speed_ProxyFlowPropertyInterface
        
        float_storm_probability_ProxyFlowPropertyInterface* itsFloat_storm_probability_ProxyFlowPropertyInterface;		//## link itsFloat_storm_probability_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
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
    
    //## operation relay_output_data()
    virtual void relay_output_data(void);
    
//#[ ignore
    void setPred_direction(bool p_pred_direction);
    
    void setPred_probability(float p_pred_probability);
    
    void setPred_severity(float p_pred_severity);
    
    void setPred_speed(float p_pred_speed);
    
    void setStorm_probability(float p_storm_probability);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Storm_Prediction_C* getP_Storm_Prediction(void) const;
    
    //## auto_generated
    p_Storm_Prediction_C* get_p_Storm_Prediction(void) const;
    
    //## auto_generated
    const bool getSMS_info(void) const;
    
    //## auto_generated
    void setSMS_info(const bool p_SMS_info);
    
    //## auto_generated
    const bool getApp_info(void) const;
    
    //## auto_generated
    void setApp_info(const bool p_app_info);
    
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
    const float getPred_probability(void) const;
    
    //## auto_generated
    const float getPred_severity(void) const;
    
    //## auto_generated
    const float getPred_speed(void) const;
    
    //## auto_generated
    const float getStorm_probability(void) const;
    
    //## auto_generated
    const bool getWarned(void) const;
    
    //## auto_generated
    void setWarned(const bool p_warned);
    
    //## auto_generated
    const bool getWind_direction(void) const;
    
    //## auto_generated
    void setWind_direction(const bool p_wind_direction);
    
    //## auto_generated
    const int getWind_speed(void) const;
    
    //## auto_generated
    void setWind_speed(const int p_wind_speed);
    
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
    
    bool government_info;		//## attribute government_info
    
    bool isErrorHandling;		//## attribute isErrorHandling
    
    bool news_info;		//## attribute news_info
    
    int precipitation_amount;		//## attribute precipitation_amount
    
    precipitation_type_enum precipitation_type;		//## attribute precipitation_type
    
    bool pred_direction;		//## attribute pred_direction
    
    float pred_probability;		//## attribute pred_probability
    
    float pred_severity;		//## attribute pred_severity
    
    float pred_speed;		//## attribute pred_speed
    
    float storm_probability;		//## attribute storm_probability
    
    bool warned;		//## attribute warned
    
    bool wind_direction;		//## attribute wind_direction
    
    int wind_speed;		//## attribute wind_speed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Storm_Prediction_C p_Storm_Prediction;
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
    
    // state_7:
    //## statechart_method
    inline RhpBoolean state_7_IN(void) const;
    
    //## statechart_method
    void state_7_entDef(void);
    
    //## statechart_method
    void state_7_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_processEvent(void);
    
    // waiting:
    //## statechart_method
    inline RhpBoolean waiting_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus waiting_handleEvent(void);
    
    // medium_risk:
    //## statechart_method
    inline RhpBoolean medium_risk_IN(void) const;
    
    // low_risk:
    //## statechart_method
    inline RhpBoolean low_risk_IN(void) const;
    
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
    enum Storm_Prediction_Enum {
        OMNonState = 0,
        normal_operation = 1,
        state_7 = 2,
        waiting = 3,
        medium_risk = 4,
        low_risk = 5,
        high_risk = 6,
        state_6 = 7,
        prediction = 8,
        idle = 9,
        accepttimeevent_2 = 10,
        ErrorHandling = 11,
        Handled = 12,
        Error = 13
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
    
    Storm_Prediction_Enum ErrorHandling_subState;
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
    void low_risk_serializeStates(AOMSState* aomsState) const;
    
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
    
    //## statechart_method
    void ErrorHandling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Handled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Error_serializeStates(AOMSState* aomsState) const;
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

inline RhpBoolean Storm_Prediction::low_risk_IN(void) const {
    return state_7_subState == low_risk;
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

inline RhpBoolean Storm_Prediction::ErrorHandling_IN(void) const {
    return rootState_subState == ErrorHandling;
}

inline RhpBoolean Storm_Prediction::Handled_IN(void) const {
    return ErrorHandling_subState == Handled;
}

inline RhpBoolean Storm_Prediction::Error_IN(void) const {
    return ErrorHandling_subState == Error;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/
