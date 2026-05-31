/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Storage
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Data_Storage.h"
//#[ ignore
#define Architecture_Data_Storage_Data_Storage_SERIALIZE OM_NO_OP

#define Architecture_Data_Storage_read_storm_sensors_SERIALIZE OM_NO_OP

#define Architecture_Data_Storage_read_tsunami_sensors_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Data_Storage
//#[ ignore
Data_Storage::p_Storm_Data_C::p_Storm_Data_C(void) : int_raw_precipitation_amount_ProxyFlowPropertyInterface(), precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_storm_altitude_ProxyFlowPropertyInterface(), int_raw_storm_diameter_ProxyFlowPropertyInterface(), int_raw_storm_latitude_ProxyFlowPropertyInterface(), int_raw_storm_longitude_ProxyFlowPropertyInterface(), int_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_wind_speed_ProxyFlowPropertyInterface(), _p_(0), itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_altitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_diameter_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_latitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_storm_longitude_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_direction_ProxyFlowPropertyInterface(NULL), itsInt_raw_wind_speed_ProxyFlowPropertyInterface(NULL), itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(NULL) {
}

Data_Storage::p_Storm_Data_C::~p_Storm_Data_C(void) {
    cleanUpRelations();
}

void Data_Storage::p_Storm_Data_C::connectData_Storage(Data_Storage* part) {
    setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(part);
    setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(part);
    setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(part);
    setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(part);
    setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(part);
    
}

int_raw_precipitation_amount_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_altitude_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_diameter_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_latitude_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_storm_longitude_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_direction_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_wind_direction_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_wind_speed_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void) {
    return this;
}

precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* Data_Storage::p_Storm_Data_C::getItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(void) {
    return this;
}

