/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: News_Outlets
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\News_Outlets.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "News_Outlets.h"
//#[ ignore
#define SystemContext_News_Outlets_News_Outlets_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class News_Outlets
News_Outlets::News_Outlets(void) : Information_Channels() {
    NOTIFY_CONSTRUCTOR(News_Outlets, News_Outlets(), 0, SystemContext_News_Outlets_News_Outlets_SERIALIZE);
    initRelations();
}

News_Outlets::~News_Outlets(void) {
    NOTIFY_DESTRUCTOR(~News_Outlets, false);
}

void News_Outlets::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void News_Outlets::OMCreateInstances(void) {
}

void News_Outlets::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNews_Outlets::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedNews_Outlets::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(News_Outlets, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedNews_Outlets)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\News_Outlets.cpp
*********************************************************************/
