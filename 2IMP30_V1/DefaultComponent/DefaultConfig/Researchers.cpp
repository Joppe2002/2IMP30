/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Researchers
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Researchers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Researchers.h"
//#[ ignore
#define UseCases_Researchers_Researchers_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Researchers
Researchers::Researchers(void) : Stakeholders() {
    NOTIFY_CONSTRUCTOR(Researchers, Researchers(), 0, UseCases_Researchers_Researchers_SERIALIZE);
}

Researchers::~Researchers(void) {
    NOTIFY_DESTRUCTOR(~Researchers, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResearchers::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedStakeholders::serializeAttributes(aomsAttributes);
}

void OMAnimatedResearchers::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedStakeholders::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Researchers, UseCases, false, Stakeholders, OMAnimatedStakeholders, OMAnimatedResearchers)

OMINIT_SUPERCLASS(Stakeholders, OMAnimatedStakeholders)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Researchers.cpp
*********************************************************************/
