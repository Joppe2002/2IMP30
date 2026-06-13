/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Storage
//!	Generated Date	: Sat, 13, Jun 2026  
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
//## link itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//#[ ignore
#define Architecture_Data_Storage_Data_Storage_SERIALIZE OM_NO_OP

#define Architecture_Data_Storage_relay_storm_data_SERIALIZE OM_NO_OP

#define Architecture_Data_Storage_relay_tsunami_data_SERIALIZE OM_NO_OP
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

Data_Storage::p_Data_Storage_1_C::p_Data_Storage_1_C(void) : int_raw_vibrations_distance_ProxyFlowPropertyInterface(), int_raw_vibrations_intensity_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(NULL) {
}

Data_Storage::p_Data_Storage_1_C::~p_Data_Storage_1_C(void) {
    cleanUpRelations();
}

void Data_Storage::p_Data_Storage_1_C::connectData_Storage(Data_Storage* part) {
    setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(part);
    setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(part);
    
}

int_raw_vibrations_distance_ProxyFlowPropertyInterface* Data_Storage::p_Data_Storage_1_C::getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_intensity_ProxyFlowPropertyInterface* Data_Storage::p_Data_Storage_1_C::getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void) {
    return this;
}

void Data_Storage::p_Data_Storage_1_C::setRaw_vibrations_distance(int p_raw_vibrations_distance) {
    
    if (itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface->setRaw_vibrations_distance(p_raw_vibrations_distance);
    }
    
}

void Data_Storage::p_Data_Storage_1_C::setRaw_vibrations_intensity(int p_raw_vibrations_intensity) {
    
    if (itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface->setRaw_vibrations_intensity(p_raw_vibrations_intensity);
    }
    
}

