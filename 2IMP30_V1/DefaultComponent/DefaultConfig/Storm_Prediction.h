/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/

#ifndef Storm_Prediction_H
#define Storm_Prediction_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## class Storm_Prediction
class Storm_Prediction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStorm_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Storm_Prediction(void);
    
    //## auto_generated
    ~Storm_Prediction(void);
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Framework operations    ////
    
    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStorm_Prediction : virtual public AOMInstance {
    DECLARE_META(Storm_Prediction, OMAnimatedStorm_Prediction)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/
