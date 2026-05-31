/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standards_and_Regulations
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Standards_and_Regulations.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Standards_and_Regulations.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SystemContext_Standards_and_Regulations_Standards_and_Regulations_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Standards_and_Regulations
Standards_and_Regulations::Standards_and_Regulations(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Standards_and_Regulations, Standards_and_Regulations(), 0, SystemContext_Standards_and_Regulations_Standards_and_Regulations_SERIALIZE);
}

Standards_and_Regulations::~Standards_and_Regulations(void) {
    NOTIFY_DESTRUCTOR(~Standards_and_Regulations, true);
    cleanUpRelations();
}

const SMSWTD* Standards_and_Regulations::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Standards_and_Regulations::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsStandards_and_Regulations(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Standards_and_Regulations::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Standards_and_Regulations* p_Standards_and_Regulations = itsSMSWTD->getItsStandards_and_Regulations();
            if(p_Standards_and_Regulations != NULL)
                {
                    itsSMSWTD->__setItsStandards_and_Regulations(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Standards_and_Regulations::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Standards_and_Regulations::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsStandards_and_Regulations(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Standards_and_Regulations::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStandards_and_Regulations::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Standards_and_Regulations, SystemContext, SystemContext, false, OMAnimatedStandards_and_Regulations)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standards_and_Regulations.cpp
*********************************************************************/
