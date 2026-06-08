/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMS_Signaling
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\SMS_Signaling.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMS_Signaling.h"
//#[ ignore
#define SystemContext_SMS_Signaling_SMS_Signaling_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class SMS_Signaling
SMS_Signaling::SMS_Signaling(void) : Information_Channels() {
    NOTIFY_CONSTRUCTOR(SMS_Signaling, SMS_Signaling(), 0, SystemContext_SMS_Signaling_SMS_Signaling_SERIALIZE);
    initRelations();
}

SMS_Signaling::~SMS_Signaling(void) {
    NOTIFY_DESTRUCTOR(~SMS_Signaling, false);
}

void SMS_Signaling::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void SMS_Signaling::OMCreateInstances(void) {
}

void SMS_Signaling::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMS_Signaling::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedSMS_Signaling::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SMS_Signaling, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedSMS_Signaling)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMS_Signaling.cpp
*********************************************************************/
