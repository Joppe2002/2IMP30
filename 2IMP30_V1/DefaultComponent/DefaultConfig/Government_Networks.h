/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government_Networks
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.h
*********************************************************************/

#ifndef Government_Networks_H
#define Government_Networks_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Government_Networks
#include "bool_pred_direction_ProxyFlowPropertyInterface.h"
//## class Government_Networks
#include "float_pred_probability_ProxyFlowPropertyInterface.h"
//## class Government_Networks
#include "float_pred_probability_ts_ProxyFlowPropertyInterface.h"
//## class Government_Networks
#include "float_pred_severity_ProxyFlowPropertyInterface.h"
//## class Government_Networks
#include "float_pred_speed_ProxyFlowPropertyInterface.h"
//## class Government_Networks
#include "float_storm_probability_ProxyFlowPropertyInterface.h"
//## class Government_Networks
#include "Information_Channels.h"
//## class Government_Networks
#include "int_warning_type_ProxyFlowPropertyInterface.h"
//## package SystemContext

//## class Government_Networks
class Government_Networks : public Information_Channels, public int_warning_type_ProxyFlowPropertyInterface, public bool_pred_direction_ProxyFlowPropertyInterface, public float_pred_severity_ProxyFlowPropertyInterface, public float_pred_probability_ProxyFlowPropertyInterface, public float_pred_speed_ProxyFlowPropertyInterface, public float_storm_probability_ProxyFlowPropertyInterface, public float_pred_probability_ts_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SystemContext
    class p_Government_Networks_C : public int_warning_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Government_Networks_C(void);
        
        //## auto_generated
        virtual ~p_Government_Networks_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectGovernment_Networks(Government_Networks* part);
        
        //## auto_generated
        int_warning_type_ProxyFlowPropertyInterface* getItsInt_warning_type_ProxyFlowPropertyInterface(void);
        
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
    
    //## package SystemContext
    class p_Storm_Input_C : public bool_pred_direction_ProxyFlowPropertyInterface, public float_pred_severity_ProxyFlowPropertyInterface, public float_pred_probability_ProxyFlowPropertyInterface, public float_pred_speed_ProxyFlowPropertyInterface, public float_storm_probability_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Input_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Input_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectGovernment_Networks(Government_Networks* part);
        
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
    
    //## package SystemContext
    class p_Tsunami_Storm_C : public float_pred_probability_ts_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Storm_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Storm_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectGovernment_Networks(Government_Networks* part);
        
        //## auto_generated
        float_pred_probability_ts_ProxyFlowPropertyInterface* getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(void);
        
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
    friend class OMAnimatedGovernment_Networks;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Government_Networks(void);
    
    //## auto_generated
    ~Government_Networks(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setPred_direction(bool p_pred_direction);
    
    void setPred_probability(float p_pred_probability);
    
    void setPred_probability_ts(float p_pred_probability_ts);
    
    void setPred_severity(float p_pred_severity);
    
    void setPred_speed(float p_pred_speed);
    
    void setStorm_probability(float p_storm_probability);
    
    void setWarning_type(int p_warning_type);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Government_Networks_C* getP_Government_Networks(void) const;
    
    //## auto_generated
    p_Government_Networks_C* get_p_Government_Networks(void) const;
    
    //## auto_generated
    p_Storm_Input_C* getP_Storm_Input(void) const;
    
    //## auto_generated
    p_Storm_Input_C* get_p_Storm_Input(void) const;
    
    //## auto_generated
    p_Tsunami_Storm_C* getP_Tsunami_Storm(void) const;
    
    //## auto_generated
    p_Tsunami_Storm_C* get_p_Tsunami_Storm(void) const;
    
    //## auto_generated
    const bool getPred_direction(void) const;
    
    //## auto_generated
    const float getPred_probability(void) const;
    
    //## auto_generated
    const float getPred_probability_ts(void) const;
    
    //## auto_generated
    const float getPred_severity(void) const;
    
    //## auto_generated
    const float getPred_speed(void) const;
    
    //## auto_generated
    const float getStorm_probability(void) const;
    
    //## auto_generated
    const int getWarning_type(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    bool pred_direction;		//## attribute pred_direction
    
    float pred_probability;		//## attribute pred_probability
    
    float pred_probability_ts;		//## attribute pred_probability_ts
    
    float pred_severity;		//## attribute pred_severity
    
    float pred_speed;		//## attribute pred_speed
    
    float storm_probability;		//## attribute storm_probability
    
    int warning_type;		//## attribute warning_type
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Government_Networks_C p_Government_Networks;
    
    p_Storm_Input_C p_Storm_Input;
    
    p_Tsunami_Storm_C p_Tsunami_Storm;
//#]

    ////    Framework operations    ////

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernment_Networks : public OMAnimatedInformation_Channels {
    DECLARE_META(Government_Networks, OMAnimatedGovernment_Networks)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.h
*********************************************************************/
