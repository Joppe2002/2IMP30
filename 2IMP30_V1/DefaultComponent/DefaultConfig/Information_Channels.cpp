/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Information_Channels
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Information_Channels.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Information_Channels.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define SystemContext_Information_Channels_Information_Channels_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Information_Channels
Information_Channels::Information_Channels(void) : itsSMSWTD(NULL), itsUser(NULL) {
    NOTIFY_CONSTRUCTOR(Information_Channels, Information_Channels(), 0, SystemContext_Information_Channels_Information_Channels_SERIALIZE);
    initRelations();
}

Information_Channels::~Information_Channels(void) {
    NOTIFY_DESTRUCTOR(~Information_Channels, true);
    cleanUpRelations();
}

const SMSWTD* Information_Channels::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Information_Channels::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsInformation_Channels(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

const User* Information_Channels::getItsUser(void) const {
    return itsUser;
}

void Information_Channels::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsInformation_Channels(this);
        }
    _setItsUser(p_User);
}

void Information_Channels::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Information_Channels::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Information_Channels* p_Information_Channels = itsSMSWTD->getItsInformation_Channels();
            if(p_Information_Channels != NULL)
                {
                    itsSMSWTD->__setItsInformation_Channels(NULL);
                }
            itsSMSWTD = NULL;
        }
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            const Information_Channels* p_Information_Channels = itsUser->getItsInformation_Channels();
            if(p_Information_Channels != NULL)
                {
                    itsUser->__setItsInformation_Channels(NULL);
                }
            itsUser = NULL;
        }
}

void Information_Channels::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Information_Channels::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsInformation_Channels(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Information_Channels::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void Information_Channels::__setItsUser(User* const p_User) {
    itsUser = p_User;
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
}

void Information_Channels::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsInformation_Channels(NULL);
        }
    __setItsUser(p_User);
}

void Information_Channels::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

void Information_Channels::OMCreateInstances(void) {
}

void Information_Channels::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedInformation_Channels::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Information_Channels, SystemContext, SystemContext, false, OMAnimatedInformation_Channels)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Information_Channels.cpp
*********************************************************************/
