/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: News_Channels
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\News_Channels.h
*********************************************************************/

#ifndef News_Channels_H
#define News_Channels_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## actor News_Channels
#include "User.h"
//## package UseCases

//## actor News_Channels
class News_Channels : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNews_Channels;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    News_Channels(void);
    
    //## auto_generated
    ~News_Channels(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNews_Channels : public OMAnimatedUser {
    DECLARE_META(News_Channels, OMAnimatedNews_Channels)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\News_Channels.h
*********************************************************************/
