/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Civilians
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Civilians.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Civilians.h"
//#[ ignore
#define UseCases_Civilians_Civilians_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor Civilians
Civilians::Civilians(void) : User() {
    NOTIFY_CONSTRUCTOR(Civilians, Civilians(), 0, UseCases_Civilians_Civilians_SERIALIZE);
}

Civilians::~Civilians(void) {
    NOTIFY_DESTRUCTOR(~Civilians, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCivilians::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedCivilians::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Civilians, UseCases, false, User, OMAnimatedUser, OMAnimatedCivilians)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Civilians.cpp
*********************************************************************/
