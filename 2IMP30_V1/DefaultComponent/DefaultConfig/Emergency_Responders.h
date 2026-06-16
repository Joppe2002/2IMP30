/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Emergency_Responders
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Emergency_Responders.h
*********************************************************************/

#ifndef Emergency_Responders_H
#define Emergency_Responders_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## actor Emergency_Responders
#include "Stakeholders.h"
//## package UseCases

//## actor Emergency_Responders
class Emergency_Responders : public Stakeholders {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmergency_Responders;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Emergency_Responders(void);
    
    //## auto_generated
    ~Emergency_Responders(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmergency_Responders : public OMAnimatedStakeholders {
    DECLARE_META(Emergency_Responders, OMAnimatedEmergency_Responders)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Emergency_Responders.h
*********************************************************************/
