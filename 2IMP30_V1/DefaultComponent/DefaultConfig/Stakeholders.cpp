/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholders
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Stakeholders.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SystemContext_Stakeholders_Stakeholders_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## actor Stakeholders
Stakeholders::Stakeholders(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Stakeholders, Stakeholders(), 0, SystemContext_Stakeholders_Stakeholders_SERIALIZE);
    initRelations();
}

Stakeholders::~Stakeholders(void) {
    NOTIFY_DESTRUCTOR(~Stakeholders, true);
    cleanUpRelations();
}

const SMSWTD* Stakeholders::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Stakeholders::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsStakeholders(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Stakeholders::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Stakeholders::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Stakeholders* p_Stakeholders = itsSMSWTD->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsSMSWTD->__setItsStakeholders(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Stakeholders::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Stakeholders::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsStakeholders(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Stakeholders::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void Stakeholders::OMCreateInstances(void) {
}

void Stakeholders::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStakeholders::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Stakeholders, SystemContext, SystemContext, false, OMAnimatedStakeholders)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.cpp
*********************************************************************/
