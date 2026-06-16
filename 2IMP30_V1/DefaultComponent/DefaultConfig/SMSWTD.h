/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

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
//## classInstance itsActionable_Information_Generator
#include "Actionable_Information_Generator.h"
//## class SMSWTD
#include "bool_pred_direction_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "bool_raw_wind_direction_ProxyFlowPropertyInterface.h"
//## classInstance itsData_Storage
#include "Data_Storage.h"
//## class SMSWTD
#include "float_pred_probability_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "float_pred_severity_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "float_pred_speed_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "float_storm_probability_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_precipitation_amount_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_precipitation_type_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_vibrations_distance_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_wind_speed_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_warning_type_ProxyFlowPropertyInterface.h"
//## classInstance itsPrediction_Module
#include "Prediction_Module.h"
//## link itsCultural_and_Geological_Differences
class Cultural_and_Geological_Differences;

//## link itsInformation_Channels
class Information_Channels;

//## link itsStakeholders
class Stakeholders;

//## link itsStandards_and_Regulations
class Standards_and_Regulations;

//## link itsStorm_Sensors
class Storm_Sensors;

//## link itsTsunami_Sensors
class Tsunami_Sensors;

//## package Architecture

//## class SMSWTD
class SMSWTD : public OMReactive, public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface, public int_raw_vibrations_distance_ProxyFlowPropertyInterface, public int_raw_vibrations_intensity_ProxyFlowPropertyInterface, public int_warning_type_ProxyFlowPropertyInterface, public bool_pred_direction_ProxyFlowPropertyInterface, public float_pred_severity_ProxyFlowPropertyInterface, public float_pred_probability_ProxyFlowPropertyInterface, public float_pred_speed_ProxyFlowPropertyInterface, public float_storm_probability_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package Architecture
    class p_Storm_Input_C : public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Input_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Input_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        //## auto_generated
        bool_raw_wind_direction_ProxyFlowPropertyInterface* getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_type_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_wind_speed_ProxyFlowPropertyInterface* getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setRaw_precipitation_amount(int p_raw_precipitation_amount);
        
        //## auto_generated
        virtual void setRaw_precipitation_type(int p_raw_precipitation_type);
        
        //## auto_generated
        virtual void setRaw_wind_direction(bool p_raw_wind_direction);
        
        //## auto_generated
        virtual void setRaw_wind_speed(int p_raw_wind_speed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_raw_wind_direction_ProxyFlowPropertyInterface* itsBool_raw_wind_direction_ProxyFlowPropertyInterface;		//## link itsBool_raw_wind_direction_ProxyFlowPropertyInterface
        
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface
        
        int_raw_precipitation_type_ProxyFlowPropertyInterface* itsInt_raw_precipitation_type_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_type_ProxyFlowPropertyInterface
        
        int_raw_wind_speed_ProxyFlowPropertyInterface* itsInt_raw_wind_speed_ProxyFlowPropertyInterface;		//## link itsInt_raw_wind_speed_ProxyFlowPropertyInterface
    };
    
    //## package Architecture
    class p_Storm_Data_C : public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Data_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Data_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        bool_raw_wind_direction_ProxyFlowPropertyInterface* getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_type_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_wind_speed_ProxyFlowPropertyInterface* getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        SMSWTD::p_Storm_Data_C* getOutBound(void);
        
        //## auto_generated
        virtual void setRaw_precipitation_amount(int p_raw_precipitation_amount);
        
        //## auto_generated
        virtual void setRaw_precipitation_type(int p_raw_precipitation_type);
        
        //## auto_generated
        virtual void setRaw_wind_direction(bool p_raw_wind_direction);
        
        //## auto_generated
        virtual void setRaw_wind_speed(int p_raw_wind_speed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_raw_wind_direction_ProxyFlowPropertyInterface* itsBool_raw_wind_direction_ProxyFlowPropertyInterface;		//## link itsBool_raw_wind_direction_ProxyFlowPropertyInterface
        
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface
        
        int_raw_precipitation_type_ProxyFlowPropertyInterface* itsInt_raw_precipitation_type_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_type_ProxyFlowPropertyInterface
        
        int_raw_wind_speed_ProxyFlowPropertyInterface* itsInt_raw_wind_speed_ProxyFlowPropertyInterface;		//## link itsInt_raw_wind_speed_ProxyFlowPropertyInterface
    };
    
    //## package Architecture
    class p_Tsunami_Data_C : public int_raw_vibrations_distance_ProxyFlowPropertyInterface, public int_raw_vibrations_intensity_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Data_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Data_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        SMSWTD::p_Tsunami_Data_C* getOutBound(void);
        
        //## auto_generated
        virtual void setRaw_vibrations_distance(int p_raw_vibrations_distance);
        
        //## auto_generated
        virtual void setRaw_vibrations_intensity(int p_raw_vibrations_intensity);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(int_raw_vibrations_distance_ProxyFlowPropertyInterface* const p_int_raw_vibrations_distance_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(int_raw_vibrations_intensity_ProxyFlowPropertyInterface* const p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface
        
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface
    };
    
    //## package Architecture
    class p_Tsunami_Input_C : public int_raw_vibrations_distance_ProxyFlowPropertyInterface, public int_raw_vibrations_intensity_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Input_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Input_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
        //## auto_generated
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setRaw_vibrations_distance(int p_raw_vibrations_distance);
        
        //## auto_generated
        virtual void setRaw_vibrations_intensity(int p_raw_vibrations_intensity);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(int_raw_vibrations_distance_ProxyFlowPropertyInterface* const p_int_raw_vibrations_distance_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(int_raw_vibrations_intensity_ProxyFlowPropertyInterface* const p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface
        
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface
    };
    
    //## package Architecture
    class p_SMSWTD_C : public int_warning_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_C(void);
        
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
    
    //## package Architecture
    class p_SMSWTD_1_C : public int_warning_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_1_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_1_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
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
    
    //## package Architecture
    class p_SMSWTD_2_C : public bool_pred_direction_ProxyFlowPropertyInterface, public float_pred_severity_ProxyFlowPropertyInterface, public float_pred_probability_ProxyFlowPropertyInterface, public float_pred_speed_ProxyFlowPropertyInterface, public float_storm_probability_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_2_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_2_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
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
    
    //## package Architecture
    class p_SMSWTD_3_C : public bool_pred_direction_ProxyFlowPropertyInterface, public float_pred_severity_ProxyFlowPropertyInterface, public float_pred_probability_ProxyFlowPropertyInterface, public float_pred_speed_ProxyFlowPropertyInterface, public float_storm_probability_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_3_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_3_C(void);
        
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
        SMSWTD::p_SMSWTD_3_C* getOutBound(void);
        
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
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSWTD(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setPred_direction(bool p_pred_direction);
    
    void setPred_probability(float p_pred_probability);
    
    void setPred_severity(float p_pred_severity);
    
    void setPred_speed(float p_pred_speed);
    
    void setRaw_precipitation_amount(int p_raw_precipitation_amount);
    
    void setRaw_precipitation_type(int p_raw_precipitation_type);
    
    void setRaw_vibrations_distance(int p_raw_vibrations_distance);
    
    void setRaw_vibrations_intensity(int p_raw_vibrations_intensity);
    
    void setRaw_wind_direction(bool p_raw_wind_direction);
    
    void setRaw_wind_speed(int p_raw_wind_speed);
    
    void setStorm_probability(float p_storm_probability);
    
    void setWarning_type(int p_warning_type);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Storm_Input_C* getP_Storm_Input(void) const;
    
    //## auto_generated
    p_Storm_Input_C* get_p_Storm_Input(void) const;
    
    //## auto_generated
    p_Storm_Data_C* getP_Storm_Data(void) const;
    
    //## auto_generated
    p_Storm_Data_C* get_p_Storm_Data(void) const;
    
    //## auto_generated
    p_Tsunami_Data_C* getP_Tsunami_Data(void) const;
    
    //## auto_generated
    p_Tsunami_Data_C* get_p_Tsunami_Data(void) const;
    
    //## auto_generated
    p_Tsunami_Input_C* getP_Tsunami_Input(void) const;
    
    //## auto_generated
    p_Tsunami_Input_C* get_p_Tsunami_Input(void) const;
    
    //## auto_generated
    p_SMSWTD_C* getP_SMSWTD(void) const;
    
    //## auto_generated
    p_SMSWTD_C* get_p_SMSWTD(void) const;
    
    //## auto_generated
    p_SMSWTD_1_C* getP_SMSWTD_1(void) const;
    
    //## auto_generated
    p_SMSWTD_1_C* get_p_SMSWTD_1(void) const;
    
    //## auto_generated
    p_SMSWTD_2_C* getP_SMSWTD_2(void) const;
    
    //## auto_generated
    p_SMSWTD_2_C* get_p_SMSWTD_2(void) const;
    
    //## auto_generated
    p_SMSWTD_3_C* getP_SMSWTD_3(void) const;
    
    //## auto_generated
    p_SMSWTD_3_C* get_p_SMSWTD_3(void) const;
    
    //## auto_generated
    const bool getPred_direction(void) const;
    
    //## auto_generated
    const float getPred_probability(void) const;
    
    //## auto_generated
    const float getPred_severity(void) const;
    
    //## auto_generated
    const float getPred_speed(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_amount(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_type(void) const;
    
    //## auto_generated
    const int getRaw_vibrations_distance(void) const;
    
    //## auto_generated
    const int getRaw_vibrations_intensity(void) const;
    
    //## auto_generated
    const bool getRaw_wind_direction(void) const;
    
    //## auto_generated
    const int getRaw_wind_speed(void) const;
    
    //## auto_generated
    const float getStorm_probability(void) const;
    
    //## auto_generated
    const int getWarning_type(void) const;
    
    //## auto_generated
    const Actionable_Information_Generator* getItsActionable_Information_Generator(void) const;
    
    //## auto_generated
    const Cultural_and_Geological_Differences* getItsCultural_and_Geological_Differences(void) const;
    
    //## auto_generated
    void setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences);
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    const Information_Channels* getItsInformation_Channels(void) const;
    
    //## auto_generated
    void setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    const Prediction_Module* getItsPrediction_Module(void) const;
    
    //## auto_generated
    const Stakeholders* getItsStakeholders(void) const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    const Standards_and_Regulations* getItsStandards_and_Regulations(void) const;
    
    //## auto_generated
    void setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations);
    
    //## auto_generated
    const Storm_Sensors* getItsStorm_Sensors(void) const;
    
    //## auto_generated
    void setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors);
    
    //## auto_generated
    const Tsunami_Sensors* getItsTsunami_Sensors(void) const;
    
    //## auto_generated
    void setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool pred_direction;		//## attribute pred_direction
    
    float pred_probability;		//## attribute pred_probability
    
    float pred_severity;		//## attribute pred_severity
    
    float pred_speed;		//## attribute pred_speed
    
    int raw_precipitation_amount;		//## attribute raw_precipitation_amount
    
    int raw_precipitation_type;		//## attribute raw_precipitation_type
    
    int raw_vibrations_distance;		//## attribute raw_vibrations_distance
    
    int raw_vibrations_intensity;		//## attribute raw_vibrations_intensity
    
    bool raw_wind_direction;		//## attribute raw_wind_direction
    
    int raw_wind_speed;		//## attribute raw_wind_speed
    
    float storm_probability;		//## attribute storm_probability
    
    int warning_type;		//## attribute warning_type
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Storm_Input_C p_Storm_Input;
    
    p_Storm_Data_C p_Storm_Data;
    
    p_Tsunami_Data_C p_Tsunami_Data;
    
    p_Tsunami_Input_C p_Tsunami_Input;
    
    p_SMSWTD_C p_SMSWTD;
    
    p_SMSWTD_1_C p_SMSWTD_1;
    
    p_SMSWTD_2_C p_SMSWTD_2;
    
    p_SMSWTD_3_C p_SMSWTD_3;
//#]

    Actionable_Information_Generator itsActionable_Information_Generator;		//## classInstance itsActionable_Information_Generator
    
    Cultural_and_Geological_Differences* itsCultural_and_Geological_Differences;		//## link itsCultural_and_Geological_Differences
    
    Data_Storage itsData_Storage;		//## classInstance itsData_Storage
    
    Information_Channels* itsInformation_Channels;		//## link itsInformation_Channels
    
    Prediction_Module itsPrediction_Module;		//## classInstance itsPrediction_Module
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    Standards_and_Regulations* itsStandards_and_Regulations;		//## link itsStandards_and_Regulations
    
    Storm_Sensors* itsStorm_Sensors;		//## link itsStorm_Sensors
    
    Tsunami_Sensors* itsTsunami_Sensors;		//## link itsTsunami_Sensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences);
    
    //## auto_generated
    void _setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences);
    
    //## auto_generated
    void _clearItsCultural_and_Geological_Differences(void);
    
    //## auto_generated
    void __setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    void _setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    void _clearItsInformation_Channels(void);
    
    //## auto_generated
    void __setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders(void);
    
    //## auto_generated
    void __setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations);
    
    //## auto_generated
    void _setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations);
    
    //## auto_generated
    void _clearItsStandards_and_Regulations(void);
    
    //## auto_generated
    void __setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors);
    
    //## auto_generated
    void _setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors);
    
    //## auto_generated
    void _clearItsStorm_Sensors(void);
    
    //## auto_generated
    void __setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors);
    
    //## auto_generated
    void _setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors);
    
    //## auto_generated
    void _clearItsTsunami_Sensors(void);
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
