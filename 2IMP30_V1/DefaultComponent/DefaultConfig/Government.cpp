/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government.h"
//#[ ignore
#define UseCases_Government_Government_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Government
Government::Government(void) : Stakeholders() {
    NOTIFY_CONSTRUCTOR(Government, Government(), 0, UseCases_Government_Government_SERIALIZE);
}

Government::~Government(void) {
    NOTIFY_DESTRUCTOR(~Government, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedStakeholders::serializeAttributes(aomsAttributes);
}

void OMAnimatedGovernment::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedStakeholders::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Government, UseCases, false, Stakeholders, OMAnimatedStakeholders, OMAnimatedGovernment)

OMINIT_SUPERCLASS(Stakeholders, OMAnimatedStakeholders)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/
