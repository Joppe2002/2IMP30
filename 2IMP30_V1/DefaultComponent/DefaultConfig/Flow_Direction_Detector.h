/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Flow_Direction_Detector
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Flow_Direction_Detector.h
*********************************************************************/

#ifndef Flow_Direction_Detector_H
#define Flow_Direction_Detector_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Flow_Direction_Detector
#include "Underwater_Sensors.h"
//## package SystemContext

//## class Flow_Direction_Detector
class Flow_Direction_Detector : public Underwater_Sensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFlow_Direction_Detector;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Flow_Direction_Detector(void);
    
    //## auto_generated
    ~Flow_Direction_Detector(void);
    
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
class OMAnimatedFlow_Direction_Detector : public OMAnimatedUnderwater_Sensors {
    DECLARE_META(Flow_Direction_Detector, OMAnimatedFlow_Direction_Detector)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Flow_Direction_Detector.h
*********************************************************************/
