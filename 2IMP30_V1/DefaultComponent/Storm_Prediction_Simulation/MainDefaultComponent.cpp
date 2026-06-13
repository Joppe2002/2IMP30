/********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: Storm_Prediction_Simulation
	Model Element	: Storm_Prediction_Simulation
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\Storm_Prediction_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Storm_Prediction.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                Storm_Prediction p_Storm_Prediction;
                p_Storm_Prediction.setShouldDelete(false);
                (void) p_Storm_Prediction.startBehavior();
                //#[ configuration DefaultComponent::Storm_Prediction_Simulation 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Storm_Prediction_Simulation\MainDefaultComponent.cpp
*********************************************************************/
