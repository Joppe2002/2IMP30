/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Prediction
//!	Generated Date	: Fri, 5, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/

#ifndef Storm_Prediction_H
#define Storm_Prediction_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## operation get_Storm_Data(int,precipitation_type_enum,int,bool)
#include "Behavior.h"
//## link itsData_Storage
class Data_Storage;

//## package Architecture

//## class Storm_Prediction
class Storm_Prediction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStorm_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Storm_Prediction(void);
    
    //## auto_generated
    virtual ~Storm_Prediction(void);
    
    ////    Operations    ////
    
    //## operation get_Storm_Data(int,precipitation_type_enum,int,bool)
    virtual void get_Storm_Data(int stored_precipitation_amount, const precipitation_type_enum& stored_precipitation_type, int stored_wind_speed, bool stored_wind_direction);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int const getPrecipitation_amount(void) const;
    
    //## auto_generated
    void setPrecipitation_amount(const int p_precipitation_amount);
    
    //## auto_generated
    precipitation_type_enum const getPrecipitation_type(void) const;
    
    //## auto_generated
    void setPrecipitation_type(const precipitation_type_enum p_precipitation_type);
    
    //## auto_generated
    bool const getWind_direction(void) const;
    
    //## auto_generated
    void setWind_direction(const bool p_wind_direction);
    
    //## auto_generated
    int const getWind_speed(void) const;
    
    //## auto_generated
    void setWind_speed(const int p_wind_speed);
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int precipitation_amount;		//## attribute precipitation_amount
    
    precipitation_type_enum precipitation_type;		//## attribute precipitation_type
    
    bool wind_direction;		//## attribute wind_direction
    
    int wind_speed;		//## attribute wind_speed
    
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
class OMAnimatedStorm_Prediction : virtual public AOMInstance {
    DECLARE_META(Storm_Prediction, OMAnimatedStorm_Prediction)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Prediction.h
*********************************************************************/
