/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Information_Channels
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Information_Channels.h
*********************************************************************/

#ifndef Information_Channels_H
#define Information_Channels_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## link itsSMSWTD
class SMSWTD;

//## link itsUser
class User;

//## package SystemContext

//## class Information_Channels
class Information_Channels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInformation_Channels;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Information_Channels(void);
    
    //## auto_generated
    ~Information_Channels(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    const User* getItsUser(void) const;
    
    //## auto_generated
    void setItsUser(User* const p_User);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    User* itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
    
    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInformation_Channels : virtual public AOMInstance {
    DECLARE_META(Information_Channels, OMAnimatedInformation_Channels)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Information_Channels.h
*********************************************************************/