void Data_Storage::p_Storm_Data_C::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    
    if (itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface->setRaw_precipitation_amount(p_raw_precipitation_amount);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    
    if (itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface != NULL) {
        itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface->setRaw_precipitation_type(p_raw_precipitation_type);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_storm_altitude(int p_raw_storm_altitude) {
    
    if (itsInt_raw_storm_altitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_altitude_ProxyFlowPropertyInterface->setRaw_storm_altitude(p_raw_storm_altitude);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_storm_diameter(int p_raw_storm_diameter) {
    
    if (itsInt_raw_storm_diameter_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_diameter_ProxyFlowPropertyInterface->setRaw_storm_diameter(p_raw_storm_diameter);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_storm_latitude(int p_raw_storm_latitude) {
    
    if (itsInt_raw_storm_latitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_latitude_ProxyFlowPropertyInterface->setRaw_storm_latitude(p_raw_storm_latitude);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_storm_longitude(int p_raw_storm_longitude) {
    
    if (itsInt_raw_storm_longitude_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_storm_longitude_ProxyFlowPropertyInterface->setRaw_storm_longitude(p_raw_storm_longitude);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_wind_direction(int p_raw_wind_direction) {
    
    if (itsInt_raw_wind_direction_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_direction_ProxyFlowPropertyInterface->setRaw_wind_direction(p_raw_wind_direction);
    }
    
}

void Data_Storage::p_Storm_Data_C::setRaw_wind_speed(int p_raw_wind_speed) {
    
    if (itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_wind_speed_ProxyFlowPropertyInterface->setRaw_wind_speed(p_raw_wind_speed);
    }
    
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface) {
    itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = p_int_raw_precipitation_amount_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_storm_altitude_ProxyFlowPropertyInterface(int_raw_storm_altitude_ProxyFlowPropertyInterface* const p_int_raw_storm_altitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_altitude_ProxyFlowPropertyInterface = p_int_raw_storm_altitude_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_storm_diameter_ProxyFlowPropertyInterface(int_raw_storm_diameter_ProxyFlowPropertyInterface* const p_int_raw_storm_diameter_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_diameter_ProxyFlowPropertyInterface = p_int_raw_storm_diameter_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_storm_latitude_ProxyFlowPropertyInterface(int_raw_storm_latitude_ProxyFlowPropertyInterface* const p_int_raw_storm_latitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_latitude_ProxyFlowPropertyInterface = p_int_raw_storm_latitude_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_storm_longitude_ProxyFlowPropertyInterface(int_raw_storm_longitude_ProxyFlowPropertyInterface* const p_int_raw_storm_longitude_ProxyFlowPropertyInterface) {
    itsInt_raw_storm_longitude_ProxyFlowPropertyInterface = p_int_raw_storm_longitude_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_wind_direction_ProxyFlowPropertyInterface(int_raw_wind_direction_ProxyFlowPropertyInterface* const p_int_raw_wind_direction_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_direction_ProxyFlowPropertyInterface = p_int_raw_wind_direction_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface) {
    itsInt_raw_wind_speed_ProxyFlowPropertyInterface = p_int_raw_wind_speed_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::setItsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface* const p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface) {
    itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface = p_precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Storm_Data_C::cleanUpRelations(void) {
    if(itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_altitude_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_altitude_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_diameter_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_diameter_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_latitude_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_latitude_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_storm_longitude_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_storm_longitude_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_wind_direction_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_wind_direction_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_wind_speed_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_wind_speed_ProxyFlowPropertyInterface = NULL;
        }
    if(itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface != NULL)
        {
            itsPrecipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface = NULL;
        }
}

Data_Storage::p_Tsunami_Data_C::p_Tsunami_Data_C(void) : bool_raw_flowDirection_ProxyFlowPropertyInterface(), int_raw_pressure_ProxyFlowPropertyInterface(), int_raw_tectonicPlate_location_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface(), _p_(0), itsBool_raw_flowDirection_ProxyFlowPropertyInterface(NULL), itsInt_raw_pressure_ProxyFlowPropertyInterface(NULL), itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(NULL), itsInt_raw_vibrations_ProxyFlowPropertyInterface(NULL) {
}

Data_Storage::p_Tsunami_Data_C::~p_Tsunami_Data_C(void) {
    cleanUpRelations();
}

void Data_Storage::p_Tsunami_Data_C::connectData_Storage(Data_Storage* part) {
    setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(part);
    setItsInt_raw_pressure_ProxyFlowPropertyInterface(part);
    setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(part);
    setItsInt_raw_vibrations_ProxyFlowPropertyInterface(part);
    
}

bool_raw_flowDirection_ProxyFlowPropertyInterface* Data_Storage::p_Tsunami_Data_C::getItsBool_raw_flowDirection_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_pressure_ProxyFlowPropertyInterface* Data_Storage::p_Tsunami_Data_C::getItsInt_raw_pressure_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* Data_Storage::p_Tsunami_Data_C::getItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(void) {
    return this;
}

int_raw_vibrations_ProxyFlowPropertyInterface* Data_Storage::p_Tsunami_Data_C::getItsInt_raw_vibrations_ProxyFlowPropertyInterface(void) {
    return this;
}

void Data_Storage::p_Tsunami_Data_C::setRaw_flowDirection(bool p_raw_flowDirection) {
    
    if (itsBool_raw_flowDirection_ProxyFlowPropertyInterface != NULL) {
        itsBool_raw_flowDirection_ProxyFlowPropertyInterface->setRaw_flowDirection(p_raw_flowDirection);
    }
    
}

void Data_Storage::p_Tsunami_Data_C::setRaw_pressure(int p_raw_pressure) {
    
    if (itsInt_raw_pressure_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_pressure_ProxyFlowPropertyInterface->setRaw_pressure(p_raw_pressure);
    }
    
}

void Data_Storage::p_Tsunami_Data_C::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    
    if (itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface->setRaw_tectonicPlate_location(p_raw_tectonicPlate_location);
    }
    
}

void Data_Storage::p_Tsunami_Data_C::setRaw_vibrations(int p_raw_vibrations) {
    
    if (itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL) {
        itsInt_raw_vibrations_ProxyFlowPropertyInterface->setRaw_vibrations(p_raw_vibrations);
    }
    
}

void Data_Storage::p_Tsunami_Data_C::setItsBool_raw_flowDirection_ProxyFlowPropertyInterface(bool_raw_flowDirection_ProxyFlowPropertyInterface* const p_bool_raw_flowDirection_ProxyFlowPropertyInterface) {
    itsBool_raw_flowDirection_ProxyFlowPropertyInterface = p_bool_raw_flowDirection_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Tsunami_Data_C::setItsInt_raw_pressure_ProxyFlowPropertyInterface(int_raw_pressure_ProxyFlowPropertyInterface* const p_int_raw_pressure_ProxyFlowPropertyInterface) {
    itsInt_raw_pressure_ProxyFlowPropertyInterface = p_int_raw_pressure_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Tsunami_Data_C::setItsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface(int_raw_tectonicPlate_location_ProxyFlowPropertyInterface* const p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface) {
    itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface = p_int_raw_tectonicPlate_location_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Tsunami_Data_C::setItsInt_raw_vibrations_ProxyFlowPropertyInterface(int_raw_vibrations_ProxyFlowPropertyInterface* const p_int_raw_vibrations_ProxyFlowPropertyInterface) {
    itsInt_raw_vibrations_ProxyFlowPropertyInterface = p_int_raw_vibrations_ProxyFlowPropertyInterface;
}

void Data_Storage::p_Tsunami_Data_C::cleanUpRelations(void) {
    if(itsBool_raw_flowDirection_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_raw_flowDirection_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_pressure_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_pressure_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_tectonicPlate_location_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_raw_vibrations_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_raw_vibrations_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

Data_Storage::Data_Storage(IOxfActive* const theActiveContext) : OMReactive(), int_raw_precipitation_amount_ProxyFlowPropertyInterface(), precipitation_type_enum_raw_precipitation_type_ProxyFlowPropertyInterface(), int_raw_storm_altitude_ProxyFlowPropertyInterface(), int_raw_storm_diameter_ProxyFlowPropertyInterface(), int_raw_storm_latitude_ProxyFlowPropertyInterface(), int_raw_storm_longitude_ProxyFlowPropertyInterface(), int_raw_wind_direction_ProxyFlowPropertyInterface(), int_raw_wind_speed_ProxyFlowPropertyInterface(), bool_raw_flowDirection_ProxyFlowPropertyInterface(), int_raw_pressure_ProxyFlowPropertyInterface(), int_raw_tectonicPlate_location_ProxyFlowPropertyInterface(), int_raw_vibrations_ProxyFlowPropertyInterface() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Data_Storage, Data_Storage(), 0, Architecture_Data_Storage_Data_Storage_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Data_Storage::~Data_Storage(void) {
    NOTIFY_DESTRUCTOR(~Data_Storage, true);
    cancelTimeouts();
}

void Data_Storage::read_storm_sensors(void) {
    NOTIFY_OPERATION(read_storm_sensors, read_storm_sensors(), 0, Architecture_Data_Storage_read_storm_sensors_SERIALIZE);
    //#[ operation read_storm_sensors()
    precipitation_amount = raw_precipitation_amount;
    precipitation_type = raw_precipitation_type;
    storm_altitude = raw_storm_altitude;
    storm_diameter = raw_storm_diameter;
    storm_latitude = raw_storm_latitude;
    storm_longitude = raw_storm_longitude;
    wind_direction = raw_wind_direction;
    wind_speed = raw_wind_speed;
    //#]
}

void Data_Storage::read_tsunami_sensors(void) {
    NOTIFY_OPERATION(read_tsunami_sensors, read_tsunami_sensors(), 0, Architecture_Data_Storage_read_tsunami_sensors_SERIALIZE);
    //#[ operation read_tsunami_sensors()
    flowDirection = raw_flowDirection;
    pressure = raw_pressure;
    tectonicPlate_location = raw_tectonicPlate_location;
    vibrations = raw_vibrations;
    //#]
}

//#[ ignore
void Data_Storage::setRaw_flowDirection(bool p_raw_flowDirection) {
    if (raw_flowDirection != p_raw_flowDirection) {
        raw_flowDirection = p_raw_flowDirection;
        FLOW_DATA_RECEIVE("raw_flowDirection", raw_flowDirection, x2String);
    }
    
}

void Data_Storage::setRaw_precipitation_amount(int p_raw_precipitation_amount) {
    if (raw_precipitation_amount != p_raw_precipitation_amount) {
        raw_precipitation_amount = p_raw_precipitation_amount;
        FLOW_DATA_RECEIVE("raw_precipitation_amount", raw_precipitation_amount, x2String);
    }
    
}

void Data_Storage::setRaw_precipitation_type(precipitation_type_enum p_raw_precipitation_type) {
    if (memcmp(&raw_precipitation_type, &p_raw_precipitation_type, sizeof(precipitation_type_enum))) {
        raw_precipitation_type = p_raw_precipitation_type;
        FLOW_DATA_RECEIVE("raw_precipitation_type", raw_precipitation_type, x2String);
    }
    
}

void Data_Storage::setRaw_pressure(int p_raw_pressure) {
    if (raw_pressure != p_raw_pressure) {
        raw_pressure = p_raw_pressure;
        FLOW_DATA_RECEIVE("raw_pressure", raw_pressure, x2String);
    }
    
}

void Data_Storage::setRaw_storm_altitude(int p_raw_storm_altitude) {
    if (raw_storm_altitude != p_raw_storm_altitude) {
        raw_storm_altitude = p_raw_storm_altitude;
        FLOW_DATA_RECEIVE("raw_storm_altitude", raw_storm_altitude, x2String);
    }
    
}

void Data_Storage::setRaw_storm_diameter(int p_raw_storm_diameter) {
    if (raw_storm_diameter != p_raw_storm_diameter) {
        raw_storm_diameter = p_raw_storm_diameter;
        FLOW_DATA_RECEIVE("raw_storm_diameter", raw_storm_diameter, x2String);
    }
    
}

void Data_Storage::setRaw_storm_latitude(int p_raw_storm_latitude) {
    if (raw_storm_latitude != p_raw_storm_latitude) {
        raw_storm_latitude = p_raw_storm_latitude;
        FLOW_DATA_RECEIVE("raw_storm_latitude", raw_storm_latitude, x2String);
    }
    
}

void Data_Storage::setRaw_storm_longitude(int p_raw_storm_longitude) {
    if (raw_storm_longitude != p_raw_storm_longitude) {
        raw_storm_longitude = p_raw_storm_longitude;
        FLOW_DATA_RECEIVE("raw_storm_longitude", raw_storm_longitude, x2String);
    }
    
}

void Data_Storage::setRaw_tectonicPlate_location(int p_raw_tectonicPlate_location) {
    if (raw_tectonicPlate_location != p_raw_tectonicPlate_location) {
        raw_tectonicPlate_location = p_raw_tectonicPlate_location;
        FLOW_DATA_RECEIVE("raw_tectonicPlate_location", raw_tectonicPlate_location, x2String);
    }
    
}

void Data_Storage::setRaw_vibrations(int p_raw_vibrations) {
    if (raw_vibrations != p_raw_vibrations) {
        raw_vibrations = p_raw_vibrations;
        FLOW_DATA_RECEIVE("raw_vibrations", raw_vibrations, x2String);
    }
    
}

void Data_Storage::setRaw_wind_direction(int p_raw_wind_direction) {
    if (raw_wind_direction != p_raw_wind_direction) {
        raw_wind_direction = p_raw_wind_direction;
        FLOW_DATA_RECEIVE("raw_wind_direction", raw_wind_direction, x2String);
    }
    
}

void Data_Storage::setRaw_wind_speed(int p_raw_wind_speed) {
    if (raw_wind_speed != p_raw_wind_speed) {
        raw_wind_speed = p_raw_wind_speed;
        FLOW_DATA_RECEIVE("raw_wind_speed", raw_wind_speed, x2String);
    }
    
}
//#]

Data_Storage::p_Storm_Data_C* Data_Storage::getP_Storm_Data(void) const {
    return (Data_Storage::p_Storm_Data_C*) &p_Storm_Data;
}

Data_Storage::p_Storm_Data_C* Data_Storage::get_p_Storm_Data(void) const {
    return (Data_Storage::p_Storm_Data_C*) &p_Storm_Data;
}

Data_Storage::p_Tsunami_Data_C* Data_Storage::getP_Tsunami_Data(void) const {
    return (Data_Storage::p_Tsunami_Data_C*) &p_Tsunami_Data;
}

Data_Storage::p_Tsunami_Data_C* Data_Storage::get_p_Tsunami_Data(void) const {
    return (Data_Storage::p_Tsunami_Data_C*) &p_Tsunami_Data;
}

bool const Data_Storage::getFlowDirection(void) const {
    return flowDirection;
}

void Data_Storage::setFlowDirection(const bool p_flowDirection) {
    flowDirection = p_flowDirection;
}

int const Data_Storage::getPrecipitation_amount(void) const {
    return precipitation_amount;
}

void Data_Storage::setPrecipitation_amount(const int p_precipitation_amount) {
    precipitation_amount = p_precipitation_amount;
    NOTIFY_SET_OPERATION;
}

precipitation_type_enum const Data_Storage::getPrecipitation_type(void) const {
    return precipitation_type;
}

void Data_Storage::setPrecipitation_type(const precipitation_type_enum p_precipitation_type) {
    precipitation_type = p_precipitation_type;
}

int const Data_Storage::getPressure(void) const {
    return pressure;
}

void Data_Storage::setPressure(const int p_pressure) {
    pressure = p_pressure;
}

bool const Data_Storage::getRaw_flowDirection(void) const {
    return raw_flowDirection;
}

int const Data_Storage::getRaw_precipitation_amount(void) const {
    return raw_precipitation_amount;
}

precipitation_type_enum const Data_Storage::getRaw_precipitation_type(void) const {
    return raw_precipitation_type;
}

int const Data_Storage::getRaw_pressure(void) const {
    return raw_pressure;
}

int const Data_Storage::getRaw_storm_altitude(void) const {
    return raw_storm_altitude;
}

int const Data_Storage::getRaw_storm_diameter(void) const {
    return raw_storm_diameter;
}

int const Data_Storage::getRaw_storm_latitude(void) const {
    return raw_storm_latitude;
}

int const Data_Storage::getRaw_storm_longitude(void) const {
    return raw_storm_longitude;
}

int const Data_Storage::getRaw_tectonicPlate_location(void) const {
    return raw_tectonicPlate_location;
}

int const Data_Storage::getRaw_vibrations(void) const {
    return raw_vibrations;
}

int const Data_Storage::getRaw_wind_direction(void) const {
    return raw_wind_direction;
}

int const Data_Storage::getRaw_wind_speed(void) const {
    return raw_wind_speed;
}

int const Data_Storage::getStorm_altitude(void) const {
    return storm_altitude;
}

void Data_Storage::setStorm_altitude(const int p_storm_altitude) {
    storm_altitude = p_storm_altitude;
}

int const Data_Storage::getStorm_diameter(void) const {
    return storm_diameter;
}

void Data_Storage::setStorm_diameter(const int p_storm_diameter) {
    storm_diameter = p_storm_diameter;
}

int const Data_Storage::getStorm_latitude(void) const {
    return storm_latitude;
}

void Data_Storage::setStorm_latitude(const int p_storm_latitude) {
    storm_latitude = p_storm_latitude;
}

int const Data_Storage::getStorm_longitude(void) const {
    return storm_longitude;
}

void Data_Storage::setStorm_longitude(const int p_storm_longitude) {
    storm_longitude = p_storm_longitude;
}

int const Data_Storage::getTectonicPlate_location(void) const {
    return tectonicPlate_location;
}

void Data_Storage::setTectonicPlate_location(const int p_tectonicPlate_location) {
    tectonicPlate_location = p_tectonicPlate_location;
}

int const Data_Storage::getVibrations(void) const {
    return vibrations;
}

void Data_Storage::setVibrations(const int p_vibrations) {
    vibrations = p_vibrations;
    NOTIFY_SET_OPERATION;
}

int const Data_Storage::getWind_direction(void) const {
    return wind_direction;
}

void Data_Storage::setWind_direction(const int p_wind_direction) {
    wind_direction = p_wind_direction;
}

int const Data_Storage::getWind_speed(void) const {
    return wind_speed;
}

void Data_Storage::setWind_speed(const int p_wind_speed) {
    wind_speed = p_wind_speed;
}

bool Data_Storage::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool Data_Storage::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Data_Storage::initRelations(void) {
    OMCreateInstances();
    OMConnectRelations();
}

void Data_Storage::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Data_Storage::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void Data_Storage::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.idle");
        rootState_subState = idle;
        rootState_active = idle;
        rootState_timeout = scheduleTimeout(500, "ROOT.idle");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Data_Storage::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State idle
        case idle:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.idle");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_2");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_2;
                            rootState_active = accepttimeevent_2;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State updating_storage
        case updating_storage:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.updating_storage");
                    NOTIFY_STATE_ENTERED("ROOT.idle");
                    rootState_subState = idle;
                    rootState_active = idle;
                    rootState_timeout = scheduleTimeout(500, "ROOT.idle");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepttimeevent_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_2");
                    NOTIFY_STATE_ENTERED("ROOT.updating_storage");
                    pushNullTransition();
                    rootState_subState = updating_storage;
                    rootState_active = updating_storage;
                    //#[ state updating_storage.(Entry) 
                    read_storm_sensors();
                    read_tsunami_sensors();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Data_Storage::OMCreateInstances(void) {
}

void Data_Storage::OMConnectRelations(void) {
    if (get_p_Storm_Data() != NULL) {
        get_p_Storm_Data()->connectData_Storage(this);
    }
    if (get_p_Tsunami_Data() != NULL) {
        get_p_Tsunami_Data()->connectData_Storage(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedData_Storage::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("raw_precipitation_amount", x2String(myReal->raw_precipitation_amount));
    aomsAttributes->addAttribute("precipitation_amount", x2String(myReal->precipitation_amount));
    aomsAttributes->addAttribute("raw_flowDirection", x2String(myReal->raw_flowDirection));
    aomsAttributes->addAttribute("raw_pressure", x2String(myReal->raw_pressure));
    aomsAttributes->addAttribute("raw_tectonicPlate_location", x2String(myReal->raw_tectonicPlate_location));
    aomsAttributes->addAttribute("raw_vibrations", x2String(myReal->raw_vibrations));
    aomsAttributes->addAttribute("raw_precipitation_type", x2String((int)myReal->raw_precipitation_type));
    aomsAttributes->addAttribute("raw_storm_altitude", x2String(myReal->raw_storm_altitude));
    aomsAttributes->addAttribute("raw_storm_diameter", x2String(myReal->raw_storm_diameter));
    aomsAttributes->addAttribute("raw_storm_latitude", x2String(myReal->raw_storm_latitude));
    aomsAttributes->addAttribute("raw_storm_longitude", x2String(myReal->raw_storm_longitude));
    aomsAttributes->addAttribute("raw_wind_direction", x2String(myReal->raw_wind_direction));
    aomsAttributes->addAttribute("raw_wind_speed", x2String(myReal->raw_wind_speed));
    aomsAttributes->addAttribute("flowDirection", x2String(myReal->flowDirection));
    aomsAttributes->addAttribute("precipitation_type", x2String((int)myReal->precipitation_type));
    aomsAttributes->addAttribute("pressure", x2String(myReal->pressure));
    aomsAttributes->addAttribute("storm_altitude", x2String(myReal->storm_altitude));
    aomsAttributes->addAttribute("storm_diameter", x2String(myReal->storm_diameter));
    aomsAttributes->addAttribute("storm_latitude", x2String(myReal->storm_latitude));
    aomsAttributes->addAttribute("storm_longitude", x2String(myReal->storm_longitude));
    aomsAttributes->addAttribute("tectonicPlate_location", x2String(myReal->tectonicPlate_location));
    aomsAttributes->addAttribute("vibrations", x2String(myReal->vibrations));
    aomsAttributes->addAttribute("wind_direction", x2String(myReal->wind_direction));
    aomsAttributes->addAttribute("wind_speed", x2String(myReal->wind_speed));
}

void OMAnimatedData_Storage::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedData_Storage::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Data_Storage::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Data_Storage::updating_storage:
        {
            updating_storage_serializeStates(aomsState);
        }
        break;
        case Data_Storage::accepttimeevent_2:
        {
            accepttimeevent_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedData_Storage::updating_storage_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.updating_storage");
}

void OMAnimatedData_Storage::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.idle");
}

void OMAnimatedData_Storage::accepttimeevent_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_2");
}
//#]

IMPLEMENT_REACTIVE_META_P(Data_Storage, Architecture, Architecture, false, OMAnimatedData_Storage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.cpp
*********************************************************************/
