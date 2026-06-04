/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User.h"
//## link itsInformation_Channels
#include "Information_Channels.h"
//#[ ignore
#define SystemContext_User_User_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## actor User
User::User(void) : itsInformation_Channels(NULL) {
    NOTIFY_CONSTRUCTOR(User, User(), 0, SystemContext_User_User_SERIALIZE);
    initRelations();
}

User::~User(void) {
    NOTIFY_DESTRUCTOR(~User, true);
    cleanUpRelations();
}

const Information_Channels* User::getItsInformation_Channels(void) const {
    return itsInformation_Channels;
}

void User::setItsInformation_Channels(Information_Channels* const p_Information_Channels) {
    if(p_Information_Channels != NULL)
        {
            p_Information_Channels->_setItsUser(this);
        }
    _setItsInformation_Channels(p_Information_Channels);
}

void User::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void User::cleanUpRelations(void) {
    if(itsInformation_Channels != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsInformation_Channels");
            const User* p_User = itsInformation_Channels->getItsUser();
            if(p_User != NULL)
                {
                    itsInformation_Channels->__setItsUser(NULL);
                }
            itsInformation_Channels = NULL;
        }
}

void User::__setItsInformation_Channels(Information_Channels* const p_Information_Channels) {
    itsInformation_Channels = p_Information_Channels;
    if(p_Information_Channels != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsInformation_Channels", p_Information_Channels, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsInformation_Channels");
        }
}

void User::_setItsInformation_Channels(Information_Channels* const p_Information_Channels) {
    if(itsInformation_Channels != NULL)
        {
            itsInformation_Channels->__setItsUser(NULL);
        }
    __setItsInformation_Channels(p_Information_Channels);
}

void User::_clearItsInformation_Channels(void) {
    NOTIFY_RELATION_CLEARED("itsInformation_Channels");
    itsInformation_Channels = NULL;
}

void User::OMCreateInstances(void) {
}

void User::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUser::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsInformation_Channels", false, true);
    if(myReal->itsInformation_Channels)
        {
            aomsRelations->ADD_ITEM(myReal->itsInformation_Channels);
        }
}
//#]

IMPLEMENT_META_P(User, SystemContext, SystemContext, false, OMAnimatedUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/
