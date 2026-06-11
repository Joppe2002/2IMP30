/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.h
*********************************************************************/

#ifndef Tsunami_Prediction_H
#define Tsunami_Prediction_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## link itsData_Storage
class Data_Storage;

//## package Architecture

//## class Tsunami_Prediction
class Tsunami_Prediction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTsunami_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Tsunami_Prediction(void);
    
    //## auto_generated
    virtual ~Tsunami_Prediction(void);
    
    ////    Operations    ////
    
    //## operation get_Tsunami_Data(int,int)
    virtual void get_Tsunami_Data(int stored_vibrations, int stored_vibration_location);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getVibration_location(void) const;
    
    //## auto_generated
    void setVibration_location(const int p_vibration_location);
    
    //## auto_generated
    const int getVibrations(void) const;
    
    //## auto_generated
    void setVibrations(const int p_vibrations);
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int vibration_location;		//## attribute vibration_location
    
    int vibrations;		//## attribute vibrations
    
    ////    Relations and components    ////
    
    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _clearItsData_Storage(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTsunami_Prediction : virtual public AOMInstance {
    DECLARE_META(Tsunami_Prediction, OMAnimatedTsunami_Prediction)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Tsunami_Prediction.h
*********************************************************************/
