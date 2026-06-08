/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20223834
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Prediction_Module
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Prediction_Module.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Prediction_Module.h"
//#[ ignore
#define Architecture_Prediction_Module_Prediction_Module_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Prediction_Module
Prediction_Module::Prediction_Module(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Prediction_Module, Prediction_Module(), 0, Architecture_Prediction_Module_Prediction_Module_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsStorm_Prediction.setShouldDelete(false);
        }
        {
            itsTsunami_Prediction.setShouldDelete(false);
        }
    }
}

Prediction_Module::~Prediction_Module(void) {
    NOTIFY_DESTRUCTOR(~Prediction_Module, true);
}

const Storm_Prediction* Prediction_Module::getItsStorm_Prediction(void) const {
    return &itsStorm_Prediction;
}

const Tsunami_Prediction* Prediction_Module::getItsTsunami_Prediction(void) const {
    return &itsTsunami_Prediction;
}

const Wheather_Prediction* Prediction_Module::getItsWheather_Prediction(void) const {
    return &itsWheather_Prediction;
}

bool Prediction_Module::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsStorm_Prediction.startBehavior();
        }
    if(done == true)
        {
            done = itsTsunami_Prediction.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void Prediction_Module::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsStorm_Prediction.setActiveContext(theActiveContext, false);
        itsTsunami_Prediction.setActiveContext(theActiveContext, false);
    }
}

void Prediction_Module::destroy(void) {
    itsStorm_Prediction.destroy();
    itsTsunami_Prediction.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPrediction_Module::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStorm_Prediction", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsStorm_Prediction);
    aomsRelations->addRelation("itsWheather_Prediction", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWheather_Prediction);
    aomsRelations->addRelation("itsTsunami_Prediction", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTsunami_Prediction);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Prediction_Module, Architecture, Architecture, false, OMAnimatedPrediction_Module)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Prediction_Module.cpp
*********************************************************************/
