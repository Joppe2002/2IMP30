/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Thu, 11, Jun 2026  
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
#define Architecture_Tsunami_Prediction_get_Tsunami_Data_SERIALIZE \
    aomsmethod->addAttribute("stored_vibrations", x2String(stored_vibrations));\
    aomsmethod->addAttribute("stored_vibration_location", x2String(stored_vibration_location));
#define Architecture_Tsunami_Prediction_Tsunami_Prediction_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Tsunami_Prediction
Tsunami_Prediction::Tsunami_Prediction(void) : itsData_Storage(NULL) {
    NOTIFY_CONSTRUCTOR(Tsunami_Prediction, Tsunami_Prediction(), 0, Architecture_Tsunami_Prediction_Tsunami_Prediction_SERIALIZE);
}

Tsunami_Prediction::~Tsunami_Prediction(void) {
    NOTIFY_DESTRUCTOR(~Tsunami_Prediction, true);
    cleanUpRelations();
}

void Tsunami_Prediction::get_Tsunami_Data(int stored_vibrations, int stored_vibration_location) {
    NOTIFY_OPERATION(get_Tsunami_Data, get_Tsunami_Data(int,int), 2, Architecture_Tsunami_Prediction_get_Tsunami_Data_SERIALIZE);
    //#[ operation get_Tsunami_Data(int,int)
    vibrations = stored_vibrations;
    vibration_location = stored_vibration_location;
    //#]
}

const int Tsunami_Prediction::getVibration_location(void) const {
    return vibration_location;
}

void Tsunami_Prediction::setVibration_location(const int p_vibration_location) {
    vibration_location = p_vibration_location;
    NOTIFY_SET_OPERATION;
}

const int Tsunami_Prediction::getVibrations(void) const {
    return vibrations;
}

void Tsunami_Prediction::setVibrations(const int p_vibrations) {
    vibrations = p_vibrations;
    NOTIFY_SET_OPERATION;
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTsunami_Prediction::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("vibrations", x2String(myReal->vibrations));
    aomsAttributes->addAttribute("vibration_location", x2String(myReal->vibration_location));
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
