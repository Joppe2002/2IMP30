/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Storage
//!	Generated Date	: Mon, 1, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.h
*********************************************************************/

#ifndef Data_Storage_H
#define Data_Storage_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class Data_Storage
#include "bool_raw_flowDirection_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_precipitation_amount_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_pressure_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_storm_altitude_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_storm_diameter_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_storm_latitude_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_storm_longitude_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_tectonicPlate_location_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_vibrations_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_wind_direction_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_wind_speed_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface.h"
//## operation setRaw_precipitation_type(precipitation_type_enum)
#include "SystemContext.h"
//## class p_Data_Storage_C
#include "int_flowDirection_ProxyFlowPropertyInterface.h"
//## class p_Data_Storage_C
#include "int_pressure_ProxyFlowPropertyInterface.h"
//## class p_Data_Storage_C
#include "int_tectonicPlate_location_ProxyFlowPropertyInterface.h"
//## class p_Data_Storage_C
#include "int_vibrations_ProxyFlowPropertyInterface.h"
//## link itsTsunami_Prediction
class Tsunami_Prediction;

//## package Architecture

//## class Data_Storage
// Include sensor input
class Data_Storage : public OMReactive, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface, public int_raw_storm_altitude_ProxyFlowPropertyInterface, public int_raw_storm_diameter_ProxyFlowPropertyInterface, public int_raw_storm_latitude_ProxyFlowPropertyInterface, public int_raw_storm_longitude_ProxyFlowPropertyInterface, public int_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_flowDirection_ProxyFlowPropertyInterface, public int_raw_pressure_ProxyFlowPropertyInterface, public int_raw_tectonicPlate_location_ProxyFlowPropertyInterface, public int_raw_vibrations_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package Architecture
    class p_Storm_Data_C : public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface, public int_raw_storm_altitude_ProxyFlowPropertyInterface, public int_raw_storm_diameter_ProxyFlowPropertyInterface, public int_raw_storm_latitude_ProxyFlowPropertyInterface, public int_raw_storm_longitude_ProxyFlowPropertyInterface, public int_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_wind_speed_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Storm_Data_C(void);
        
        //## auto_generated
        virtual ~p_Storm_Data_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectData_Storage(Data_Storage* part);
        
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
    
    //## package Architecture
    class p_Tsunami_Data_C : public bool_raw_flowDirection_ProxyFlowPropertyInterface, public int_raw_pressure_ProxyFlowPropertyInterface, public int_raw_tectonicPlate_location_ProxyFlowPropertyInterface, public int_raw_vibrations_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Data_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Data_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectData_Storage(Data_Storage* part);
        
        //## auto_generated
        bool_raw_flowDirection_ProxyFlowPropertyInterface* getItsBool_raw_flowDirection_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_pressure_ProxyFlowPropertyInterface* getItsInt_raw_pressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_vibrations_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setRaw_flowDirection(bool p_raw_flowDirection);
        
        //## auto_generated
        virtual void setRaw_pressure(int p_raw_pressure);
        
        //## auto_generated
        virtual void setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location);
        
        //## auto_generated
        virtual void setRaw_vibrations(int p_raw_vibrations);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(bool_raw_flowDirection_ProxyFlowPropertyInterface* const p_bool_raw_flowDirection_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_pressure_ProxyFlowPropertyInterface(int_raw_pressure_ProxyFlowPropertyInterface* const p_int_raw_pressure_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_raw_flowDirection_ProxyFlowPropertyInterface* itsBool_raw_flowDirection_ProxyFlowPropertyInterface;		//## link itsBool_raw_flowDirection_ProxyFlowPropertyInterface
        
        int_raw_pressure_ProxyFlowPropertyInterface* itsInt_raw_pressure_ProxyFlowPropertyInterface;		//## link itsInt_raw_pressure_ProxyFlowPropertyInterface
        
        int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface;		//## link itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface
        
        int_raw_vibrations_ProxyFlowPropertyInterface* itsInt_raw_vibrations_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_ProxyFlowPropertyInterface
    };
    
    //## package Architecture
    class p_Data_Storage_C : public int_flowDirection_ProxyFlowPropertyInterface, public int_pressure_ProxyFlowPropertyInterface, public int_tectonicPlate_location_ProxyFlowPropertyInterface, public int_vibrations_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Data_Storage_C(void);
        
        //## auto_generated
        virtual ~p_Data_Storage_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_flowDirection_ProxyFlowPropertyInterface* getItsInt_flowDirection_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_pressure_ProxyFlowPropertyInterface* getItsInt_pressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_tectonicPlate_location_ProxyFlowPropertyInterface* getItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_vibrations_ProxyFlowPropertyInterface* getItsInt_vibrations_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        Data_Storage::p_Data_Storage_C* getOutBound(void);
        
        //## auto_generated
        virtual void setFlowDirection(int p_flowDirection);
        
        //## auto_generated
        virtual void setPressure(int p_pressure);
        
        //## auto_generated
        virtual void setTectonicPlate_location(int p_tectonicPlate_location);
        
        //## auto_generated
        virtual void setVibrations(int p_vibrations);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_flowDirection_ProxyFlowPropertyInterface(int_flowDirection_ProxyFlowPropertyInterface* const p_int_flowDirection_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_pressure_ProxyFlowPropertyInterface(int_pressure_ProxyFlowPropertyInterface* const p_int_pressure_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(int_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_tectonicPlate_location_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_vibrations_ProxyFlowPropertyInterface(int_vibrations_ProxyFlowPropertyInterface* const p_int_vibrations_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_flowDirection_ProxyFlowPropertyInterface* itsInt_flowDirection_ProxyFlowPropertyInterface;		//## link itsInt_flowDirection_ProxyFlowPropertyInterface
        
        int_pressure_ProxyFlowPropertyInterface* itsInt_pressure_ProxyFlowPropertyInterface;		//## link itsInt_pressure_ProxyFlowPropertyInterface
        
        int_tectonicPlate_location_ProxyFlowPropertyInterface* itsInt_tectonicPlate_location_ProxyFlowPropertyInterface;		//## link itsInt_tectonicPlate_location_ProxyFlowPropertyInterface
        
        int_vibrations_ProxyFlowPropertyInterface* itsInt_vibrations_ProxyFlowPropertyInterface;		//## link itsInt_vibrations_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedData_Storage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Data_Storage(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Data_Storage(void);
    
    ////    Operations    ////
    
    //## operation read_storm_sensors()
    virtual void read_storm_sensors(void);
    
    //## operation read_tsunami_sensors()
    virtual void read_tsunami_sensors(void);
    
//#[ ignore
    void setFlowDirection(int p_flowDirection);
    
    void setPressure(int p_pressure);
    
    void setRaw_flowDirection(bool p_raw_flowDirection);
    
    void setRaw_precipitation_amount(int p_raw_precipitation_amount);
    
    void setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type);
    
    void setRaw_pressure(int p_raw_pressure);
    
    void setRaw_storm_altitude(int p_raw_storm_altitude);
    
    void setRaw_storm_diameter(int p_raw_storm_diameter);
    
    void setRaw_storm_latitude(int p_raw_storm_latitude);
    
    void setRaw_storm_longitude(int p_raw_storm_longitude);
    
    void setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location);
    
    void setRaw_vibrations(int p_raw_vibrations);
    
    void setRaw_wind_direction(int p_raw_wind_direction);
    
    void setRaw_wind_speed(int p_raw_wind_speed);
    
    void setTectonicPlate_location(int p_tectonicPlate_location);
    
    void setVibrations(int p_vibrations);
//#]

    //## operation write_storm_data()
    virtual void write_storm_data(void);
    
    //## operation write_tsunami_data()
    virtual void write_tsunami_data(void);
    
    //## operation write_weather_data()
    virtual void write_weather_data(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_Storm_Data_C* getP_Storm_Data(void) const;
    
    //## auto_generated
    p_Storm_Data_C* get_p_Storm_Data(void) const;
    
    //## auto_generated
    p_Tsunami_Data_C* getP_Tsunami_Data(void) const;
    
    //## auto_generated
    p_Tsunami_Data_C* get_p_Tsunami_Data(void) const;
    
    //## auto_generated
    p_Data_Storage_C* getP_Data_Storage(void) const;
    
    //## auto_generated
    p_Data_Storage_C* get_p_Data_Storage(void) const;
    
    //## auto_generated
    int const getTest(void) const;
    
    //## auto_generated
    void setTest(const int p_Test);
    
    //## auto_generated
    int const getFlowDirection(void) const;
    
    //## auto_generated
    int const getPrecipitation_amount(void) const;
    
    //## auto_generated
    void setPrecipitation_amount(const int p_precipitation_amount);
    
    //## auto_generated
    precipitation_type_enum const getPrecipitation_type(void) const;
    
    //## auto_generated
    void setPrecipitation_type(const precipitation_type_enum p_precipitation_type);
    
    //## auto_generated
    int const getPressure(void) const;
    
    //## auto_generated
    bool const getRaw_flowDirection(void) const;
    
    //## auto_generated
    int const getRaw_precipitation_amount(void) const;
    
    //## auto_generated
    precipitation_type_enum const getRaw_precipitation_type(void) const;
    
    //## auto_generated
    int const getRaw_pressure(void) const;
    
    //## auto_generated
    int const getRaw_storm_altitude(void) const;
    
    //## auto_generated
    int const getRaw_storm_diameter(void) const;
    
    //## auto_generated
    int const getRaw_storm_latitude(void) const;
    
    //## auto_generated
    int const getRaw_storm_longitude(void) const;
    
    //## auto_generated
    int const getRaw_tectonicPlate_location(void) const;
    
    //## auto_generated
    int const getRaw_vibrations(void) const;
    
    //## auto_generated
    int const getRaw_wind_direction(void) const;
    
    //## auto_generated
    int const getRaw_wind_speed(void) const;
    
    //## auto_generated
    bool const getStored_flowDirection(void) const;
    
    //## auto_generated
    void setStored_flowDirection(const bool p_stored_flowDirection);
    
    //## auto_generated
    int const getStored_precipitation_amount(void) const;
    
    //## auto_generated
    void setStored_precipitation_amount(const int p_stored_precipitation_amount);
    
    //## auto_generated
    precipitation_type_enum const getStored_precipitation_type(void) const;
    
    //## auto_generated
    void setStored_precipitation_type(const precipitation_type_enum p_stored_precipitation_type);
    
    //## auto_generated
    int const getStored_pressure(void) const;
    
    //## auto_generated
    void setStored_pressure(const int p_stored_pressure);
    
    //## auto_generated
    int const getStored_storm_altitude(void) const;
    
    //## auto_generated
    void setStored_storm_altitude(const int p_stored_storm_altitude);
    
    //## auto_generated
    int const getStored_storm_diameter(void) const;
    
    //## auto_generated
    void setStored_storm_diameter(const int p_stored_storm_diameter);
    
    //## auto_generated
    int const getStored_storm_latitude(void) const;
    
    //## auto_generated
    void setStored_storm_latitude(const int p_stored_storm_latitude);
    
    //## auto_generated
    int const getStored_storm_longitude(void) const;
    
    //## auto_generated
    void setStored_storm_longitude(const int p_stored_storm_longitude);
    
    //## auto_generated
    int const getStored_tectonicPlate_location(void) const;
    
    //## auto_generated
    void setStored_tectonicPlate_location(const int p_stored_tectonicPlate_location);
    
    //## auto_generated
    int const getStored_vibrations(void) const;
    
    //## auto_generated
    void setStored_vibrations(const int p_stored_vibrations);
    
    //## auto_generated
    int const getStored_wind_direction(void) const;
    
    //## auto_generated
    void setStored_wind_direction(const int p_stored_wind_direction);
    
    //## auto_generated
    int const getStored_wind_speed(void) const;
    
    //## auto_generated
    void setStored_wind_speed(const int p_stored_wind_speed);
    
    //## auto_generated
    int const getStorm_altitude(void) const;
    
    //## auto_generated
    void setStorm_altitude(const int p_storm_altitude);
    
    //## auto_generated
    int const getStorm_diameter(void) const;
    
    //## auto_generated
    void setStorm_diameter(const int p_storm_diameter);
    
    //## auto_generated
    int const getStorm_latitude(void) const;
    
    //## auto_generated
    void setStorm_latitude(const int p_storm_latitude);
    
    //## auto_generated
    int const getStorm_longitude(void) const;
    
    //## auto_generated
    void setStorm_longitude(const int p_storm_longitude);
    
    //## auto_generated
    int const getTectonicPlate_location(void) const;
    
    //## auto_generated
    int const getVibrations(void) const;
    
    //## auto_generated
    int const getWind_direction(void) const;
    
    //## auto_generated
    void setWind_direction(const int p_wind_direction);
    
    //## auto_generated
    int const getWind_speed(void) const;
    
    //## auto_generated
    void setWind_speed(const int p_wind_speed);
    
    //## auto_generated
    const Tsunami_Prediction* getItsTsunami_Prediction(void) const;
    
    //## auto_generated
    void setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    int Test;		//## attribute Test
    
    int flowDirection;		//## attribute flowDirection
    
    int precipitation_amount;		//## attribute precipitation_amount
    
    precipitation_type_enum precipitation_type;		//## attribute precipitation_type
    
    int pressure;		//## attribute pressure
    
    bool raw_flowDirection;		//## attribute raw_flowDirection
    
    int raw_precipitation_amount;		//## attribute raw_precipitation_amount
    
    precipitation_type_enum raw_precipitation_type;		//## attribute raw_precipitation_type
    
    int raw_pressure;		//## attribute raw_pressure
    
    int raw_storm_altitude;		//## attribute raw_storm_altitude
    
    int raw_storm_diameter;		//## attribute raw_storm_diameter
    
    int raw_storm_latitude;		//## attribute raw_storm_latitude
    
    int raw_storm_longitude;		//## attribute raw_storm_longitude
    
    int raw_tectonicPlate_location;		//## attribute raw_tectonicPlate_location
    
    int raw_vibrations;		//## attribute raw_vibrations
    
    int raw_wind_direction;		//## attribute raw_wind_direction
    
    int raw_wind_speed;		//## attribute raw_wind_speed
    
    bool stored_flowDirection;		//## attribute stored_flowDirection
    
    int stored_precipitation_amount;		//## attribute stored_precipitation_amount
    
    precipitation_type_enum stored_precipitation_type;		//## attribute stored_precipitation_type
    
    int stored_pressure;		//## attribute stored_pressure
    
    int stored_storm_altitude;		//## attribute stored_storm_altitude
    
    int stored_storm_diameter;		//## attribute stored_storm_diameter
    
    int stored_storm_latitude;		//## attribute stored_storm_latitude
    
    int stored_storm_longitude;		//## attribute stored_storm_longitude
    
    int stored_tectonicPlate_location;		//## attribute stored_tectonicPlate_location
    
    int stored_vibrations;		//## attribute stored_vibrations
    
    int stored_wind_direction;		//## attribute stored_wind_direction
    
    int stored_wind_speed;		//## attribute stored_wind_speed
    
    int storm_altitude;		//## attribute storm_altitude
    
    int storm_diameter;		//## attribute storm_diameter
    
    int storm_latitude;		//## attribute storm_latitude
    
    int storm_longitude;		//## attribute storm_longitude
    
    int tectonicPlate_location;		//## attribute tectonicPlate_location
    
    int vibrations;		//## attribute vibrations
    
    int wind_direction;		//## attribute wind_direction
    
    int wind_speed;		//## attribute wind_speed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Storm_Data_C p_Storm_Data;
    
    p_Tsunami_Data_C p_Tsunami_Data;
    
    p_Data_Storage_C p_Data_Storage;
//#]

    Tsunami_Prediction* itsTsunami_Prediction;		//## link itsTsunami_Prediction
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    void _setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    void _clearItsTsunami_Prediction(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // updating_storage:
    //## statechart_method
    inline RhpBoolean updating_storage_IN(void) const;
    
    // relaying_tsunami_data:
    //## statechart_method
    inline RhpBoolean relaying_tsunami_data_IN(void) const;
    
    // idle:
    //## statechart_method
    inline RhpBoolean idle_IN(void) const;
    
    // accepttimeevent_5:
    //## statechart_method
    inline RhpBoolean accepttimeevent_5_IN(void) const;
    
    // accepttimeevent_2:
    //## statechart_method
    inline RhpBoolean accepttimeevent_2_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Data_Storage_Enum {
        OMNonState = 0,
        updating_storage = 1,
        relaying_tsunami_data = 2,
        idle = 3,
        accepttimeevent_5 = 4,
        accepttimeevent_2 = 5
    };
//#]

private :

//#[ ignore
    Data_Storage_Enum rootState_subState;
    
    Data_Storage_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedData_Storage : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Data_Storage, OMAnimatedData_Storage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void updating_storage_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void relaying_tsunami_data_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_2_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Data_Storage::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Data_Storage::updating_storage_IN(void) const {
    return rootState_subState == updating_storage;
}

inline RhpBoolean Data_Storage::relaying_tsunami_data_IN(void) const {
    return rootState_subState == relaying_tsunami_data;
}

inline RhpBoolean Data_Storage::idle_IN(void) const {
    return rootState_subState == idle;
}

inline RhpBoolean Data_Storage::accepttimeevent_5_IN(void) const {
    return rootState_subState == accepttimeevent_5;
}

inline RhpBoolean Data_Storage::accepttimeevent_2_IN(void) const {
    return rootState_subState == accepttimeevent_2;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.h
*********************************************************************/
