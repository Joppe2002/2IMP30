/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Wheather_Prediction
//!	Generated Date	: Tue, 16, Jun 2026  
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
class OMAnimatedWheather_Prediction : virtual public AOMInstance {
    DECLARE_META(Wheather_Prediction, OMAnimatedWheather_Prediction)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Wheather_Prediction.h
*********************************************************************/
