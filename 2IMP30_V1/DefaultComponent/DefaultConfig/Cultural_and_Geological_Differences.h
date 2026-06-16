/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cultural_and_Geological_Differences
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Cultural_and_Geological_Differences.h
*********************************************************************/

#ifndef Cultural_and_Geological_Differences_H
#define Cultural_and_Geological_Differences_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## link itsSMSWTD
class SMSWTD;

//## package SystemContext

//## class Cultural_and_Geological_Differences
class Cultural_and_Geological_Differences {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCultural_and_Geological_Differences;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cultural_and_Geological_Differences(void);
    
    //## auto_generated
    ~Cultural_and_Geological_Differences(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

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
//#[ ignore
class OMAnimatedCultural_and_Geological_Differences : virtual public AOMInstance {
    DECLARE_META(Cultural_and_Geological_Differences, OMAnimatedCultural_and_Geological_Differences)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cultural_and_Geological_Differences.h
*********************************************************************/
