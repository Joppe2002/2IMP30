/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System_Output
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\System_Output.h
*********************************************************************/

#ifndef System_Output_H
#define System_Output_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## class System_Output
class System_Output {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSystem_Output;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    System_Output(void);
    
    //## auto_generated
    ~System_Output(void);
    
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
class OMAnimatedSystem_Output : virtual public AOMInstance {
    DECLARE_META(System_Output, OMAnimatedSystem_Output)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System_Output.h
*********************************************************************/
