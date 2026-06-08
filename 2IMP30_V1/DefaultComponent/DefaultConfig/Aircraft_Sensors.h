/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Aircraft_Sensors
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Aircraft_Sensors.h
*********************************************************************/

#ifndef Aircraft_Sensors_H
#define Aircraft_Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Aircraft_Sensors
#include "Storm_Sensors.h"
//## package SystemContext

//## class Aircraft_Sensors
class Aircraft_Sensors : public Storm_Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAircraft_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Aircraft_Sensors(void);
    
    //## auto_generated
    ~Aircraft_Sensors(void);
    
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
class OMAnimatedAircraft_Sensors : public OMAnimatedStorm_Sensors {
    DECLARE_META(Aircraft_Sensors, OMAnimatedAircraft_Sensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Aircraft_Sensors.h
*********************************************************************/
