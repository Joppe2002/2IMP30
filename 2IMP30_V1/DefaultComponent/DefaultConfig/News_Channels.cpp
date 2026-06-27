/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: News_Channels
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\News_Channels.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "News_Channels.h"
//#[ ignore
#define UseCases_News_Channels_News_Channels_SERIALIZE OM_NO_OP
//#]

//## package UseCases

//## actor News_Channels
News_Channels::News_Channels(void) : User() {
    NOTIFY_CONSTRUCTOR(News_Channels, News_Channels(), 0, UseCases_News_Channels_News_Channels_SERIALIZE);
}

News_Channels::~News_Channels(void) {
    NOTIFY_DESTRUCTOR(~News_Channels, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNews_Channels::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedNews_Channels::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(News_Channels, UseCases, false, User, OMAnimatedUser, OMAnimatedNews_Channels)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\News_Channels.cpp
*********************************************************************/
