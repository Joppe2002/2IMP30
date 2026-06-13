/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Prediction_Module
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Prediction_Module.h
*********************************************************************/

#ifndef Prediction_Module_H
#define Prediction_Module_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsStorm_Prediction
#include "Storm_Prediction.h"
//## classInstance itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//## classInstance itsWheather_Prediction
#include "Wheather_Prediction.h"
//## package Architecture

//## class Prediction_Module
class Prediction_Module : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPrediction_Module;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Prediction_Module(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Prediction_Module(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Storm_Prediction* getItsStorm_Prediction(void) const;
    
    //## auto_generated
    const Tsunami_Prediction* getItsTsunami_Prediction(void) const;
    
    //## auto_generated
    const Wheather_Prediction* getItsWheather_Prediction(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);
    
    ////    Relations and components    ////

private :

    Storm_Prediction itsStorm_Prediction;		//## classInstance itsStorm_Prediction
    
    Tsunami_Prediction itsTsunami_Prediction;		//## classInstance itsTsunami_Prediction
    
    Wheather_Prediction itsWheather_Prediction;		//## classInstance itsWheather_Prediction
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPrediction_Module : virtual public AOMInstance {
    DECLARE_META(Prediction_Module, OMAnimatedPrediction_Module)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Prediction_Module.h
*********************************************************************/