void Data_Storage::p_Data_Storage_1_C::setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(int_raw_vibrations_distance_ProxyFlowPropertyInterface* const p_int_raw_vibrations_distance_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface = p_int_raw_vibrations_distance_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Data_Storage_1_C::setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(int_raw_vibrations_intensity_ProxyFlowPropertyInterface* const p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface = p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Data_Storage_1_C::cleanUpRelations(void) {
    if(itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Data_Storage::Data_Storage(IOxfActive* const theActiveContext) : OMReactive(), int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), int_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_vibrations_distance_ProxyFlowPropertyInterface(), int_raw_vibrations_intensity_ProxyFlowPropertyInterface(), itsStorm_Prediction(NULL), itsTsunami_Prediction(NULL) {
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
    
    //#]
}

void Data_Storage::relay_tsunami_data(void) {
    NOTIFY_OPERATION(relay_tsunami_data, relay_tsunami_data(), 0, Architecture_Data_Storage_relay_tsunami_data_SERIALIZE);
    //#[ operation relay_tsunami_data()
    if(itsTsunami_Prediction){
    itsTsunami_Prediction->get_Tsunami_Data(stored_vibrations_distance,stored_vibrations_intensity);
    }
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

void Data_Storage::setRaw_vibrations_distance(int p_raw_vibrations_distance) {
    if (raw_vibrations_distance != p_raw_vibrations_distance) {
        raw_vibrations_distance = p_raw_vibrations_distance;
        FLOW_DATA_RECEIVE("raw_vibrations_distance", raw_vibrations_distance, x2String);
    }
    
}

void Data_Storage::setRaw_vibrations_intensity(int p_raw_vibrations_intensity) {
    if (raw_vibrations_intensity != p_raw_vibrations_intensity) {
        raw_vibrations_intensity = p_raw_vibrations_intensity;
        FLOW_DATA_RECEIVE("raw_vibrations_intensity", raw_vibrations_intensity, x2String);
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

Data_Storage::p_Data_Storage_1_C* Data_Storage::getP_Data_Storage_1(void) const {
    return (Data_Storage::p_Data_Storage_1_C*) &p_Data_Storage_1;
}

Data_Storage::p_Data_Storage_1_C* Data_Storage::get_p_Data_Storage_1(void) const {
    return (Data_Storage::p_Data_Storage_1_C*) &p_Data_Storage_1;
}

const int Data_Storage::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

const int Data_Storage::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

const int Data_Storage::getRaw_vibrations_distance(void) const {
    return raw_vibrations_distance;
}

const int Data_Storage::getRaw_vibrations_intensity(void) const {
    return raw_vibrations_intensity;
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

const int Data_Storage::getStored_vibrations_distance(void) const {
    return stored_vibrations_distance;
}

void Data_Storage::setStored_vibrations_distance(const int p_stored_vibrations_distance) {
    stored_vibrations_distance = p_stored_vibrations_distance;
    NOTIFY_SET_OPERATION;
}

const int Data_Storage::getStored_vibrations_intensity(void) const {
    return stored_vibrations_intensity;
}

void Data_Storage::setStored_vibrations_intensity(const int p_stored_vibrations_intensity) {
    stored_vibrations_intensity = p_stored_vibrations_intensity;
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

const Tsunami_Prediction* Data_Storage::getItsTsunami_Prediction(void) const {
    return itsTsunami_Prediction;
}

void Data_Storage::setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction) {
    if(p_Tsunami_Prediction != NULL)
        {
            p_Tsunami_Prediction->_setItsData_Storage(this);
        }
    _setItsTsunami_Prediction(p_Tsunami_Prediction);
}

bool Data_Storage::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(MainBehavior_timeout == arg)
        {
            MainBehavior_timeout = NULL;
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
    if (get_p_Data_Storage_1() != NULL) {
        get_p_Data_Storage_1()->connectData_Storage(this);
    }
}

void Data_Storage::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    MainBehavior_subState = OMNonState;
    MainBehavior_timeout = NULL;
    ErrorHandling_subState = OMNonState;
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
    if(itsTsunami_Prediction != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTsunami_Prediction");
            const Data_Storage* p_Data_Storage = itsTsunami_Prediction->getItsData_Storage();
            if(p_Data_Storage != NULL)
                {
                    itsTsunami_Prediction->__setItsData_Storage(NULL);
                }
            itsTsunami_Prediction = NULL;
        }
}

void Data_Storage::cancelTimeouts(void) {
    cancel(MainBehavior_timeout);
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

void Data_Storage::__setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction) {
    itsTsunami_Prediction = p_Tsunami_Prediction;
    if(p_Tsunami_Prediction != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTsunami_Prediction", p_Tsunami_Prediction, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTsunami_Prediction");
        }
}

void Data_Storage::_setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction) {
    if(itsTsunami_Prediction != NULL)
        {
            itsTsunami_Prediction->__setItsData_Storage(NULL);
        }
    __setItsTsunami_Prediction(p_Tsunami_Prediction);
}

void Data_Storage::_clearItsTsunami_Prediction(void) {
    NOTIFY_RELATION_CLEARED("itsTsunami_Prediction");
    itsTsunami_Prediction = NULL;
}

void Data_Storage::MainBehavior_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.MainBehavior");
    rootState_subState = MainBehavior;
    NOTIFY_TRANSITION_STARTED("10");
    NOTIFY_STATE_ENTERED("ROOT.MainBehavior.idle");
    MainBehavior_subState = idle;
    rootState_active = idle;
    MainBehavior_timeout = scheduleTimeout(1000, "ROOT.MainBehavior.idle");
    NOTIFY_TRANSITION_TERMINATED("10");
}

void Data_Storage::MainBehavior_exit(void) {
    switch (MainBehavior_subState) {
        // State polling_storm_data
        case polling_storm_data:
        {
            cancel(MainBehavior_timeout);
            NOTIFY_STATE_EXITED("ROOT.MainBehavior.polling_storm_data");
        }
        break;
        // State relaying_storm_data
        case relaying_storm_data:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.MainBehavior.relaying_storm_data");
        }
        break;
        // State idle
        case idle:
        {
            cancel(MainBehavior_timeout);
            NOTIFY_STATE_EXITED("ROOT.MainBehavior.idle");
        }
        break;
        case accepttimeevent_3:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.MainBehavior.accepttimeevent_3");
        }
        break;
        case accepttimeevent_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.MainBehavior.accepttimeevent_2");
        }
        break;
        default:
            break;
    }
    MainBehavior_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.MainBehavior");
}

