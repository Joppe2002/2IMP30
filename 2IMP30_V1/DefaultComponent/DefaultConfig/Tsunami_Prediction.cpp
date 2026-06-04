/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Tsunami_Prediction.h"
//## link itsData_Storage
#include "Data_Storage.h"
//#[ ignore
#define Architecture_Tsunami_Prediction_Tsunami_Prediction_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Tsunami_Prediction
//#[ ignore
Tsunami_Prediction::p_Tsunami_Prediction_C::p_Tsunami_Prediction_C(void) : int_flowDirection_ProxyFlowPropertyInterface(), int_pressure_ProxyFlowPropertyInterface(), int_tectonicPlate_location_ProxyFlowPropertyInterface(), int_vibrations_ProxyFlowPropertyInterface(), _p_(0), itsInt_flowDirection_ProxyFlowPropertyInterface(NULL), itsInt_pressure_ProxyFlowPropertyInterface(NULL), itsInt_tectonicPlate_location_ProxyFlowPropertyInterface(NULL), itsInt_vibrations_ProxyFlowPropertyInterface(NULL) {
}

Tsunami_Prediction::p_Tsunami_Prediction_C::~p_Tsunami_Prediction_C(void) {
    cleanUpRelations();
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::connectTsunami_Prediction(Tsunami_Prediction* part) {
    setItsInt_flowDirection_ProxyFlowPropertyInterface(part);
    setItsInt_pressure_ProxyFlowPropertyInterface(part);
    setItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(part);
    setItsInt_vibrations_ProxyFlowPropertyInterface(part);
    
}

int_flowDirection_ProxyFlowPropertyInterface* Tsunami_Prediction::p_Tsunami_Prediction_C::getItsInt_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

int_pressure_ProxyFlowPropertyInterface* Tsunami_Prediction::p_Tsunami_Prediction_C::getItsInt_pressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_tectonicPlate_location_ProxyFlowPropertyInterface* Tsunami_Prediction::p_Tsunami_Prediction_C::getItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_vibrations_ProxyFlowPropertyInterface* Tsunami_Prediction::p_Tsunami_Prediction_C::getItsInt_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setFlowDirection(int p_flowDirection) {
    
    if (itsInt_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsInt_flowDirection_ProxyFlowPropertyInterface->setFlowDirection(p_flowDirection);
    }
    
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setPressure(int p_pressure) {
    
    if (itsInt_pressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_pressure_ProxyFlowPropertyInterface->setPressure(p_pressure);
    }
    
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setTectonicPlate_location(int p_tectonicPlate_location) {
    
    if (itsInt_tectonicPlate_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_tectonicPlate_location_ProxyFlowPropertyInterface->setTectonicPlate_location(p_tectonicPlate_location);
    }
    
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setVibrations(int p_vibrations) {
    
    if (itsInt_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_vibrations_ProxyFlowPropertyInterface->setVibrations(p_vibrations);
    }
    
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setItsInt_flowDirection_ProxyFlowPropertyInterface(int_flowDirection_ProxyFlowPropertyInterface* const p_int_flowDirection_ProxyFlowPropertyInterface) {
    itsInt_flowDirection_ProxyFlowPropertyInterface = p_int_flowDirection_ProxyFlowPropertyInterface;
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setItsInt_pressure_ProxyFlowPropertyInterface(int_pressure_ProxyFlowPropertyInterface* const p_int_pressure_ProxyFlowPropertyInterface) {
    itsInt_pressure_ProxyFlowPropertyInterface = p_int_pressure_ProxyFlowPropertyInterface;
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(int_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_tectonicPlate_location_ProxyFlowPropertyInterface) {
    itsInt_tectonicPlate_location_ProxyFlowPropertyInterface = p_int_tectonicPlate_location_ProxyFlowPropertyInterface;
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::setItsInt_vibrations_ProxyFlowPropertyInterface(int_vibrations_ProxyFlowPropertyInterface* const p_int_vibrations_ProxyFlowPropertyInterface) {
    itsInt_vibrations_ProxyFlowPropertyInterface = p_int_vibrations_ProxyFlowPropertyInterface;
}

void Tsunami_Prediction::p_Tsunami_Prediction_C::cleanUpRelations(void) {
    if(itsInt_flowDirection_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_flowDirection_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_pressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_pressure_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_tectonicPlate_location_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_tectonicPlate_location_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_vibrations_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_vibrations_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Tsunami_Prediction::Tsunami_Prediction(void) : int_flowDirection_ProxyFlowPropertyInterface(), int_pressure_ProxyFlowPropertyInterface(), int_tectonicPlate_location_ProxyFlowPropertyInterface(), int_vibrations_ProxyFlowPropertyInterface(), itsData_Storage(NULL) {
    NOTIFY_CONSTRUCTOR(Tsunami_Prediction, Tsunami_Prediction(), 0, Architecture_Tsunami_Prediction_Tsunami_Prediction_SERIALIZE);
    initRelations();
}

Tsunami_Prediction::~Tsunami_Prediction(void) {
    NOTIFY_DESTRUCTOR(~Tsunami_Prediction, true);
    cleanUpRelations();
}

//#[ ignore
void Tsunami_Prediction::setFlowDirection(int p_flowDirection) {
    if (flowDirection != p_flowDirection) {
        flowDirection = p_flowDirection;
        FLOW_DATA_RECEIVE("flowDirection", flowDirection, x2String);
    }
    
}

void Tsunami_Prediction::setPressure(int p_pressure) {
    if (pressure != p_pressure) {
        pressure = p_pressure;
        FLOW_DATA_RECEIVE("pressure", pressure, x2String);
    }
    
}

void Tsunami_Prediction::setTectonicPlate_location(int p_tectonicPlate_location) {
    if (tectonicPlate_location != p_tectonicPlate_location) {
        tectonicPlate_location = p_tectonicPlate_location;
        FLOW_DATA_RECEIVE("tectonicPlate_location", tectonicPlate_location, x2String);
    }
    
}

void Tsunami_Prediction::setVibrations(int p_vibrations) {
    if (vibrations != p_vibrations) {
        vibrations = p_vibrations;
        FLOW_DATA_RECEIVE("vibrations", vibrations, x2String);
    }
    
}
//#]

Tsunami_Prediction::p_Tsunami_Prediction_C* Tsunami_Prediction::getP_Tsunami_Prediction(void) const {
    return (Tsunami_Prediction::p_Tsunami_Prediction_C*) &p_Tsunami_Prediction;
}

Tsunami_Prediction::p_Tsunami_Prediction_C* Tsunami_Prediction::get_p_Tsunami_Prediction(void) const {
    return (Tsunami_Prediction::p_Tsunami_Prediction_C*) &p_Tsunami_Prediction;
}

int const Tsunami_Prediction::getTest(void) const {
    return Test;
}

void Tsunami_Prediction::setTest(const int p_Test) {
    Test = p_Test;
}

int const Tsunami_Prediction::getFlowDirection(void) const {
    return flowDirection;
}

int const Tsunami_Prediction::getPressure(void) const {
    return pressure;
}

int const Tsunami_Prediction::getTectonicPlate_location(void) const {
    return tectonicPlate_location;
}

int const Tsunami_Prediction::getVibrations(void) const {
    return vibrations;
}

const Data_Storage* Tsunami_Prediction::getItsData_Storage(void) const {
    return itsData_Storage;
}

void Tsunami_Prediction::setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(p_Data_Storage != NULL)
        {
            p_Data_Storage->_setItsTsunami_Prediction(this);
        }
    _setItsData_Storage(p_Data_Storage);
}

void Tsunami_Prediction::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Tsunami_Prediction::cleanUpRelations(void) {
    if(itsData_Storage != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
            const Tsunami_Prediction* p_Tsunami_Prediction = itsData_Storage->getItsTsunami_Prediction();
            if(p_Tsunami_Prediction != NULL)
                {
                    itsData_Storage->__setItsTsunami_Prediction(NULL);
                }
            itsData_Storage = NULL;
        }
}

void Tsunami_Prediction::__setItsData_Storage(Data_Storage* const p_Data_Storage) {
    itsData_Storage = p_Data_Storage;
    if(p_Data_Storage != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsData_Storage", p_Data_Storage, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsData_Storage");
        }
}

void Tsunami_Prediction::_setItsData_Storage(Data_Storage* const p_Data_Storage) {
    if(itsData_Storage != NULL)
        {
            itsData_Storage->__setItsTsunami_Prediction(NULL);
        }
    __setItsData_Storage(p_Data_Storage);
}

void Tsunami_Prediction::_clearItsData_Storage(void) {
    NOTIFY_RELATION_CLEARED("itsData_Storage");
    itsData_Storage = NULL;
}

void Tsunami_Prediction::OMCreateInstances(void) {
}

void Tsunami_Prediction::OMConnectRelations(void) {
    if (get_p_Tsunami_Prediction() != NULL) {
        get_p_Tsunami_Prediction()->connectTsunami_Prediction(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTsunami_Prediction::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("flowDirection", x2String(myReal->flowDirection));
    aomsAttributes->addAttribute("pressure", x2String(myReal->pressure));
    aomsAttributes->addAttribute("tectonicPlate_location", x2String(myReal->tectonicPlate_location));
    aomsAttributes->addAttribute("vibrations", x2String(myReal->vibrations));
    aomsAttributes->addAttribute("Test", x2String(myReal->Test));
}

void OMAnimatedTsunami_Prediction::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsData_Storage", false, true);
    if(myReal->itsData_Storage)
        {
            aomsRelations->ADD_ITEM(myReal->itsData_Storage);
        }
}
//#]

IMPLEMENT_META_P(Tsunami_Prediction, Architecture, Architecture, false, OMAnimatedTsunami_Prediction)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.cpp
*********************************************************************/
