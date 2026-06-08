/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Storage
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Data_Storage.h"
//## link itsStorm_Prediction
#include "Storm_Prediction.h"
//#[ ignore
#define Architecture_Data_Storage_Data_Storage_SERIALIZE OM_NO_OP

#define Architecture_Data_Storage_relay_storm_data_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Data_Storage
//#[ ignore
Data_Storage::p_Data_Storage_C::p_Data_Storage_C(void) : int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_precipitation_type_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL) {
}

Data_Storage::p_Data_Storage_C::~p_Data_Storage_C(void) {
    cleanUpRelations();
}

void Data_Storage::p_Data_Storage_C::connectData_Storage(Data_Storage* part) {
    setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(part);
    setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(part);
    setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(part);
    setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(part);
    
}

bool_raw_wind_direction_ProxyFlowPropertyInterface* Data_Storage::p_Data_Storage_C::getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* Data_Storage::p_Data_Storage_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_precipitation_type_ProxyFlowPropertyInterface* Data_Storage::p_Data_Storage_C::getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* Data_Storage::p_Data_Storage_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

void Data_Storage::p_Data_Storage_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void Data_Storage::p_Data_Storage_C::setRaw_precipitation_type(int p_raw_precipitation_type) {
    
    if (itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void Data_Storage::p_Data_Storage_C::setRaw_wind_direction(bool p_raw_wind_direction) {
    
    if (itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void Data_Storage::p_Data_Storage_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void Data_Storage::p_Data_Storage_C::setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsBool_raw_wind_direction_ProxyFlowPropertyInterface = p_bool_raw_wind_direction_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Data_Storage_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Data_Storage_C::setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = p_int_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Data_Storage_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Data_Storage_C::cleanUpRelations(void) {
    if(itsBool_raw_wind_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_raw_wind_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_precipitation_type_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_precipitation_type_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_wind_speed_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Data_Storage::Data_Storage(IOxfActive* const theActiveContext) : OMReactive(), int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), itsStorm_Prediction(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Data_Storage, Data_Storage(), 0, Architecture_Data_Storage_Data_Storage_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Data_Storage::~Data_Storage(void) {
    NOTIFY_DESTRUCTOR(~Data_Storage, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Data_Storage::relay_storm_data(void) {
    NOTIFY_OPERATION(relay_storm_data, relay_storm_data(), 0, Architecture_Data_Storage_relay_storm_data_SERIALIZE);
    //#[ operation relay_storm_data()
    if(itsStorm_Prediction){
    itsStorm_Prediction->get_Storm_Data(stored_precipitation_amount,stored_precipitation_type,stored_wind_speed,stored_wind_direction);
    }
    else{printf("SKIP");}
    
    //#]
}

//#[ ignore
void Data_Storage::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    if (raw_precipitation_amount != p_raw_precipitation_amount) {
        raw_precipitation_amount = p_raw_precipitation_amount;
        FLOW_DATA_RECEIVE("raw_precipitation_amount", raw_precipitation_amount, x2String);
    }
    
}

void Data_Storage::setRaw_precipitation_type(int p_raw_precipitation_type) {
    if (raw_precipitation_type != p_raw_precipitation_type) {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_RECEIVE("raw_precipitation_type", raw_precipitation_type, x2String);
    }
    
}

void Data_Storage::setRaw_wind_direction(bool p_raw_wind_direction) {
    if (raw_wind_direction != p_raw_wind_direction) {
        raw_wind_direction = p_raw_wind_direction;
        FLOW_DATA_RECEIVE("raw_wind_direction", raw_wind_direction, x2String);
    }
    
}

void Data_Storage::setRaw_wind_speed(int p_raw_wind_speed) {
    if (raw_wind_speed != p_raw_wind_speed) {
        raw_wind_speed = p_raw_wind_speed;
        FLOW_DATA_RECEIVE("raw_wind_speed", raw_wind_speed, x2String);
    }
    
}
//#]

Data_Storage::p_Data_Storage_C* Data_Storage::getP_Data_Storage(void) const {
    return (Data_Storage::p_Data_Storage_C*) &p_Data_Storage;
}

Data_Storage::p_Data_Storage_C* Data_Storage::get_p_Data_Storage(void) const {
    return (Data_Storage::p_Data_Storage_C*) &p_Data_Storage;
}

const int Data_Storage::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

const int Data_Storage::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

const bool Data_Storage::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

const int Data_Storage::getRaw_wind_speed(void) const {
    return raw_wind_speed;
}

const int Data_Storage::getStored_precipitation_amount(void) const {
    return stored_precipitation_amount;
}

void Data_Storage::setStored_precipitation_amount(const int p_stored_precipitation_amount) {
    stored_precipitation_amount = p_stored_precipitation_amount;
    NOTIFY_SET_OPERATION;
}

const precipitation_type_enum Data_Storage::getStored_precipitation_type(void) const {
    return stored_precipitation_type;
}

void Data_Storage::setStored_precipitation_type(const precipitation_type_enum p_stored_precipitation_type) {
    stored_precipitation_type = p_stored_precipitation_type;
    NOTIFY_SET_OPERATION;
}

const bool Data_Storage::getStored_wind_direction(void) const {
    return stored_wind_direction;
}

void Data_Storage::setStored_wind_direction(const bool p_stored_wind_direction) {
    stored_wind_direction = p_stored_wind_direction;
    NOTIFY_SET_OPERATION;
}

const int Data_Storage::getStored_wind_speed(void) const {
    return stored_wind_speed;
}

void Data_Storage::setStored_wind_speed(const int p_stored_wind_speed) {
    stored_wind_speed = p_stored_wind_speed;
    NOTIFY_SET_OPERATION;
}

const Storm_Prediction* Data_Storage::getItsStorm_Prediction(void) const {
    return itsStorm_Prediction;
}

void Data_Storage::setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction) {
    if(p_Storm_Prediction != NULL)
        {
            p_Storm_Prediction->_setItsData_Storage(this);
        }
    _setItsStorm_Prediction(p_Storm_Prediction);
}

bool Data_Storage::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool Data_Storage::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Data_Storage::initRelations(void) {
    if (get_p_Data_Storage() != NULL) {
        get_p_Data_Storage()->connectData_Storage(this);
    }
}

void Data_Storage::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Data_Storage::cleanUpRelations(void) {
    if(itsStorm_Prediction != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStorm_Prediction");
            const Data_Storage* p_Data_Storage = itsStorm_Prediction->getItsData_Storage();
            if(p_Data_Storage != NULL)
                {
                    itsStorm_Prediction->__setItsData_Storage(NULL);
                }
            itsStorm_Prediction = NULL;
        }
}

void Data_Storage::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void Data_Storage::__setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction) {
    itsStorm_Prediction = p_Storm_Prediction;
    if(p_Storm_Prediction != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStorm_Prediction", p_Storm_Prediction, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStorm_Prediction");
        }
}

void Data_Storage::_setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction) {
    if(itsStorm_Prediction != NULL)
        {
            itsStorm_Prediction->__setItsData_Storage(NULL);
        }
    __setItsStorm_Prediction(p_Storm_Prediction);
}

void Data_Storage::_clearItsStorm_Prediction(void) {
    NOTIFY_RELATION_CLEARED("itsStorm_Prediction");
    itsStorm_Prediction = NULL;
}

void Data_Storage::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        rootState_timeout = scheduleTimeout(1000, "ROOT.idle");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Data_Storage::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.idle");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_2");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_2;
                            rootState_active = accepttimeevent_2;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State polling_storm_data
        case polling_storm_data:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.polling_storm_data");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_3");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_3;
                            rootState_active = accepttimeevent_3;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case accepttimeevent_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_2");
                    NOTIFY_STATE_ENTERED("ROOT.polling_storm_data");
                    rootState_subState = polling_storm_data;
                    rootState_active = polling_storm_data;
                    //#[ state polling_storm_data.(Entry) 
                    stored_precipitation_amount = raw_precipitation_amount;
                    stored_wind_speed = raw_wind_speed;
                    stored_wind_direction = raw_wind_direction;
                    
                    if(raw_precipitation_type == 0){stored_precipitation_type = precipitation_type_enum::nothing;}
                    if(raw_precipitation_type == 1){stored_precipitation_type = precipitation_type_enum::rain;}
                    if(raw_precipitation_type == 2){stored_precipitation_type = precipitation_type_enum::hail;}
                    if(raw_precipitation_type == 3){stored_precipitation_type = precipitation_type_enum::snow;}
                    //#]
                    rootState_timeout = scheduleTimeout(1000, "ROOT.polling_storm_data");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepttimeevent_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_3");
                    NOTIFY_STATE_ENTERED("ROOT.relaying_storm_data");
                    pushNullTransition();
                    rootState_subState = relaying_storm_data;
                    rootState_active = relaying_storm_data;
                    //#[ state relaying_storm_data.(Entry) 
                    relay_storm_data();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State relaying_storm_data
        case relaying_storm_data:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.relaying_storm_data");
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.idle");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedData_Storage::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String(myReal->raw_precipitation_type));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("stored_precipitation_amount", x2String(myReal->stored_precipitation_amount));
    aomsAttributes->addAttribute("stored_wind_direction", x2String(myReal->stored_wind_direction));
    aomsAttributes->addAttribute("stored_wind_speed", x2String(myReal->stored_wind_speed));
    aomsAttributes->addAttribute("stored_precipitation_type", x2String((int)myReal->stored_precipitation_type));
}

void OMAnimatedData_Storage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStorm_Prediction", false, true);
    if(myReal->itsStorm_Prediction)
        {
            aomsRelations->ADD_ITEM(myReal->itsStorm_Prediction);
        }
}

void OMAnimatedData_Storage::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Data_Storage::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Data_Storage::polling_storm_data:
        {
            polling_storm_data_serializeStates(aomsState);
        }
        break;
        case Data_Storage::accepttimeevent_2:
        {
            accepttimeevent_2_serializeStates(aomsState);
        }
        break;
        case Data_Storage::accepttimeevent_3:
        {
            accepttimeevent_3_serializeStates(aomsState);
        }
        break;
        case Data_Storage::relaying_storm_data:
        {
            relaying_storm_data_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedData_Storage::relaying_storm_data_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.relaying_storm_data");
}

void OMAnimatedData_Storage::polling_storm_data_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.polling_storm_data");
}

void OMAnimatedData_Storage::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedData_Storage::accepttimeevent_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_3");
}

void OMAnimatedData_Storage::accepttimeevent_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_2");
}
//#]

IMPLEMENT_REACTIVE_META_P(Data_Storage, Architecture, Architecture, false, OMAnimatedData_Storage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.cpp
*********************************************************************/
