/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: News_Outlets
//!	Generated Date	: Sat, 27, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\News_Outlets.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "News_Outlets.h"
//#[ ignore
#define SystemContext_News_Outlets_News_Outlets_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## class News_Outlets
//#[ ignore
News_Outlets::p_News_Outlets_C::p_News_Outlets_C(void) : int_warning_type_ProxyFlowPropertyInterface(), _p_(0), itsInt_warning_type_ProxyFlowPropertyInterface(NULL) {
}

News_Outlets::p_News_Outlets_C::~p_News_Outlets_C(void) {
    cleanUpRelations();
}

void News_Outlets::p_News_Outlets_C::connectNews_Outlets(News_Outlets* part) {
    setItsInt_warning_type_ProxyFlowPropertyInterface(part);
    
}

int_warning_type_ProxyFlowPropertyInterface* News_Outlets::p_News_Outlets_C::getItsInt_warning_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void News_Outlets::p_News_Outlets_C::setWarning_type(int p_warning_type) {
    
    if (itsInt_warning_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_warning_type_ProxyFlowPropertyInterface->setWarning_type(p_warning_type);
    }
    
}

void News_Outlets::p_News_Outlets_C::setItsInt_warning_type_ProxyFlowPropertyInterface(int_warning_type_ProxyFlowPropertyInterface* const p_int_warning_type_ProxyFlowPropertyInterface) {
    itsInt_warning_type_ProxyFlowPropertyInterface = p_int_warning_type_ProxyFlowPropertyInterface;
}

void News_Outlets::p_News_Outlets_C::cleanUpRelations(void) {
    if(itsInt_warning_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_warning_type_ProxyFlowPropertyInterface = NULL;
        }
}

News_Outlets::p_Storm_Input_C::p_Storm_Input_C(void) : bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), _p_(0), itsBool_pred_direction_ProxyFlowPropertyInterface(NULL), itsFloat_pred_probability_ProxyFlowPropertyInterface(NULL), itsFloat_pred_severity_ProxyFlowPropertyInterface(NULL), itsFloat_pred_speed_ProxyFlowPropertyInterface(NULL), itsFloat_storm_probability_ProxyFlowPropertyInterface(NULL) {
}

News_Outlets::p_Storm_Input_C::~p_Storm_Input_C(void) {
    cleanUpRelations();
}

void News_Outlets::p_Storm_Input_C::connectNews_Outlets(News_Outlets* part) {
    setItsBool_pred_direction_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_severity_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_probability_ProxyFlowPropertyInterface(part);
    setItsFloat_pred_speed_ProxyFlowPropertyInterface(part);
    setItsFloat_storm_probability_ProxyFlowPropertyInterface(part);
    
}

bool_pred_direction_ProxyFlowPropertyInterface* News_Outlets::p_Storm_Input_C::getItsBool_pred_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_probability_ProxyFlowPropertyInterface* News_Outlets::p_Storm_Input_C::getItsFloat_pred_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_severity_ProxyFlowPropertyInterface* News_Outlets::p_Storm_Input_C::getItsFloat_pred_severity_ProxyFlowPropertyInterface(void) {
    return this;
}

float_pred_speed_ProxyFlowPropertyInterface* News_Outlets::p_Storm_Input_C::getItsFloat_pred_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

float_storm_probability_ProxyFlowPropertyInterface* News_Outlets::p_Storm_Input_C::getItsFloat_storm_probability_ProxyFlowPropertyInterface(void) {
    return this;
}

void News_Outlets::p_Storm_Input_C::setPred_direction(bool p_pred_direction) {
    
    if (itsBool_pred_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_pred_direction_ProxyFlowPropertyInterface->setPred_direction(p_pred_direction);
    }
    
}

void News_Outlets::p_Storm_Input_C::setPred_probability(float p_pred_probability) {
    
    if (itsFloat_pred_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ProxyFlowPropertyInterface->setPred_probability(p_pred_probability);
    }
    
}

void News_Outlets::p_Storm_Input_C::setPred_severity(float p_pred_severity) {
    
    if (itsFloat_pred_severity_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_severity_ProxyFlowPropertyInterface->setPred_severity(p_pred_severity);
    }
    
}

void News_Outlets::p_Storm_Input_C::setPred_speed(float p_pred_speed) {
    
    if (itsFloat_pred_speed_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_speed_ProxyFlowPropertyInterface->setPred_speed(p_pred_speed);
    }
    
}

void News_Outlets::p_Storm_Input_C::setStorm_probability(float p_storm_probability) {
    
    if (itsFloat_storm_probability_ProxyFlowPropertyInterface != NULL) {
        itsFloat_storm_probability_ProxyFlowPropertyInterface->setStorm_probability(p_storm_probability);
    }
    
}

