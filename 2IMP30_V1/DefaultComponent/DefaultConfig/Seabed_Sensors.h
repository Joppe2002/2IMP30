/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Seabed_Sensors
//!	Generated Date	: Mon, 8, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Seabed_Sensors.h
*********************************************************************/

#ifndef Seabed_Sensors_H
#define Seabed_Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Seabed_Sensors
#include "Tsunami_Sensors.h"
//## package SystemContext

//## class Seabed_Sensors
// Sensors installed on the ocean floor to detect seismic activitity that may trigger tsunamis.
// Measure tectonic shifts and vibrations beneath ocean bed.
class Seabed_Sensors : public Tsunami_Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSeabed_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Seabed_Sensors(void);
    
    //## auto_generated
    ~Seabed_Sensors(void);
    
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
class OMAnimatedSeabed_Sensors : public OMAnimatedTsunami_Sensors {
    DECLARE_META(Seabed_Sensors, OMAnimatedSeabed_Sensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Seabed_Sensors.h
*********************************************************************/
