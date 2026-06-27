/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Mobile_Apps
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Mobile_Apps.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Mobile_Apps.h"
//#[ ignore
#define SystemContext_Mobile_Apps_Mobile_Apps_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Mobile_Apps
//#[ ignore
Mobile_Apps::p_Warning_Input_C::p_Warning_Input_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

Mobile_Apps::p_Warning_Input_C::~p_Warning_Input_C(void) {
    cleanUpRelations();
}

void Mobile_Apps::p_Warning_Input_C::connectMobile_Apps(Mobile_Apps* part) {
    setItsInt_warning_type_ProxyFlowPropertyInterface(part);
    
}

int_warning_type_ProxyFlowPropertyInterface* Mobile_Apps::p_Warning_Input_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void Mobile_Apps::p_Warning_Input_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void Mobile_Apps::p_Warning_Input_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void Mobile_Apps::p_Warning_Input_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Mobile_Apps::Mobile_Apps(void) : Information_Channels(), int_warning_type_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(Mobile_Apps, Mobile_Apps(), 0, SystemContext_Mobile_Apps_Mobile_Apps_SERIALIZE);
    initRelations();
}

Mobile_Apps::~Mobile_Apps(void) {
    NOTIFY_DESTRUCTOR(~Mobile_Apps, false);
}

//#[ ignore
void Mobile_Apps::setWarning_type(int p_warning_type) {
    if (warning_type != p_warning_type) {
        warning_type = p_warning_type;
        FLOW_DATA_RECEIVE("warning_type", warning_type, x2String);
    }
    
}
//#]

Mobile_Apps::p_Warning_Input_C* Mobile_Apps::getP_Warning_Input(void) const {
    return (Mobile_Apps::p_Warning_Input_C*) &p_Warning_Input;
}

Mobile_Apps::p_Warning_Input_C* Mobile_Apps::get_p_Warning_Input(void) const {
    return (Mobile_Apps::p_Warning_Input_C*) &p_Warning_Input;
}

const int Mobile_Apps::getWarning_type(void) const {
    return warning_type;
}

void Mobile_Apps::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Mobile_Apps::OMCreateInstances(void) {
}

void Mobile_Apps::OMConnectRelations(void) {
    if (get_p_Warning_Input() != NULL) {
        get_p_Warning_Input()->connectMobile_Apps(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMobile_Apps::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("warning_type", x2String(myReal->warning_type));
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedMobile_Apps::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Mobile_Apps, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedMobile_Apps)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Mobile_Apps.cpp
*********************************************************************/
