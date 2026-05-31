/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Mobile_Apps
//!	Generated Date	: Sun, 31, May 2026  
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
//## package SystemContext

//## class Mobile_Apps
class Mobile_Apps : public Information_Channels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMobile_Apps;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Mobile_Apps(void);
    
    //## auto_generated
    ~Mobile_Apps(void);
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
