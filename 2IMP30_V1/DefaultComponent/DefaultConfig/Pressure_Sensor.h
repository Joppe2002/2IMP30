/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pressure_Sensor
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Pressure_Sensor.h
*********************************************************************/

#ifndef Pressure_Sensor_H
#define Pressure_Sensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Pressure_Sensor
#include "Underwater_Sensors.h"
//## package SystemContext

//## class Pressure_Sensor
class Pressure_Sensor : public Underwater_Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPressure_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Pressure_Sensor(void);
    
    //## auto_generated
    ~Pressure_Sensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPressure_Sensor : public OMAnimatedUnderwater_Sensors {
    DECLARE_META(Pressure_Sensor, OMAnimatedPressure_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Pressure_Sensor.h
*********************************************************************/
