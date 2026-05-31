/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Sun, 31, May 2026  
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

//## auto_generated
class Storm_Prediction;

//## auto_generated
class System_Output;

//## auto_generated
class Tsunami_Prediction;

//## auto_generated
class Wheather_Prediction;

//## package Architecture


//## classInstance itsData_Storage
extern Data_Storage itsData_Storage;

//## classInstance itsSMSWTD
extern SMSWTD itsSMSWTD;

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