IOxfReactive::TakeEventStatus Data_Storage::MainBehavior_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evErrorOccuredDS_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("6");
            MainBehavior_exit();
            ErrorHandling_entDef();
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    
    return res;
}

void Data_Storage::ErrorHandling_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.ErrorHandling");
    rootState_subState = ErrorHandling;
    //#[ state ErrorHandling.(Entry) 
    printf("Data Storage not working");
    //#]
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.ErrorHandling.Error");
    ErrorHandling_subState = Error;
    rootState_active = Error;
    NOTIFY_TRANSITION_TERMINATED("8");
}

IOxfReactive::TakeEventStatus Data_Storage::ErrorHandling_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evErrorHandledDS_Architecture_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("7");
            switch (ErrorHandling_subState) {
                // State Error
                case Error:
                {
                    NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Error");
                }
                break;
                // State Handled
                case Handled:
                {
                    NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Handled");
                }
                break;
                default:
                    break;
            }
            ErrorHandling_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.ErrorHandling");
            MainBehavior_entDef();
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

void Data_Storage::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("5");
        MainBehavior_entDef();
        NOTIFY_TRANSITION_TERMINATED("5");
    }
}

IOxfReactive::TakeEventStatus Data_Storage::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State polling_storm_data
        case polling_storm_data:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == MainBehavior_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(MainBehavior_timeout);
                            NOTIFY_STATE_EXITED("ROOT.MainBehavior.polling_storm_data");
                            NOTIFY_STATE_ENTERED("ROOT.MainBehavior.accepttimeevent_3");
                            pushNullTransition();
                            MainBehavior_subState = accepttimeevent_3;
                            rootState_active = accepttimeevent_3;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = MainBehavior_handleEvent();
                }
        }
        break;
        // State relaying_storm_data
        case relaying_storm_data:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.MainBehavior.relaying_storm_data");
                    NOTIFY_STATE_ENTERED("ROOT.MainBehavior.idle");
                    MainBehavior_subState = idle;
                    rootState_active = idle;
                    MainBehavior_timeout = scheduleTimeout(1000, "ROOT.MainBehavior.idle");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = MainBehavior_handleEvent();
                }
        }
        break;
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == MainBehavior_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(MainBehavior_timeout);
                            NOTIFY_STATE_EXITED("ROOT.MainBehavior.idle");
                            NOTIFY_STATE_ENTERED("ROOT.MainBehavior.accepttimeevent_2");
                            pushNullTransition();
                            MainBehavior_subState = accepttimeevent_2;
                            rootState_active = accepttimeevent_2;
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = MainBehavior_handleEvent();
                }
        }
        break;
        case accepttimeevent_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.MainBehavior.accepttimeevent_3");
                    NOTIFY_STATE_ENTERED("ROOT.MainBehavior.relaying_storm_data");
                    pushNullTransition();
                    MainBehavior_subState = relaying_storm_data;
                    rootState_active = relaying_storm_data;
                    //#[ state MainBehavior.relaying_storm_data.(Entry) 
                    relay_storm_data();
                    relay_tsunami_data();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = MainBehavior_handleEvent();
                }
        }
        break;
        case accepttimeevent_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.MainBehavior.accepttimeevent_2");
                    NOTIFY_STATE_ENTERED("ROOT.MainBehavior.polling_storm_data");
                    MainBehavior_subState = polling_storm_data;
                    rootState_active = polling_storm_data;
                    //#[ state MainBehavior.polling_storm_data.(Entry) 
                    stored_precipitation_amount = raw_precipitation_amount;
                    stored_wind_speed = raw_wind_speed;
                    stored_wind_direction = raw_wind_direction;
                    stored_vibrations_distance= raw_vibrations_distance;
                    stored_vibrations_intensity=raw_vibrations_intensity;
                    
                    if(raw_precipitation_type == 0){stored_precipitation_type = precipitation_type_enum::nothing;}
                    if(raw_precipitation_type == 1){stored_precipitation_type = precipitation_type_enum::rain;}
                    if(raw_precipitation_type == 2){stored_precipitation_type = precipitation_type_enum::hail;}
                    if(raw_precipitation_type == 3){stored_precipitation_type = precipitation_type_enum::snow;}
                    //#]
                    MainBehavior_timeout = scheduleTimeout(1000, "ROOT.MainBehavior.polling_storm_data");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = MainBehavior_handleEvent();
                }
        }
        break;
        // State Error
        case Error:
        {
            if(IS_EVENT_TYPE_OF(evRepairDS_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.ErrorHandling.Error");
                    NOTIFY_STATE_ENTERED("ROOT.ErrorHandling.Handled");
                    ErrorHandling_subState = Handled;
                    rootState_active = Handled;
                    //#[ state ErrorHandling.Handled.(Entry) 
                    GEN(evErrorHandledDS());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = ErrorHandling_handleEvent();
                }
        }
        break;
        // State Handled
        case Handled:
        {
            res = ErrorHandling_handleEvent();
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
    aomsAttributes->addAttribute("stored_vibrations_intensity", x2String(myReal->stored_vibrations_intensity));
    aomsAttributes->addAttribute("stored_vibrations_distance", x2String(myReal->stored_vibrations_distance));
    aomsAttributes->addAttribute("raw_vibrations_distance", x2String(myReal->raw_vibrations_distance));
    aomsAttributes->addAttribute("raw_vibrations_intensity", x2String(myReal->raw_vibrations_intensity));
}

void OMAnimatedData_Storage::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStorm_Prediction", false, true);
    if(myReal->itsStorm_Prediction)
        {
            aomsRelations->ADD_ITEM(myReal->itsStorm_Prediction);
        }
    aomsRelations->addRelation("itsTsunami_Prediction", false, true);
    if(myReal->itsTsunami_Prediction)
        {
            aomsRelations->ADD_ITEM(myReal->itsTsunami_Prediction);
        }
}

