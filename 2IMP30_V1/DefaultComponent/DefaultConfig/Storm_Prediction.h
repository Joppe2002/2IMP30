/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Sat, 6, Jun 2026  
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
#define OMAnim_Architecture_Storm_Prediction_setTest_probability_float_ARGS_DECLARATION float p_test_probability;
//#]

//## package Architecture

//## class Storm_Prediction
class Storm_Prediction : public OMReactive {
public :

    //## class Storm_Prediction::Storm_Prediction_Result
    class Storm_Prediction_Result {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedStorm_Prediction_Result;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        Storm_Prediction_Result(void);
        
        //## auto_generated
        ~Storm_Prediction_Result(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        const bool getPred_direction(void) const;
        
        //## auto_generated
        void setPred_direction(const bool p_pred_direction);
        
        //## auto_generated
        const float getPred_probability(void) const;
        
        //## auto_generated
        void setPred_probability(const float p_pred_probability);
        
        //## auto_generated
        const float getPred_severity(void) const;
        
        //## auto_generated
        void setPred_severity(const float p_pred_severity);
        
        //## auto_generated
        const float getPred_speed(void) const;
        
        //## auto_generated
        void setPred_speed(const float p_pred_speed);
        
        ////    Attributes    ////
        
        bool pred_direction;		//## attribute pred_direction
        
        float pred_probability;		//## attribute pred_probability
        
        float pred_severity;		//## attribute pred_severity
        
        float pred_speed;		//## attribute pred_speed
    };
    
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
    
    //## operation generateActionableInfo(ActorType)
    virtual void generateActionableInfo(const ActorType& Actor);
    
    //## operation get_Storm_Data(int,precipitation_type_enum,int,bool)
    virtual void get_Storm_Data(int stored_precipitation_amount, const precipitation_type_enum& stored_precipitation_type, int stored_wind_speed, bool stored_wind_direction);
    
    //## operation predictStorm()
    virtual Storm_Prediction_Result* predictStorm(void);
    
    //## operation updatePredictionData()
    virtual void updatePredictionData(void);
    
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
    const float getPrev_probability(void) const;
    
    //## auto_generated
    void setPrev_probability(const float p_prev_probability);
    
    //## auto_generated
    const bool getSt_pred_direction(void) const;
    
    //## auto_generated
    void setSt_pred_direction(const bool p_st_pred_direction);
    
    //## auto_generated
    const float getSt_pred_probability(void) const;
    
    //## auto_generated
    void setSt_pred_probability(const float p_st_pred_probability);
    
    //## auto_generated
    const float getSt_pred_severity(void) const;
    
    //## auto_generated
    void setSt_pred_severity(const float p_st_pred_severity);
    
    //## auto_generated
    const float getSt_pred_speed(void) const;
    
    //## auto_generated
    void setSt_pred_speed(const float p_st_pred_speed);
    
    //## auto_generated
    const float getTest_probability(void) const;
    
    //## auto_generated
    void setTest_probability(const float p_test_probability);
    
    //## auto_generated
    const bool getWasPredicted(void) const;
    
    //## auto_generated
    void setWasPredicted(const bool p_wasPredicted);
    
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
    
    float prev_probability;		//## attribute prev_probability
    
    bool st_pred_direction;		//## attribute st_pred_direction
    
    float st_pred_probability;		//## attribute st_pred_probability
    
    float st_pred_severity;		//## attribute st_pred_severity
    
    float st_pred_speed;		//## attribute st_pred_speed
    
    float test_probability;		//## attribute test_probability
    
    bool wasPredicted;		//## attribute wasPredicted
    
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
    
    // StormExistancePredicted:
    //## statechart_method
    inline RhpBoolean StormExistancePredicted_IN(void) const;
    
    // PredictStorm:
    //## statechart_method
    inline RhpBoolean PredictStorm_IN(void) const;
    
    // MidiumRiskStorm:
    //## statechart_method
    inline RhpBoolean MidiumRiskStorm_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // HighRiskStorm:
    //## statechart_method
    inline RhpBoolean HighRiskStorm_IN(void) const;
    
    // accepttimeevent_3:
    //## statechart_method
    inline RhpBoolean accepttimeevent_3_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Storm_Prediction_Enum {
        OMNonState = 0,
        StormExistancePredicted = 1,
        PredictStorm = 2,
        MidiumRiskStorm = 3,
        Idle = 4,
        HighRiskStorm = 5,
        accepttimeevent_3 = 6
    };
//#]

private :

//#[ ignore
    Storm_Prediction_Enum rootState_subState;
    
    Storm_Prediction_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Architecture_Storm_Prediction_setTest_probability_float)

//#[ ignore
class OMAnimatedStorm_Prediction : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Storm_Prediction, OMAnimatedStorm_Prediction)
    
    DECLARE_META_OP(Architecture_Storm_Prediction_setTest_probability_float)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StormExistancePredicted_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PredictStorm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MidiumRiskStorm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HighRiskStorm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_3_serializeStates(AOMSState* aomsState) const;
};

class OMAnimatedStorm_Prediction_Result : virtual public AOMInstance {
    DECLARE_META(Storm_Prediction::Storm_Prediction_Result, OMAnimatedStorm_Prediction_Result)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Storm_Prediction::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Storm_Prediction::StormExistancePredicted_IN(void) const {
    return rootState_subState == StormExistancePredicted;
}

inline RhpBoolean Storm_Prediction::PredictStorm_IN(void) const {
    return rootState_subState == PredictStorm;
}

inline RhpBoolean Storm_Prediction::MidiumRiskStorm_IN(void) const {
    return rootState_subState == MidiumRiskStorm;
}

inline RhpBoolean Storm_Prediction::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean Storm_Prediction::HighRiskStorm_IN(void) const {
    return rootState_subState == HighRiskStorm;
}

inline RhpBoolean Storm_Prediction::accepttimeevent_3_IN(void) const {
    return rootState_subState == accepttimeevent_3;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/
