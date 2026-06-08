/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Government.h
*********************************************************************/

#ifndef Government_H
#define Government_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## actor Government
#include "Stakeholders.h"
//## package UseCases

//## actor Government
class Government : public Stakeholders {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Government(void);
    
    //## auto_generated
    ~Government(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernment : public OMAnimatedStakeholders {
    DECLARE_META(Government, OMAnimatedGovernment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.h
*********************************************************************/
