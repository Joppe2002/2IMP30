/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMS_Signaling
//!	Generated Date	: Tue, 16, Jun 2026  
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
//#[ ignore
SMS_Signaling::p_SMS_Signaling_C::p_SMS_Signaling_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

SMS_Signaling::p_SMS_Signaling_C::~p_SMS_Signaling_C(void) {
    cleanUpRelations();
}

void SMS_Signaling::p_SMS_Signaling_C::connectSMS_Signaling(SMS_Signaling* part) {
    setItsInt_warning_type_ProxyFlowPropertyInterface(part);
    
}

int_warning_type_ProxyFlowPropertyInterface* SMS_Signaling::p_SMS_Signaling_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void SMS_Signaling::p_SMS_Signaling_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void SMS_Signaling::p_SMS_Signaling_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void SMS_Signaling::p_SMS_Signaling_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

SMS_Signaling::SMS_Signaling(void) : Information_Channels(), int_warning_type_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(SMS_Signaling, SMS_Signaling(), 0, SystemContext_SMS_Signaling_SMS_Signaling_SERIALIZE);
    initRelations();
}

SMS_Signaling::~SMS_Signaling(void) {
    NOTIFY_DESTRUCTOR(~SMS_Signaling, false);
}

//#[ ignore
void SMS_Signaling::setWarning_type(int p_warning_type) {
    if (warning_type != p_warning_type) {
        warning_type = p_warning_type;
        FLOW_DATA_RECEIVE("warning_type", warning_type, x2String);
    }
    
}
//#]

SMS_Signaling::p_SMS_Signaling_C* SMS_Signaling::getP_SMS_Signaling(void) const {
    return (SMS_Signaling::p_SMS_Signaling_C*) &p_SMS_Signaling;
}

SMS_Signaling::p_SMS_Signaling_C* SMS_Signaling::get_p_SMS_Signaling(void) const {
    return (SMS_Signaling::p_SMS_Signaling_C*) &p_SMS_Signaling;
}

const int SMS_Signaling::getWarning_type(void) const {
    return warning_type;
}

void SMS_Signaling::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void SMS_Signaling::OMCreateInstances(void) {
}

void SMS_Signaling::OMConnectRelations(void) {
    if (get_p_SMS_Signaling() != NULL) {
        get_p_SMS_Signaling()->connectSMS_Signaling(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMS_Signaling::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("warning_type", x2String(myReal->warning_type));
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
