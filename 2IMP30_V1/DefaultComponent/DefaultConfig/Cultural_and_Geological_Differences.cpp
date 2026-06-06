/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cultural_and_Geological_Differences
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Cultural_and_Geological_Differences.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cultural_and_Geological_Differences.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SystemContext_Cultural_and_Geological_Differences_Cultural_and_Geological_Differences_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Cultural_and_Geological_Differences
Cultural_and_Geological_Differences::Cultural_and_Geological_Differences(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Cultural_and_Geological_Differences, Cultural_and_Geological_Differences(), 0, SystemContext_Cultural_and_Geological_Differences_Cultural_and_Geological_Differences_SERIALIZE);
    initRelations();
}

Cultural_and_Geological_Differences::~Cultural_and_Geological_Differences(void) {
    NOTIFY_DESTRUCTOR(~Cultural_and_Geological_Differences, true);
    cleanUpRelations();
}

const SMSWTD* Cultural_and_Geological_Differences::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Cultural_and_Geological_Differences::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsCultural_and_Geological_Differences(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Cultural_and_Geological_Differences::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Cultural_and_Geological_Differences::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Cultural_and_Geological_Differences* p_Cultural_and_Geological_Differences = itsSMSWTD->getItsCultural_and_Geological_Differences();
            if(p_Cultural_and_Geological_Differences != NULL)
                {
                    itsSMSWTD->__setItsCultural_and_Geological_Differences(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Cultural_and_Geological_Differences::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Cultural_and_Geological_Differences::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsCultural_and_Geological_Differences(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Cultural_and_Geological_Differences::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void Cultural_and_Geological_Differences::OMCreateInstances(void) {
}

void Cultural_and_Geological_Differences::OMConnectRelations(void) {
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCultural_and_Geological_Differences::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Cultural_and_Geological_Differences, SystemContext, SystemContext, false, OMAnimatedCultural_and_Geological_Differences)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cultural_and_Geological_Differences.cpp
*********************************************************************/
