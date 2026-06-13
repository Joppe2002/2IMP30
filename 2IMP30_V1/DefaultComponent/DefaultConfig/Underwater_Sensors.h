/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Underwater_Sensors
//!	Generated Date	: Sat, 13, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Underwater_Sensors.h
*********************************************************************/

#ifndef Underwater_Sensors_H
#define Underwater_Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Underwater_Sensors
#include "Tsunami_Sensors.h"
//## package SystemContext

//## class Underwater_Sensors
// Specialized pressure sensors and flow direction detectors measure anomalies in ocean water behavior.
// Identify potential tsunami triggers
class Underwater_Sensors : public Tsunami_Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUnderwater_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Underwater_Sensors(void);
    
    //## auto_generated
    ~Underwater_Sensors(void);
    
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
class OMAnimatedUnderwater_Sensors : public OMAnimatedTsunami_Sensors {
    DECLARE_META(Underwater_Sensors, OMAnimatedUnderwater_Sensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Underwater_Sensors.h
*********************************************************************/