void News_Outlets::p_Storm_Input_C::setItsBool_pred_direction_ProxyFlowPropertyInterface(bool_pred_direction_ProxyFlowPropertyInterface* const p_bool_pred_direction_ProxyFlowPropertyInterface) {
    itsBool_pred_direction_ProxyFlowPropertyInterface = p_bool_pred_direction_ProxyFlowPropertyInterface;
}

void News_Outlets::p_Storm_Input_C::setItsFloat_pred_probability_ProxyFlowPropertyInterface(float_pred_probability_ProxyFlowPropertyInterface* const p_float_pred_probability_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ProxyFlowPropertyInterface = p_float_pred_probability_ProxyFlowPropertyInterface;
}

void News_Outlets::p_Storm_Input_C::setItsFloat_pred_severity_ProxyFlowPropertyInterface(float_pred_severity_ProxyFlowPropertyInterface* const p_float_pred_severity_ProxyFlowPropertyInterface) {
    itsFloat_pred_severity_ProxyFlowPropertyInterface = p_float_pred_severity_ProxyFlowPropertyInterface;
}

void News_Outlets::p_Storm_Input_C::setItsFloat_pred_speed_ProxyFlowPropertyInterface(float_pred_speed_ProxyFlowPropertyInterface* const p_float_pred_speed_ProxyFlowPropertyInterface) {
    itsFloat_pred_speed_ProxyFlowPropertyInterface = p_float_pred_speed_ProxyFlowPropertyInterface;
}

void News_Outlets::p_Storm_Input_C::setItsFloat_storm_probability_ProxyFlowPropertyInterface(float_storm_probability_ProxyFlowPropertyInterface* const p_float_storm_probability_ProxyFlowPropertyInterface) {
    itsFloat_storm_probability_ProxyFlowPropertyInterface = p_float_storm_probability_ProxyFlowPropertyInterface;
}

