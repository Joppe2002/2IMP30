/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Prediction_Module
//!	Generated Date	: Sun, 31, May 2026  
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
//## classInstance itsStorm_Prediction
#include "Storm_Prediction.h"
//## classInstance itsTsunami_Prediction
#include "Tsunami_Prediction.h"
//## classInstance itsWheather_Prediction
#include "Wheather_Prediction.h"
//## package Architecture

//## class Prediction_Module
class Prediction_Module {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPrediction_Module;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Prediction_Module(void);
    
    //## auto_generated
    ~Prediction_Module(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Storm_Prediction* getItsStorm_Prediction(void) const;
    
    //## auto_generated
    const Tsunami_Prediction* getItsTsunami_Prediction(void) const;
    
    //## auto_generated
    const Wheather_Prediction* getItsWheather_Prediction(void) const;
    
    ////    Relations and components    ////

private :

    Storm_Prediction itsStorm_Prediction;		//## classInstance itsStorm_Prediction
    
    Tsunami_Prediction itsTsunami_Prediction;		//## classInstance itsTsunami_Prediction
    
    Wheather_Prediction itsWheather_Prediction;		//## classInstance itsWheather_Prediction
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
