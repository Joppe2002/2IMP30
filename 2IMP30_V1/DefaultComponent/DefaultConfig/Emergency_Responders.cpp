/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Emergency_Responders
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Emergency_Responders.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Emergency_Responders.h"
//#[ ignore
#define UseCases_Emergency_Responders_Emergency_Responders_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Emergency_Responders
Emergency_Responders::Emergency_Responders(void) : Stakeholders() {
    NOTIFY_CONSTRUCTOR(Emergency_Responders, Emergency_Responders(), 0, UseCases_Emergency_Responders_Emergency_Responders_SERIALIZE);
}

Emergency_Responders::~Emergency_Responders(void) {
    NOTIFY_DESTRUCTOR(~Emergency_Responders, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEmergency_Responders::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedStakeholders::serializeAttributes(aomsAttributes);
}

void OMAnimatedEmergency_Responders::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedStakeholders::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Emergency_Responders, UseCases, false, Stakeholders, OMAnimatedStakeholders, OMAnimatedEmergency_Responders)

OMINIT_SUPERCLASS(Stakeholders, OMAnimatedStakeholders)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Emergency_Responders.cpp
*********************************************************************/
