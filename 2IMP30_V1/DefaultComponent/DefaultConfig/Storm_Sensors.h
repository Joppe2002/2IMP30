/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Sensors
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.h
*********************************************************************/

#ifndef Storm_Sensors_H
#define Storm_Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class p_Storm_Sensors_C
#include "bool_raw_wind_direction_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_precipitation_amount_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_precipitation_type_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_wind_speed_ProxyFlowPropertyInterface.h"
//## link itsSMSWTD
class SMSWTD;

//#[ ignore
#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_amount_int_ARGS_DECLARATION int p_raw_precipitation_amount;

#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_type_int_ARGS_DECLARATION int p_raw_precipitation_type;

#define OMAnim_SystemContext_Storm_Sensors_setRaw_wind_direction_bool_ARGS_DECLARATION bool p_raw_wind_direction;

#define OMAnim_SystemContext_Storm_Sensors_setRaw_wind_speed_int_ARGS_DECLARATION int p_raw_wind_speed;
//#]

//## package SystemContext

//## class Storm_Sensors
class Storm_Sensors {
public :

//#[ ignore
    //## package SystemContext
    class p_Storm_Sensors_C : public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Sensors_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Sensors_C(void);
        
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
        Storm_Sensors::p_Storm_Sensors_C* getOutBound(void);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedStorm_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Storm_Sensors(void);
    
    //## auto_generated
    ~Storm_Sensors(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setRaw_precipitation_amount(int p_raw_precipitation_amount);
    
    void setRaw_precipitation_type(int p_raw_precipitation_type);
    
    void setRaw_wind_direction(bool p_raw_wind_direction);
    
    void setRaw_wind_speed(int p_raw_wind_speed);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Storm_Sensors_C* getP_Storm_Sensors(void) const;
    
    //## auto_generated
    p_Storm_Sensors_C* get_p_Storm_Sensors(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_amount(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_type(void) const;
    
    //## auto_generated
    const bool getRaw_wind_direction(void) const;
    
    //## auto_generated
    const int getRaw_wind_speed(void) const;
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int raw_precipitation_amount;		//## attribute raw_precipitation_amount
    
    int raw_precipitation_type;		//## attribute raw_precipitation_type
    
    bool raw_wind_direction;		//## attribute raw_wind_direction
    
    int raw_wind_speed;		//## attribute raw_wind_speed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Storm_Sensors_C p_Storm_Sensors;
//#]

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SystemContext_Storm_Sensors_setRaw_precipitation_amount_int)

DECLARE_OPERATION_CLASS(SystemContext_Storm_Sensors_setRaw_precipitation_type_int)

DECLARE_OPERATION_CLASS(SystemContext_Storm_Sensors_setRaw_wind_direction_bool)

DECLARE_OPERATION_CLASS(SystemContext_Storm_Sensors_setRaw_wind_speed_int)

//#[ ignore
class OMAnimatedStorm_Sensors : virtual public AOMInstance {
    DECLARE_META(Storm_Sensors, OMAnimatedStorm_Sensors)
    
    DECLARE_META_OP(SystemContext_Storm_Sensors_setRaw_precipitation_amount_int)
    
    DECLARE_META_OP(SystemContext_Storm_Sensors_setRaw_precipitation_type_int)
    
    DECLARE_META_OP(SystemContext_Storm_Sensors_setRaw_wind_direction_bool)
    
    DECLARE_META_OP(SystemContext_Storm_Sensors_setRaw_wind_speed_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.h
*********************************************************************/
