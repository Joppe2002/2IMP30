/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government_Networks
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government_Networks.h"
//#[ ignore
#define SystemContext_Government_Networks_Government_Networks_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class Government_Networks
//#[ ignore
Government_Networks::p_Government_Networks_C::p_Government_Networks_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

Government_Networks::p_Government_Networks_C::~p_Government_Networks_C(void) {
    cleanUpRelations();
}

void Government_Networks::p_Government_Networks_C::connectGovernment_Networks(Government_Networks* part) {
    setItsInt_warning_type_ProxyFlowPropertyInterface(part);
    
}

int_warning_type_ProxyFlowPropertyInterface* Government_Networks::p_Government_Networks_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void Government_Networks::p_Government_Networks_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void Government_Networks::p_Government_Networks_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Government_Networks_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}

Government_Networks::p_Storm_Input_C::p_Storm_Input_C(void) : bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), _p_(0), itsBool_pred_direction_ProxyFlowPropertyInterface(NULL), itsFloat_pred_probability_ProxyFlowPropertyInterface(NULL), itsFloat_pred_severity_ProxyFlowPropertyInterface(NULL), itsFloat_pred_speed_ProxyFlowPropertyInterface(NULL), itsFloat_storm_probability_ProxyFlowPropertyInterface(NULL) {
}

Government_Networks::p_Storm_Input_C::~p_Storm_Input_C(void) {
    cleanUpRelations();
}

void Government_Networks::p_Storm_Input_C::connectGovernment_Networks(Government_Networks* part) {
    setItsBool_pred_direction_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_severity_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_probability_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_speed_ProxyFlowPropertyInterface(part);
    setItsFloat_storm_probability_ProxyFlowPropertyInterface(part);
    
}

bool_pred_direction_ProxyFlowPropertyInterface* Government_Networks::p_Storm_Input_C::getItsBool_pred_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_probability_ProxyFlowPropertyInterface* Government_Networks::p_Storm_Input_C::getItsFloat_pred_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_severity_ProxyFlowPropertyInterface* Government_Networks::p_Storm_Input_C::getItsFloat_pred_severity_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_speed_ProxyFlowPropertyInterface* Government_Networks::p_Storm_Input_C::getItsFloat_pred_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

float_storm_probability_ProxyFlowPropertyInterface* Government_Networks::p_Storm_Input_C::getItsFloat_storm_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

void Government_Networks::p_Storm_Input_C::setPred_direction(bool p_pred_direction) {
    
    if (itsBool_pred_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_pred_direction_ProxyFlowPropertyInterface->setPred_direction(p_pred_direction);
    }
    
}

void Government_Networks::p_Storm_Input_C::setPred_probability(float p_pred_probability) {
    
    if (itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ProxyFlowPropertyInterface->setPred_probability(p_pred_probability);
    }
    
}

void Government_Networks::p_Storm_Input_C::setPred_severity(float p_pred_severity) {
    
    if (itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_severity_ProxyFlowPropertyInterface->setPred_severity(p_pred_severity);
    }
    
}

void Government_Networks::p_Storm_Input_C::setPred_speed(float p_pred_speed) {
    
    if (itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_speed_ProxyFlowPropertyInterface->setPred_speed(p_pred_speed);
    }
    
}

void Government_Networks::p_Storm_Input_C::setStorm_probability(float p_storm_probability) {
    
    if (itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_storm_probability_ProxyFlowPropertyInterface->setStorm_probability(p_storm_probability);
    }
    
}

