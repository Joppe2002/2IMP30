/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Mobile_Apps
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Mobile_Apps.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Mobile_Apps.h"
//#[ ignore
#define SystemContext_Mobile_Apps_Mobile_Apps_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Mobile_Apps
Mobile_Apps::Mobile_Apps(void) : Information_Channels() {
    NOTIFY_CONSTRUCTOR(Mobile_Apps, Mobile_Apps(), 0, SystemContext_Mobile_Apps_Mobile_Apps_SERIALIZE);
    initRelations();
}

Mobile_Apps::~Mobile_Apps(void) {
    NOTIFY_DESTRUCTOR(~Mobile_Apps, false);
}

void Mobile_Apps::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Mobile_Apps::OMCreateInstances(void) {
}

void Mobile_Apps::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMobile_Apps::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedMobile_Apps::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Mobile_Apps, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedMobile_Apps)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Mobile_Apps.cpp
*********************************************************************/
