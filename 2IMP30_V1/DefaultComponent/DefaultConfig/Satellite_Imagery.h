/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Satellite_Imagery
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Satellite_Imagery.h
*********************************************************************/

#ifndef Satellite_Imagery_H
#define Satellite_Imagery_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Satellite_Imagery
#include "Storm_Sensors.h"
//## package SystemContext

//## class Satellite_Imagery
class Satellite_Imagery : public Storm_Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatellite_Imagery;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Satellite_Imagery(void);
    
    //## auto_generated
    ~Satellite_Imagery(void);
    
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
class OMAnimatedSatellite_Imagery : public OMAnimatedStorm_Sensors {
    DECLARE_META(Satellite_Imagery, OMAnimatedSatellite_Imagery)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Satellite_Imagery.h
*********************************************************************/
