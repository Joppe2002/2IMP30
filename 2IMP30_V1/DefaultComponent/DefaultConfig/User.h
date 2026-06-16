/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\User.h
*********************************************************************/

#ifndef User_H
#define User_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## link itsInformation_Channels
class Information_Channels;

//## package SystemContext

//## actor User
// Civilians
// Researchers
// First Responders
// News Outlets
class User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUser;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    User(void);
    
    //## auto_generated
    ~User(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Information_Channels* getItsInformation_Channels(void) const;
    
    //## auto_generated
    void setItsInformation_Channels(Information_Channels* const p_Information_Channels);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Information_Channels* itsInformation_Channels;		//## link itsInformation_Channels
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    void _setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    void _clearItsInformation_Channels(void);

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUser : virtual public AOMInstance {
    DECLARE_META(User, OMAnimatedUser)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.h
*********************************************************************/
