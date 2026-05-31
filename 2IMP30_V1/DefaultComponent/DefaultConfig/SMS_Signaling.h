/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMS_Signaling
//!	Generated Date	: Sun, 31, May 2026  
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
//## package SystemContext

//## class SMS_Signaling
class SMS_Signaling : public Information_Channels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMS_Signaling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMS_Signaling(void);
    
    //## auto_generated
    ~SMS_Signaling(void);
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
