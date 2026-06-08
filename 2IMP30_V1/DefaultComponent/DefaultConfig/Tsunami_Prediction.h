/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.h
*********************************************************************/

#ifndef Tsunami_Prediction_H
#define Tsunami_Prediction_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## class Tsunami_Prediction
class Tsunami_Prediction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTsunami_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Tsunami_Prediction(void);
    
    //## auto_generated
    ~Tsunami_Prediction(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTsunami_Prediction : virtual public AOMInstance {
    DECLARE_META(Tsunami_Prediction, OMAnimatedTsunami_Prediction)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.h
*********************************************************************/
