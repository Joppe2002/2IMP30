/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Sensors
//!	Generated Date	: Sat, 13, Jun 2026  
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
#include "int_raw_vibrations_distance_ProxyFlowPropertyInterface.h"
//## class p_Tsunami_Sensors_C
#include "int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h"
//## link itsSMSWTD
class SMSWTD;

//#[ ignore
#define OMAnim_SystemContext_Tsunami_Sensors_setRaw_vibrations_distance_int_ARGS_DECLARATION int p_raw_vibrations_distance;

#define OMAnim_SystemContext_Tsunami_Sensors_setRaw_vibrations_intensity_int_ARGS_DECLARATION int p_raw_vibrations_intensity;
//#]

//## package SystemContext

//## class Tsunami_Sensors
class Tsunami_Sensors {
public :

//#[ ignore
    //## package SystemContext
    class p_Tsunami_Sensors_C : public int_raw_vibrations_distance_ProxyFlowPropertyInterface, public int_raw_vibrations_intensity_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Sensors_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Sensors_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        Tsunami_Sensors::p_Tsunami_Sensors_C* getOutBound(void);
        
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
    void setRaw_vibrations_distance(int p_raw_vibrations_distance);
    
    void setRaw_vibrations_intensity(int p_raw_vibrations_intensity);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Tsunami_Sensors_C* getP_Tsunami_Sensors(void) const;
    
    //## auto_generated
    p_Tsunami_Sensors_C* get_p_Tsunami_Sensors(void) const;
    
    //## auto_generated
    const int getRaw_vibrations_distance(void) const;
    
    //## auto_generated
    const int getRaw_vibrations_intensity(void) const;
    
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

    int raw_vibrations_distance;		//## attribute raw_vibrations_distance
    
    int raw_vibrations_intensity;		//## attribute raw_vibrations_intensity
    
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
DECLARE_OPERATION_CLASS(SystemContext_Tsunami_Sensors_setRaw_vibrations_distance_int)

DECLARE_OPERATION_CLASS(SystemContext_Tsunami_Sensors_setRaw_vibrations_intensity_int)

//#[ ignore
class OMAnimatedTsunami_Sensors : virtual public AOMInstance {
    DECLARE_META(Tsunami_Sensors, OMAnimatedTsunami_Sensors)
    
    DECLARE_META_OP(SystemContext_Tsunami_Sensors_setRaw_vibrations_distance_int)
    
    DECLARE_META_OP(SystemContext_Tsunami_Sensors_setRaw_vibrations_intensity_int)
    
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
