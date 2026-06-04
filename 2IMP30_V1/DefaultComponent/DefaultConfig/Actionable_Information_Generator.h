/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Actionable_Information_Generator
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Actionable_Information_Generator.h
*********************************************************************/

#ifndef Actionable_Information_Generator_H
#define Actionable_Information_Generator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## class Actionable_Information_Generator
class Actionable_Information_Generator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedActionable_Information_Generator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Actionable_Information_Generator(void);
    
    //## auto_generated
    ~Actionable_Information_Generator(void);
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Framework operations    ////
    
    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedActionable_Information_Generator : virtual public AOMInstance {
    DECLARE_META(Actionable_Information_Generator, OMAnimatedActionable_Information_Generator)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Actionable_Information_Generator.h
*********************************************************************/
