/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmergencyResponder_Channels
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\EmergencyResponder_Channels.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmergencyResponder_Channels.h"
//#[ ignore
#define SystemContext_EmergencyResponder_Channels_EmergencyResponder_Channels_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class EmergencyResponder_Channels
//#[ ignore
EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::p_EmergencyResponder_Channels_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::~p_EmergencyResponder_Channels_C(void) {
    cleanUpRelations();
}

void EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::connectEmergencyResponder_Channels(EmergencyResponder_Channels* part) {
    setItsInt_warning_type_ProxyFlowPropertyInterface(part);
    
}

int_warning_type_ProxyFlowPropertyInterface* EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void EmergencyResponder_Channels::p_EmergencyResponder_Channels_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

EmergencyResponder_Channels::EmergencyResponder_Channels(void) : Information_Channels(), int_warning_type_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(EmergencyResponder_Channels, EmergencyResponder_Channels(), 0, SystemContext_EmergencyResponder_Channels_EmergencyResponder_Channels_SERIALIZE);
    initRelations();
}

EmergencyResponder_Channels::~EmergencyResponder_Channels(void) {
    NOTIFY_DESTRUCTOR(~EmergencyResponder_Channels, false);
}

//#[ ignore
void EmergencyResponder_Channels::setWarning_type(int p_warning_type) {
    if (warning_type != p_warning_type) {
        warning_type = p_warning_type;
        FLOW_DATA_RECEIVE("warning_type", warning_type, x2String);
    }
    
}
//#]

EmergencyResponder_Channels::p_EmergencyResponder_Channels_C* EmergencyResponder_Channels::getP_EmergencyResponder_Channels(void) const {
    return (EmergencyResponder_Channels::p_EmergencyResponder_Channels_C*) &p_EmergencyResponder_Channels;
}

EmergencyResponder_Channels::p_EmergencyResponder_Channels_C* EmergencyResponder_Channels::get_p_EmergencyResponder_Channels(void) const {
    return (EmergencyResponder_Channels::p_EmergencyResponder_Channels_C*) &p_EmergencyResponder_Channels;
}

const int EmergencyResponder_Channels::getWarning_type(void) const {
    return warning_type;
}

void EmergencyResponder_Channels::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void EmergencyResponder_Channels::OMCreateInstances(void) {
}

void EmergencyResponder_Channels::OMConnectRelations(void) {
    if (get_p_EmergencyResponder_Channels() != NULL) {
        get_p_EmergencyResponder_Channels()->connectEmergencyResponder_Channels(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEmergencyResponder_Channels::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("warning_type", x2String(myReal->warning_type));
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedEmergencyResponder_Channels::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(EmergencyResponder_Channels, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedEmergencyResponder_Channels)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmergencyResponder_Channels.cpp
*********************************************************************/
