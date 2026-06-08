/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Civilians
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Civilians.h
*********************************************************************/

#ifndef Civilians_H
#define Civilians_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "UseCases.h"
//## actor Civilians
#include "User.h"
//## package UseCases

//## actor Civilians
class Civilians : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCivilians;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Civilians(void);
    
    //## auto_generated
    ~Civilians(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCivilians : public OMAnimatedUser {
    DECLARE_META(Civilians, OMAnimatedCivilians)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Civilians.h
*********************************************************************/
