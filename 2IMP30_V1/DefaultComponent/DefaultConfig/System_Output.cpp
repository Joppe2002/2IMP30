/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System_Output
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\System_Output.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "System_Output.h"
//#[ ignore
#define Architecture_System_Output_System_Output_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class System_Output
System_Output::System_Output(void) {
    NOTIFY_CONSTRUCTOR(System_Output, System_Output(), 0, Architecture_System_Output_System_Output_SERIALIZE);
    initRelations();
}

System_Output::~System_Output(void) {
    NOTIFY_DESTRUCTOR(~System_Output, true);
}

void System_Output::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void System_Output::OMCreateInstances(void) {
}

void System_Output::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(System_Output, Architecture, Architecture, false, OMAnimatedSystem_Output)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System_Output.cpp
*********************************************************************/
