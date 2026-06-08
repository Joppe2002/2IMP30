/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government_Networks
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government_Networks.h"
//#[ ignore
#define SystemContext_Government_Networks_Government_Networks_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Government_Networks
Government_Networks::Government_Networks(void) : Information_Channels() {
    NOTIFY_CONSTRUCTOR(Government_Networks, Government_Networks(), 0, SystemContext_Government_Networks_Government_Networks_SERIALIZE);
    initRelations();
}

Government_Networks::~Government_Networks(void) {
    NOTIFY_DESTRUCTOR(~Government_Networks, false);
}

void Government_Networks::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Government_Networks::OMCreateInstances(void) {
}

void Government_Networks::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment_Networks::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedGovernment_Networks::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Government_Networks, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedGovernment_Networks)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.cpp
*********************************************************************/