void News_Outlets::p_Storm_Input_C::cleanUpRelations(void) {
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

News_Outlets::p_Tsunami_Input_C::p_Tsunami_Input_C(void) : float_pred_probability_ts_ProxyFlowPropertyInterface(), _p_(0), itsFloat_pred_probability_ts_ProxyFlowPropertyInterface(NULL) {
}

News_Outlets::p_Tsunami_Input_C::~p_Tsunami_Input_C(void) {
    cleanUpRelations();
}

void News_Outlets::p_Tsunami_Input_C::connectNews_Outlets(News_Outlets* part) {
    setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(part);
    
}

float_pred_probability_ts_ProxyFlowPropertyInterface* News_Outlets::p_Tsunami_Input_C::getItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(void) {
    return this;
}

void News_Outlets::p_Tsunami_Input_C::setPred_probability_ts(float p_pred_probability_ts) {
    
    if (itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL) {
        itsFloat_pred_probability_ts_ProxyFlowPropertyInterface->setPred_probability_ts(p_pred_probability_ts);
    }
    
}

void News_Outlets::p_Tsunami_Input_C::setItsFloat_pred_probability_ts_ProxyFlowPropertyInterface(float_pred_probability_ts_ProxyFlowPropertyInterface* const p_float_pred_probability_ts_ProxyFlowPropertyInterface) {
    itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = p_float_pred_probability_ts_ProxyFlowPropertyInterface;
}

void News_Outlets::p_Tsunami_Input_C::cleanUpRelations(void) {
    if(itsFloat_pred_probability_ts_ProxyFlowPropertyInterface != NULL)
        {
            itsFloat_pred_probability_ts_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

News_Outlets::News_Outlets(void) : Information_Channels(), int_warning_type_ProxyFlowPropertyInterface(), bool_pred_direction_ProxyFlowPropertyInterface(), float_pred_severity_ProxyFlowPropertyInterface(), float_pred_probability_ProxyFlowPropertyInterface(), float_pred_speed_ProxyFlowPropertyInterface(), float_storm_probability_ProxyFlowPropertyInterface(), float_pred_probability_ts_ProxyFlowPropertyInterface() {
    NOTIFY_CONSTRUCTOR(News_Outlets, News_Outlets(), 0, SystemContext_News_Outlets_News_Outlets_SERIALIZE);
    initRelations();
}

News_Outlets::~News_Outlets(void) {
    NOTIFY_DESTRUCTOR(~News_Outlets, false);
}

//#[ ignore
void News_Outlets::setPred_direction(bool p_pred_direction) {
    if (pred_direction != p_pred_direction) {
        pred_direction = p_pred_direction;
        FLOW_DATA_RECEIVE("pred_direction", pred_direction, x2String);
    }
    
}

void News_Outlets::setPred_probability(float p_pred_probability) {
    if (pred_probability != p_pred_probability) {
        pred_probability = p_pred_probability;
        FLOW_DATA_RECEIVE("pred_probability", pred_probability, x2String);
    }
    
}

void News_Outlets::setPred_probability_ts(float p_pred_probability_ts) {
    if (pred_probability_ts != p_pred_probability_ts) {
        pred_probability_ts = p_pred_probability_ts;
        FLOW_DATA_RECEIVE("pred_probability_ts", pred_probability_ts, x2String);
    }
    
}

void News_Outlets::setPred_severity(float p_pred_severity) {
    if (pred_severity != p_pred_severity) {
        pred_severity = p_pred_severity;
        FLOW_DATA_RECEIVE("pred_severity", pred_severity, x2String);
    }
    
}

void News_Outlets::setPred_speed(float p_pred_speed) {
    if (pred_speed != p_pred_speed) {
        pred_speed = p_pred_speed;
        FLOW_DATA_RECEIVE("pred_speed", pred_speed, x2String);
    }
    
}

void News_Outlets::setStorm_probability(float p_storm_probability) {
    if (storm_probability != p_storm_probability) {
        storm_probability = p_storm_probability;
        FLOW_DATA_RECEIVE("storm_probability", storm_probability, x2String);
    }
    
}

void News_Outlets::setWarning_type(int p_warning_type) {
    if (warning_type != p_warning_type) {
        warning_type = p_warning_type;
        FLOW_DATA_RECEIVE("warning_type", warning_type, x2String);
    }
    
}
//#]

News_Outlets::p_News_Outlets_C* News_Outlets::getP_News_Outlets(void) const {
    return (News_Outlets::p_News_Outlets_C*) &p_News_Outlets;
}

News_Outlets::p_News_Outlets_C* News_Outlets::get_p_News_Outlets(void) const {
    return (News_Outlets::p_News_Outlets_C*) &p_News_Outlets;
}

News_Outlets::p_Storm_Input_C* News_Outlets::getP_Storm_Input(void) const {
    return (News_Outlets::p_Storm_Input_C*) &p_Storm_Input;
}

News_Outlets::p_Storm_Input_C* News_Outlets::get_p_Storm_Input(void) const {
    return (News_Outlets::p_Storm_Input_C*) &p_Storm_Input;
}

News_Outlets::p_Tsunami_Input_C* News_Outlets::getP_Tsunami_Input(void) const {
    return (News_Outlets::p_Tsunami_Input_C*) &p_Tsunami_Input;
}

News_Outlets::p_Tsunami_Input_C* News_Outlets::get_p_Tsunami_Input(void) const {
    return (News_Outlets::p_Tsunami_Input_C*) &p_Tsunami_Input;
}

const bool News_Outlets::getPred_direction(void) const {
    return pred_direction;
}

const float News_Outlets::getPred_probability(void) const {
    return pred_probability;
}

const float News_Outlets::getPred_probability_ts(void) const {
    return pred_probability_ts;
}

const float News_Outlets::getPred_severity(void) const {
    return pred_severity;
}

const float News_Outlets::getPred_speed(void) const {
    return pred_speed;
}

const float News_Outlets::getStorm_probability(void) const {
    return storm_probability;
}

const int News_Outlets::getWarning_type(void) const {
    return warning_type;
}

void News_Outlets::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void News_Outlets::OMCreateInstances(void) {
}

void News_Outlets::OMConnectRelations(void) {
    if (get_p_News_Outlets() != NULL) {
        get_p_News_Outlets()->connectNews_Outlets(this);
    }
    if (get_p_Storm_Input() != NULL) {
        get_p_Storm_Input()->connectNews_Outlets(this);
    }
    if (get_p_Tsunami_Input() != NULL) {
        get_p_Tsunami_Input()->connectNews_Outlets(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNews_Outlets::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("warning_type", x2String(myReal->warning_type));
    aomsAttributes->addAttribute("pred_direction", x2String(myReal->pred_direction));
    aomsAttributes->addAttribute("pred_probability", x2String(myReal->pred_probability));
    aomsAttributes->addAttribute("pred_severity", x2String(myReal->pred_severity));
    aomsAttributes->addAttribute("pred_speed", x2String(myReal->pred_speed));
    aomsAttributes->addAttribute("storm_probability", x2String(myReal->storm_probability));
    aomsAttributes->addAttribute("pred_probability_ts", x2String(myReal->pred_probability_ts));
    OMAnimatedInformation_Channels::serializeAttributes(aomsAttributes);
}

void OMAnimatedNews_Outlets::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedInformation_Channels::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(News_Outlets, SystemContext, false, Information_Channels, OMAnimatedInformation_Channels, OMAnimatedNews_Outlets)

OMINIT_SUPERCLASS(Information_Channels, OMAnimatedInformation_Channels)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\News_Outlets.cpp
*********************************************************************/
