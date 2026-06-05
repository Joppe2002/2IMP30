/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Wheather_Prediction
//!	Generated Date	: Fri, 5, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Wheather_Prediction.h
*********************************************************************/

#ifndef Wheather_Prediction_H
#define Wheather_Prediction_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## class Wheather_Prediction
class Wheather_Prediction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWheather_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Wheather_Prediction(void);
    
    //## auto_generated
    ~Wheather_Prediction(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWheather_Prediction : virtual public AOMInstance {
    DECLARE_META(Wheather_Prediction, OMAnimatedWheather_Prediction)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Wheather_Prediction.h
*********************************************************************/
