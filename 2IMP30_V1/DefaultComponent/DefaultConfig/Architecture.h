/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/

#ifndef Architecture_H
#define Architecture_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
class Actionable_Information_Generator;

//## classInstance itsData_Storage
class Data_Storage;

//## auto_generated
class Prediction_Module;

//## classInstance itsSMSWTD
class SMSWTD;

//## classInstance itsStorm_Prediction
class Storm_Prediction;

//## auto_generated
class System_Output;

//## classInstance itsTsunami_Prediction
class Tsunami_Prediction;

//## classInstance itsWheather_Prediction
class Wheather_Prediction;

//## package Architecture


//## classInstance itsData_Storage
extern Data_Storage itsData_Storage;

//## classInstance itsSMSWTD
extern SMSWTD itsSMSWTD;

//## classInstance itsStorm_Prediction
extern Storm_Prediction itsStorm_Prediction;

//## classInstance itsTsunami_Prediction
extern Tsunami_Prediction itsTsunami_Prediction;

//## classInstance itsWheather_Prediction
extern Wheather_Prediction itsWheather_Prediction;

//## auto_generated
void Architecture_initRelations(void);

//## auto_generated
void Architecture_OMCreateInstances(void);

//## auto_generated
void Architecture_OMConnectRelations(void);

//## auto_generated
bool Architecture_startBehavior(void);

//#[ ignore
class Architecture_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Architecture_OMInitializer(void);
    
    //## auto_generated
    ~Architecture_OMInitializer(void);
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/
