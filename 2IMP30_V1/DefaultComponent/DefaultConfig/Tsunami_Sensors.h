/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Sensors
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Sensors.h
*********************************************************************/

#ifndef Tsunami_Sensors_H
#define Tsunami_Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class p_Tsunami_Sensors_C
#include "bool_raw_flowDirection_ProxyFlowPropertyInterface.h"
//## class p_Tsunami_Sensors_C
#include "int_raw_pressure_ProxyFlowPropertyInterface.h"
//## class p_Tsunami_Sensors_C
#include "int_raw_tectonicPlate_location_ProxyFlowPropertyInterface.h"
//## class p_Tsunami_Sensors_C
#include "int_raw_vibrations_ProxyFlowPropertyInterface.h"
//## link itsSMSWTD
class SMSWTD;

//#[ ignore
#define OMAnim_SystemContext_Tsunami_Sensors_setRaw_vibrations_int_ARGS_DECLARATION int p_raw_vibrations;
//#]

//## package SystemContext

//## class Tsunami_Sensors
class Tsunami_Sensors {
public :

//#[ ignore
    //## package SystemContext
    class p_Tsunami_Sensors_C : public int_raw_tectonicPlate_location_ProxyFlowPropertyInterface, public int_raw_vibrations_ProxyFlowPropertyInterface, public int_raw_pressure_ProxyFlowPropertyInterface, public bool_raw_flowDirection_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Sensors_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Sensors_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        bool_raw_flowDirection_ProxyFlowPropertyInterface* getItsBool_raw_flowDirection_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_pressure_ProxyFlowPropertyInterface* getItsInt_raw_pressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_vibrations_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        Tsunami_Sensors::p_Tsunami_Sensors_C* getOutBound(void);
        
        //## auto_generated
        virtual void setRaw_flowDirection(bool p_raw_flowDirection);
        
        //## auto_generated
        virtual void setRaw_pressure(int p_raw_pressure);
        
        //## auto_generated
        virtual void setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location);
        
        //## auto_generated
        virtual void setRaw_vibrations(int p_raw_vibrations);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(bool_raw_flowDirection_ProxyFlowPropertyInterface* const p_bool_raw_flowDirection_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_pressure_ProxyFlowPropertyInterface(int_raw_pressure_ProxyFlowPropertyInterface* const p_int_raw_pressure_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_raw_flowDirection_ProxyFlowPropertyInterface* itsBool_raw_flowDirection_ProxyFlowPropertyInterface;		//## link itsBool_raw_flowDirection_ProxyFlowPropertyInterface
        
        int_raw_pressure_ProxyFlowPropertyInterface* itsInt_raw_pressure_ProxyFlowPropertyInterface;		//## link itsInt_raw_pressure_ProxyFlowPropertyInterface
        
        int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface;		//## link itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface
        
        int_raw_vibrations_ProxyFlowPropertyInterface* itsInt_raw_vibrations_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTsunami_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Tsunami_Sensors(void);
    
    //## auto_generated
    ~Tsunami_Sensors(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setRaw_flowDirection(bool p_raw_flowDirection);
    
    void setRaw_pressure(int p_raw_pressure);
    
    void setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location);
    
    void setRaw_vibrations(int p_raw_vibrations);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Tsunami_Sensors_C* getP_Tsunami_Sensors(void) const;
    
    //## auto_generated
    p_Tsunami_Sensors_C* get_p_Tsunami_Sensors(void) const;
    
    //## auto_generated
    bool const getRaw_flowDirection(void) const;
    
    //## auto_generated
    int const getRaw_pressure(void) const;
    
    //## auto_generated
    int const getRaw_tectonicPlate_location(void) const;
    
    //## auto_generated
    int const getRaw_vibrations(void) const;
    
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

    bool raw_flowDirection;		//## attribute raw_flowDirection
    
    int raw_pressure;		//## attribute raw_pressure
    
    int raw_tectonicPlate_location;		//## attribute raw_tectonicPlate_location
    
    int raw_vibrations;		//## attribute raw_vibrations
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Tsunami_Sensors_C p_Tsunami_Sensors;
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
DECLARE_OPERATION_CLASS(SystemContext_Tsunami_Sensors_setRaw_vibrations_int)

//#[ ignore
class OMAnimatedTsunami_Sensors : virtual public AOMInstance {
    DECLARE_META(Tsunami_Sensors, OMAnimatedTsunami_Sensors)
    
    DECLARE_META_OP(SystemContext_Tsunami_Sensors_setRaw_vibrations_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Sensors.h
*********************************************************************/
