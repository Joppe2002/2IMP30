/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMS_Signaling
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\SMS_Signaling.h
*********************************************************************/

#ifndef SMS_Signaling_H
#define SMS_Signaling_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class SMS_Signaling
#include "Information_Channels.h"
//## class SMS_Signaling
#include "int_warning_type_ProxyFlowPropertyInterface.h"
//## package SystemContext

//## class SMS_Signaling
class SMS_Signaling : public Information_Channels, public int_warning_type_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SystemContext
    class p_Warning_Input_C : public int_warning_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Warning_Input_C(void);
        
        //## auto_generated
        virtual ~p_Warning_Input_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMS_Signaling(SMS_Signaling* part);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMS_Signaling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMS_Signaling(void);
    
    //## auto_generated
    ~SMS_Signaling(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setWarning_type(int p_warning_type);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Warning_Input_C* getP_Warning_Input(void) const;
    
    //## auto_generated
    p_Warning_Input_C* get_p_Warning_Input(void) const;
    
    //## auto_generated
    const int getWarning_type(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    int warning_type;		//## attribute warning_type
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Warning_Input_C p_Warning_Input;
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
class OMAnimatedSMS_Signaling : public OMAnimatedInformation_Channels {
    DECLARE_META(SMS_Signaling, OMAnimatedSMS_Signaling)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMS_Signaling.h
*********************************************************************/
