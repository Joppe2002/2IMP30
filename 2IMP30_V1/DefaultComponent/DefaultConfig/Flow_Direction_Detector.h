/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Flow_Direction_Detector
//!	Generated Date	: Sun, 31, May 2026  
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