void Government_Networks::p_Storm_Input_C::setItsBool_pred_direction_ProxyFlowPropertyInterface(bool_pred_direction_ProxyFlowPropertyInterface* const p_bool_pred_direction_ProxyFlowPropertyInterface) {
    itsBool_pred_direction_ProxyFlowPropertyInterface = p_bool_pred_direction_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Storm_Input_C::setItsFloat_pred_probability_ProxyFlowPropertyInterface(float_pred_probability_ProxyFlowPropertyInterface* const p_float_pred_probability_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ProxyFlowPropertyInterface = p_float_pred_probability_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Storm_Input_C::setItsFloat_pred_severity_ProxyFlowPropertyInterface(float_pred_severity_ProxyFlowPropertyInterface* const p_float_pred_severity_ProxyFlowPropertyInterface) {
    itsFloat_pred_severity_ProxyFlowPropertyInterface = p_float_pred_severity_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Storm_Input_C::setItsFloat_pred_speed_ProxyFlowPropertyInterface(float_pred_speed_ProxyFlowPropertyInterface* const p_float_pred_speed_ProxyFlowPropertyInterface) {
    itsFloat_pred_speed_ProxyFlowPropertyInterface = p_float_pred_speed_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Storm_Input_C::setItsFloat_storm_probability_ProxyFlowPropertyInterface(float_storm_probability_ProxyFlowPropertyInterface* const p_float_storm_probability_ProxyFlowPropertyInterface) {
    itsFloat_storm_probability_ProxyFlowPropertyInterface = p_float_storm_probability_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Storm_Input_C::cleanUpRelations(void) {
    if(itsBool_pred_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_pred_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_severity_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_speed_ProxyFlowPropertyInterface = NULL;
        }
    if(itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_storm_probability_ProxyFlowPropertyInterface = NULL;
        }
}

Government_Networks::p_Tsunami_Storm_C::p_Tsunami_Storm_C(void) : float_pred_probability_ts_ProxyFlowPropertyInterface(), _p_(0), itsFloat_pred_probability_ts_ProxyFlowPropertyInterface(NULL) {
}

Government_Networks::p_Tsunami_Storm_C::~p_Tsunami_Storm_C(void) {
    cleanUpRelations();
}

void Government_Networks::p_Tsunami_Storm_C::connectGovernment_Networks(Government_Networks* part) {
    setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(part);
    
}

float_pred_probability_ts_ProxyFlowPropertyInterface* Government_Networks::p_Tsunami_Storm_C::getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(void) {
    return this;
}

void Government_Networks::p_Tsunami_Storm_C::setPred_probability_ts(float p_pred_probability_ts) {
    
    if (itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ts_ProxyFlowPropertyInterface->setPred_probability_ts(p_pred_probability_ts);
    }
    
}

void Government_Networks::p_Tsunami_Storm_C::setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(float_pred_probability_ts_ProxyFlowPropertyInterface* const p_float_pred_probability_ts_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = p_float_pred_probability_ts_ProxyFlowPropertyInterface;
}

void Government_Networks::p_Tsunami_Storm_C::cleanUpRelations(void) {
    if(itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Government_Networks::Government_Networks(void) : Information_Channels(), int_warning_type_ProxyFlowPropertyInterface(), bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), float_pred_probability_ts_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(Government_Networks, Government_Networks(), 0, SystemContext_Government_Networks_Government_Networks_SERIALIZE);
    initRelations();
}

Government_Networks::~Government_Networks(void) {
    NOTIFY_DESTRUCTOR(~Government_Networks, false);
}

//#[ ignore
void Government_Networks::setPred_direction(bool p_pred_direction) {
    if (pred_direction != p_pred_direction) {
        pred_direction = p_pred_direction;
        FLOW_DATA_RECEIVE("pred_direction", pred_direction, x2String);
    }
    
}

void Government_Networks::setPred_probability(float p_pred_probability) {
    if (pred_probability != p_pred_probability) {
        pred_probability = p_pred_probability;
        FLOW_DATA_RECEIVE("pred_probability", pred_probability, x2String);
    }
    
}

void Government_Networks::setPred_probability_ts(float p_pred_probability_ts) {
    if (pred_probability_ts != p_pred_probability_ts) {
        pred_probability_ts = p_pred_probability_ts;
        FLOW_DATA_RECEIVE("pred_probability_ts", pred_probability_ts, x2String);
    }
    
}

void Government_Networks::setPred_severity(float p_pred_severity) {
    if (pred_severity != p_pred_severity) {
        pred_severity = p_pred_severity;
        FLOW_DATA_RECEIVE("pred_severity", pred_severity, x2String);
    }
    
}

void Government_Networks::setPred_speed(float p_pred_speed) {
    if (pred_speed != p_pred_speed) {
        pred_speed = p_pred_speed;
        FLOW_DATA_RECEIVE("pred_speed", pred_speed, x2String);
    }
    
}

void Government_Networks::setStorm_probability(float p_storm_probability) {
    if (storm_probability != p_storm_probability) {
        storm_probability = p_storm_probability;
        FLOW_DATA_RECEIVE("storm_probability", storm_probability, x2String);
    }
    
}

void Government_Networks::setWarning_type(int p_warning_type) {
    if (warning_type != p_warning_type) {
        warning_type = p_warning_type;
        FLOW_DATA_RECEIVE("warning_type", warning_type, x2String);
    }
    
}
//#]

Government_Networks::p_Government_Networks_C* Government_Networks::getP_Government_Networks(void) const {
    return (Government_Networks::p_Government_Networks_C*) &p_Government_Networks;
}

Government_Networks::p_Government_Networks_C* Government_Networks::get_p_Government_Networks(void) const {
    return (Government_Networks::p_Government_Networks_C*) &p_Government_Networks;
}

Government_Networks::p_Storm_Input_C* Government_Networks::getP_Storm_Input(void) const {
    return (Government_Networks::p_Storm_Input_C*) &p_Storm_Input;
}

Government_Networks::p_Storm_Input_C* Government_Networks::get_p_Storm_Input(void) const {
    return (Government_Networks::p_Storm_Input_C*) &p_Storm_Input;
}

Government_Networks::p_Tsunami_Storm_C* Government_Networks::getP_Tsunami_Storm(void) const {
    return (Government_Networks::p_Tsunami_Storm_C*) &p_Tsunami_Storm;
}

Government_Networks::p_Tsunami_Storm_C* Government_Networks::get_p_Tsunami_Storm(void) const {
    return (Government_Networks::p_Tsunami_Storm_C*) &p_Tsunami_Storm;
}

const bool Government_Networks::getPred_direction(void) const {
    return pred_direction;
}

const float Government_Networks::getPred_probability(void) const {
    return pred_probability;
}

const float Government_Networks::getPred_probability_ts(void) const {
    return pred_probability_ts;
}

const float Government_Networks::getPred_severity(void) const {
    return pred_severity;
}

const float Government_Networks::getPred_speed(void) const {
    return pred_speed;
}

const float Government_Networks::getStorm_probability(void) const {
    return storm_probability;
}

const int Government_Networks::getWarning_type(void) const {
    return warning_type;
}

void Government_Networks::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Government_Networks::OMCreateInstances(void) {
}

void Government_Networks::OMConnectRelations(void) {
    if (get_p_Government_Networks() != NULL) {
        get_p_Government_Networks()->connectGovernment_Networks(this);
    }
    if (get_p_Storm_Input() != NULL) {
        get_p_Storm_Input()->connectGovernment_Networks(this);
    }
    if (get_p_Tsunami_Storm() != NULL) {
        get_p_Tsunami_Storm()->connectGovernment_Networks(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment_Networks::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("warning_type", x2String(myReal->warning_type));
    aomsAttributes->addAttribute("pred_direction", x2String(myReal->pred_direction));
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("pred_severity", x2String(myReal->pred_severity));
    aomsAttributes->addAttribute("pred_speed", x2String(myReal->pred_speed));
    aomsAttributes->addAttribute("storm_probability", x2String(myReal->storm_probability));
    aomsAttributes->addAttribute("pred_probability_ts", x2String(myReal->pred_probability_ts));
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedGovernment_Networks::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Government_Networks, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedGovernment_Networks)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.cpp
*********************************************************************/
