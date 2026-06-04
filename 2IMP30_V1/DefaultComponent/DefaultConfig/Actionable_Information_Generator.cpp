/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Actionable_Information_Generator
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Actionable_Information_Generator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Actionable_Information_Generator.h"
//#[ ignore
#define Architecture_Actionable_Information_Generator_Actionable_Information_Generator_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Actionable_Information_Generator
Actionable_Information_Generator::Actionable_Information_Generator(void) {
    NOTIFY_CONSTRUCTOR(Actionable_Information_Generator, Actionable_Information_Generator(), 0, Architecture_Actionable_Information_Generator_Actionable_Information_Generator_SERIALIZE);
    initRelations();
}

Actionable_Information_Generator::~Actionable_Information_Generator(void) {
    NOTIFY_DESTRUCTOR(~Actionable_Information_Generator, true);
}

void Actionable_Information_Generator::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Actionable_Information_Generator::OMCreateInstances(void) {
}

void Actionable_Information_Generator::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Actionable_Information_Generator, Architecture, Architecture, false, OMAnimatedActionable_Information_Generator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Actionable_Information_Generator.cpp
*********************************************************************/
