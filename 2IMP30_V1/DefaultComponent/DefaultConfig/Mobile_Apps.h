/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Mobile_Apps
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Mobile_Apps.h
*********************************************************************/

#ifndef Mobile_Apps_H
#define Mobile_Apps_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Mobile_Apps
#include "Information_Channels.h"
//## class Mobile_Apps
#include "int_warning_type_ProxyFlowPropertyInterface.h"
//## package SystemContext

//## class Mobile_Apps
class Mobile_Apps : public Information_Channels, public int_warning_type_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SystemContext
    class p_Mobile_Apps_C : public int_warning_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Mobile_Apps_C(void);
        
        //## auto_generated
        virtual ~p_Mobile_Apps_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMobile_Apps(Mobile_Apps* part);
        
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
    friend class OMAnimatedMobile_Apps;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Mobile_Apps(void);
    
    //## auto_generated
    ~Mobile_Apps(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setWarning_type(int p_warning_type);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Mobile_Apps_C* getP_Mobile_Apps(void) const;
    
    //## auto_generated
    p_Mobile_Apps_C* get_p_Mobile_Apps(void) const;
    
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
    p_Mobile_Apps_C p_Mobile_Apps;
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
class OMAnimatedMobile_Apps : public OMAnimatedInformation_Channels {
    DECLARE_META(Mobile_Apps, OMAnimatedMobile_Apps)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Mobile_Apps.h
*********************************************************************/
