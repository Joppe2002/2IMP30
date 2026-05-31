/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Storm_Sensors
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.h
*********************************************************************/

#ifndef Storm_Sensors_H
#define Storm_Sensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class p_Storm_Sensors_C
#include "int_raw_precipitation_amount_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_storm_altitude_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_storm_diameter_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_storm_latitude_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_storm_longitude_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_wind_direction_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "int_raw_wind_speed_ProxyFlowPropertyInterface.h"
//## class p_Storm_Sensors_C
#include "precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface.h"
//## link itsSMSWTD
class SMSWTD;

//#[ ignore
#define OMAnim_SystemContext_Storm_Sensors_setRaw_precipitation_amount_int_ARGS_DECLARATION int p_raw_precipitation_amount;
//#]

//## package SystemContext

//## class Storm_Sensors
class Storm_Sensors {
public :

//#[ ignore
    //## package SystemContext
    class p_Storm_Sensors_C : public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface, public int_raw_storm_altitude_ProxyFlowPropertyInterface, public int_raw_storm_diameter_ProxyFlowPropertyInterface, public int_raw_storm_latitude_ProxyFlowPropertyInterface, public int_raw_storm_longitude_ProxyFlowPropertyInterface, public int_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_wind_speed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Sensors_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Sensors_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_storm_altitude_ProxyFlowPropertyInterface* getItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_storm_diameter_ProxyFlowPropertyInterface* getItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_storm_latitude_ProxyFlowPropertyInterface* getItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_storm_longitude_ProxyFlowPropertyInterface* getItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_wind_direction_ProxyFlowPropertyInterface* getItsInt_raw_wind_direction_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_wind_speed_ProxyFlowPropertyInterface* getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* getItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        Storm_Sensors::p_Storm_Sensors_C* getOutBound(void);
        
        //## auto_generated
        virtual void setRaw_precipitation_amount(int p_raw_precipitation_amount);
        
        //## auto_generated
        virtual void setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type);
        
        //## auto_generated
        virtual void setRaw_storm_altitude(int p_raw_storm_altitude);
        
        //## auto_generated
        virtual void setRaw_storm_diameter(int p_raw_storm_diameter);
        
        //## auto_generated
        virtual void setRaw_storm_latitude(int p_raw_storm_latitude);
        
        //## auto_generated
        virtual void setRaw_storm_longitude(int p_raw_storm_longitude);
        
        //## auto_generated
        virtual void setRaw_wind_direction(int p_raw_wind_direction);
        
        //## auto_generated
        virtual void setRaw_wind_speed(int p_raw_wind_speed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(int_raw_storm_altitude_ProxyFlowPropertyInterface* const p_int_raw_storm_altitude_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(int_raw_storm_diameter_ProxyFlowPropertyInterface* const p_int_raw_storm_diameter_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(int_raw_storm_latitude_ProxyFlowPropertyInterface* const p_int_raw_storm_latitude_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(int_raw_storm_longitude_ProxyFlowPropertyInterface* const p_int_raw_storm_longitude_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(int_raw_wind_direction_ProxyFlowPropertyInterface* const p_int_raw_wind_direction_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* const p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface
        
        int_raw_storm_altitude_ProxyFlowPropertyInterface* itsInt_raw_storm_altitude_ProxyFlowPropertyInterface;		//## link itsInt_raw_storm_altitude_ProxyFlowPropertyInterface
        
        int_raw_storm_diameter_ProxyFlowPropertyInterface* itsInt_raw_storm_diameter_ProxyFlowPropertyInterface;		//## link itsInt_raw_storm_diameter_ProxyFlowPropertyInterface
        
        int_raw_storm_latitude_ProxyFlowPropertyInterface* itsInt_raw_storm_latitude_ProxyFlowPropertyInterface;		//## link itsInt_raw_storm_latitude_ProxyFlowPropertyInterface
        
        int_raw_storm_longitude_ProxyFlowPropertyInterface* itsInt_raw_storm_longitude_ProxyFlowPropertyInterface;		//## link itsInt_raw_storm_longitude_ProxyFlowPropertyInterface
        
        int_raw_wind_direction_ProxyFlowPropertyInterface* itsInt_raw_wind_direction_ProxyFlowPropertyInterface;		//## link itsInt_raw_wind_direction_ProxyFlowPropertyInterface
        
        int_raw_wind_speed_ProxyFlowPropertyInterface* itsInt_raw_wind_speed_ProxyFlowPropertyInterface;		//## link itsInt_raw_wind_speed_ProxyFlowPropertyInterface
        
        precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface;		//## link itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedStorm_Sensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Storm_Sensors(void);
    
    //## auto_generated
    ~Storm_Sensors(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setRaw_precipitation_amount(int p_raw_precipitation_amount);
    
    void setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type);
    
    void setRaw_storm_altitude(int p_raw_storm_altitude);
    
    void setRaw_storm_diameter(int p_raw_storm_diameter);
    
    void setRaw_storm_latitude(int p_raw_storm_latitude);
    
    void setRaw_storm_longitude(int p_raw_storm_longitude);
    
    void setRaw_wind_direction(int p_raw_wind_direction);
    
    void setRaw_wind_speed(int p_raw_wind_speed);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Storm_Sensors_C* getP_Storm_Sensors(void) const;
    
    //## auto_generated
    p_Storm_Sensors_C* get_p_Storm_Sensors(void) const;
    
    //## auto_generated
    int const getRaw_precipitation_amount(void) const;
    
    //## auto_generated
    precipitation_type_enum const getRaw_precipitation_type(void) const;
    
    //## auto_generated
    int const getRaw_storm_altitude(void) const;
    
    //## auto_generated
    int const getRaw_storm_diameter(void) const;
    
    //## auto_generated
    int const getRaw_storm_latitude(void) const;
    
    //## auto_generated
    int const getRaw_storm_longitude(void) const;
    
    //## auto_generated
    int const getRaw_wind_direction(void) const;
    
    //## auto_generated
    int const getRaw_wind_speed(void) const;
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int raw_precipitation_amount;		//## attribute raw_precipitation_amount
    
    precipitation_type_enum raw_precipitation_type;		//## attribute raw_precipitation_type
    
    int raw_storm_altitude;		//## attribute raw_storm_altitude
    
    int raw_storm_diameter;		//## attribute raw_storm_diameter
    
    int raw_storm_latitude;		//## attribute raw_storm_latitude
    
    int raw_storm_longitude;		//## attribute raw_storm_longitude
    
    int raw_wind_direction;		//## attribute raw_wind_direction
    
    int raw_wind_speed;		//## attribute raw_wind_speed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Storm_Sensors_C p_Storm_Sensors;
//#]

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(SystemContext_Storm_Sensors_setRaw_precipitation_amount_int)

//#[ ignore
class OMAnimatedStorm_Sensors : virtual public AOMInstance {
    DECLARE_META(Storm_Sensors, OMAnimatedStorm_Sensors)
    
    DECLARE_META_OP(SystemContext_Storm_Sensors_setRaw_precipitation_amount_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Storm_Sensors.h
*********************************************************************/
