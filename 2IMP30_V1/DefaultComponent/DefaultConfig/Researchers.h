/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researchers
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Researchers.h
*********************************************************************/

#ifndef Researchers_H
#define Researchers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## actor Researchers
#include "Stakeholders.h"
//## package UseCases

//## actor Researchers
class Researchers : public Stakeholders {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResearchers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Researchers(void);
    
    //## auto_generated
    ~Researchers(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResearchers : public OMAnimatedStakeholders {
    DECLARE_META(Researchers, OMAnimatedResearchers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researchers.h
*********************************************************************/