void OMAnimatedData_Storage::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Data_Storage::MainBehavior:
        {
            MainBehavior_serializeStates(aomsState);
        }
        break;
        case Data_Storage::ErrorHandling:
        {
            ErrorHandling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedData_Storage::MainBehavior_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MainBehavior");
    switch (myReal->MainBehavior_subState) {
        case Data_Storage::polling_storm_data:
        {
            polling_storm_data_serializeStates(aomsState);
        }
        break;
        case Data_Storage::relaying_storm_data:
        {
            relaying_storm_data_serializeStates(aomsState);
        }
        break;
        case Data_Storage::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Data_Storage::accepttimeevent_3:
        {
            accepttimeevent_3_serializeStates(aomsState);
        }
        break;
        case Data_Storage::accepttimeevent_2:
        {
            accepttimeevent_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedData_Storage::relaying_storm_data_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MainBehavior.relaying_storm_data");
}

void OMAnimatedData_Storage::polling_storm_data_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MainBehavior.polling_storm_data");
}

void OMAnimatedData_Storage::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MainBehavior.idle");
}

void OMAnimatedData_Storage::accepttimeevent_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MainBehavior.accepttimeevent_3");
}

void OMAnimatedData_Storage::accepttimeevent_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.MainBehavior.accepttimeevent_2");
}

void OMAnimatedData_Storage::ErrorHandling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling");
    switch (myReal->ErrorHandling_subState) {
        case Data_Storage::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case Data_Storage::Handled:
        {
            Handled_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedData_Storage::Handled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling.Handled");
}

void OMAnimatedData_Storage::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ErrorHandling.Error");
}
//#]

IMPLEMENT_REACTIVE_META_P(Data_Storage, Architecture, Architecture, false, OMAnimatedData_Storage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.cpp
*********************************************************************/
