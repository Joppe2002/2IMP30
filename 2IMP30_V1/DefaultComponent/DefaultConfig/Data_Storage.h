/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Storage
//!	Generated Date	: Sat, 13, Jun 2026  
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
//## attribute stored_precipitation_type
#include "Behavior.h"
//## class Data_Storage
#include "bool_raw_wind_direction_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_precipitation_amount_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_precipitation_type_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_vibrations_distance_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_vibrations_intensity_ProxyFlowPropertyInterface.h"
//## class Data_Storage
#include "int_raw_wind_speed_ProxyFlowPropertyInterface.h"
//## link itsStorm_Prediction
class Storm_Prediction;

//## link itsTsunami_Prediction
class Tsunami_Prediction;

//## package Architecture

//## class Data_Storage
// Include sensor input
class Data_Storage : public OMReactive, public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface, public int_raw_vibrations_distance_ProxyFlowPropertyInterface, public int_raw_vibrations_intensity_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package Architecture
    class p_Data_Storage_C : public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Data_Storage_C(void);
        
        //## auto_generated
        virtual ~p_Data_Storage_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectData_Storage(Data_Storage* part);
        
        //## auto_generated
        bool_raw_wind_direction_ProxyFlowPropertyInterface* getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_type_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_wind_speed_ProxyFlowPropertyInterface* getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setRaw_precipitation_amount(int p_raw_precipitation_amount);
        
        //## auto_generated
        virtual void setRaw_precipitation_type(int p_raw_precipitation_type);
        
        //## auto_generated
        virtual void setRaw_wind_direction(bool p_raw_wind_direction);
        
        //## auto_generated
        virtual void setRaw_wind_speed(int p_raw_wind_speed);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_raw_wind_direction_ProxyFlowPropertyInterface(bool_raw_wind_direction_ProxyFlowPropertyInterface* const p_bool_raw_wind_direction_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(int_raw_precipitation_amount_ProxyFlowPropertyInterface* const p_int_raw_precipitation_amount_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(int_raw_precipitation_type_ProxyFlowPropertyInterface* const p_int_raw_precipitation_type_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_wind_speed_ProxyFlowPropertyInterface(int_raw_wind_speed_ProxyFlowPropertyInterface* const p_int_raw_wind_speed_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_raw_wind_direction_ProxyFlowPropertyInterface* itsBool_raw_wind_direction_ProxyFlowPropertyInterface;		//## link itsBool_raw_wind_direction_ProxyFlowPropertyInterface
        
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_amount_ProxyFlowPropertyInterface
        
        int_raw_precipitation_type_ProxyFlowPropertyInterface* itsInt_raw_precipitation_type_ProxyFlowPropertyInterface;		//## link itsInt_raw_precipitation_type_ProxyFlowPropertyInterface
        
        int_raw_wind_speed_ProxyFlowPropertyInterface* itsInt_raw_wind_speed_ProxyFlowPropertyInterface;		//## link itsInt_raw_wind_speed_ProxyFlowPropertyInterface
    };
    
    //## package Architecture
    class p_Data_Storage_1_C : public int_raw_vibrations_distance_ProxyFlowPropertyInterface, public int_raw_vibrations_intensity_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Data_Storage_1_C(void);
        
        //## auto_generated
        virtual ~p_Data_Storage_1_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectData_Storage(Data_Storage* part);
        
        //## auto_generated
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* getItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setRaw_vibrations_distance(int p_raw_vibrations_distance);
        
        //## auto_generated
        virtual void setRaw_vibrations_intensity(int p_raw_vibrations_intensity);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_raw_vibrations_distance_ProxyFlowPropertyInterface(int_raw_vibrations_distance_ProxyFlowPropertyInterface* const p_int_raw_vibrations_distance_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface(int_raw_vibrations_intensity_ProxyFlowPropertyInterface* const p_int_raw_vibrations_intensity_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_raw_vibrations_distance_ProxyFlowPropertyInterface* itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_distance_ProxyFlowPropertyInterface
        
        int_raw_vibrations_intensity_ProxyFlowPropertyInterface* itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface;		//## link itsInt_raw_vibrations_intensity_ProxyFlowPropertyInterface
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
    
    //## operation relay_storm_data()
    virtual void relay_storm_data(void);
    
    //## operation relay_tsunami_data()
    virtual void relay_tsunami_data(void);
    
//#[ ignore
    void setRaw_precipitation_amount(int p_raw_precipitation_amount);
    
    void setRaw_precipitation_type(int p_raw_precipitation_type);
    
    void setRaw_vibrations_distance(int p_raw_vibrations_distance);
    
    void setRaw_vibrations_intensity(int p_raw_vibrations_intensity);
    
    void setRaw_wind_direction(bool p_raw_wind_direction);
    
    void setRaw_wind_speed(int p_raw_wind_speed);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Data_Storage_C* getP_Data_Storage(void) const;
    
    //## auto_generated
    p_Data_Storage_C* get_p_Data_Storage(void) const;
    
    //## auto_generated
    p_Data_Storage_1_C* getP_Data_Storage_1(void) const;
    
    //## auto_generated
    p_Data_Storage_1_C* get_p_Data_Storage_1(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_amount(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_type(void) const;
    
    //## auto_generated
    const int getRaw_vibrations_distance(void) const;
    
    //## auto_generated
    const int getRaw_vibrations_intensity(void) const;
    
    //## auto_generated
    const bool getRaw_wind_direction(void) const;
    
    //## auto_generated
    const int getRaw_wind_speed(void) const;
    
    //## auto_generated
    const int getStored_precipitation_amount(void) const;
    
    //## auto_generated
    void setStored_precipitation_amount(const int p_stored_precipitation_amount);
    
    //## auto_generated
    const precipitation_type_enum getStored_precipitation_type(void) const;
    
    //## auto_generated
    void setStored_precipitation_type(const precipitation_type_enum p_stored_precipitation_type);
    
    //## auto_generated
    const int getStored_vibrations_distance(void) const;
    
    //## auto_generated
    void setStored_vibrations_distance(const int p_stored_vibrations_distance);
    
    //## auto_generated
    const int getStored_vibrations_intensity(void) const;
    
    //## auto_generated
    void setStored_vibrations_intensity(const int p_stored_vibrations_intensity);
    
    //## auto_generated
    const bool getStored_wind_direction(void) const;
    
    //## auto_generated
    void setStored_wind_direction(const bool p_stored_wind_direction);
    
    //## auto_generated
    const int getStored_wind_speed(void) const;
    
    //## auto_generated
    void setStored_wind_speed(const int p_stored_wind_speed);
    
    //## auto_generated
    const Storm_Prediction* getItsStorm_Prediction(void) const;
    
    //## auto_generated
    void setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction);
    
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

    int raw_precipitation_amount;		//## attribute raw_precipitation_amount
    
    int raw_precipitation_type;		//## attribute raw_precipitation_type
    
    int raw_vibrations_distance;		//## attribute raw_vibrations_distance
    
    int raw_vibrations_intensity;		//## attribute raw_vibrations_intensity
    
    bool raw_wind_direction;		//## attribute raw_wind_direction
    
    int raw_wind_speed;		//## attribute raw_wind_speed
    
    int stored_precipitation_amount;		//## attribute stored_precipitation_amount
    
    precipitation_type_enum stored_precipitation_type;		//## attribute stored_precipitation_type
    
    int stored_vibrations_distance;		//## attribute stored_vibrations_distance
    
    int stored_vibrations_intensity;		//## attribute stored_vibrations_intensity
    
    bool stored_wind_direction;		//## attribute stored_wind_direction
    
    int stored_wind_speed;		//## attribute stored_wind_speed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Data_Storage_C p_Data_Storage;
    
    p_Data_Storage_1_C p_Data_Storage_1;
//#]

    Storm_Prediction* itsStorm_Prediction;		//## link itsStorm_Prediction
    
    Tsunami_Prediction* itsTsunami_Prediction;		//## link itsTsunami_Prediction
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction);
    
    //## auto_generated
    void _setItsStorm_Prediction(Storm_Prediction* const p_Storm_Prediction);
    
    //## auto_generated
    void _clearItsStorm_Prediction(void);
    
    //## auto_generated
    void __setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    void _setItsTsunami_Prediction(Tsunami_Prediction* const p_Tsunami_Prediction);
    
    //## auto_generated
    void _clearItsTsunami_Prediction(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // MainBehavior:
    //## statechart_method
    inline RhpBoolean MainBehavior_IN(void) const;
    
    //## statechart_method
    void MainBehavior_entDef(void);
    
    //## statechart_method
    void MainBehavior_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus MainBehavior_handleEvent(void);
    
    // relaying_storm_data:
    //## statechart_method
    inline RhpBoolean relaying_storm_data_IN(void) const;
    
    // polling_storm_data:
    //## statechart_method
    inline RhpBoolean polling_storm_data_IN(void) const;
    
    // idle:
    //## statechart_method
    inline RhpBoolean idle_IN(void) const;
    
    // accepttimeevent_3:
    //## statechart_method
    inline RhpBoolean accepttimeevent_3_IN(void) const;
    
    // accepttimeevent_2:
    //## statechart_method
    inline RhpBoolean accepttimeevent_2_IN(void) const;
    
    // ErrorHandling:
    //## statechart_method
    inline RhpBoolean ErrorHandling_IN(void) const;
    
    //## statechart_method
    void ErrorHandling_entDef(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ErrorHandling_handleEvent(void);
    
    // Handled:
    //## statechart_method
    inline RhpBoolean Handled_IN(void) const;
    
    // Error:
    //## statechart_method
    inline RhpBoolean Error_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Data_Storage_Enum {
        OMNonState = 0,
        MainBehavior = 1,
        relaying_storm_data = 2,
        polling_storm_data = 3,
        idle = 4,
        accepttimeevent_3 = 5,
        accepttimeevent_2 = 6,
        ErrorHandling = 7,
        Handled = 8,
        Error = 9
    };
//#]

private :

//#[ ignore
    Data_Storage_Enum rootState_subState;
    
    Data_Storage_Enum rootState_active;
    
    Data_Storage_Enum MainBehavior_subState;
    
    IOxfTimeout* MainBehavior_timeout;
    
    Data_Storage_Enum ErrorHandling_subState;
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
    void MainBehavior_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void relaying_storm_data_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void polling_storm_data_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ErrorHandling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Handled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Error_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Data_Storage::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Data_Storage::MainBehavior_IN(void) const {
    return rootState_subState == MainBehavior;
}

inline RhpBoolean Data_Storage::relaying_storm_data_IN(void) const {
    return MainBehavior_subState == relaying_storm_data;
}

inline RhpBoolean Data_Storage::polling_storm_data_IN(void) const {
    return MainBehavior_subState == polling_storm_data;
}

inline RhpBoolean Data_Storage::idle_IN(void) const {
    return MainBehavior_subState == idle;
}

inline RhpBoolean Data_Storage::accepttimeevent_3_IN(void) const {
    return MainBehavior_subState == accepttimeevent_3;
}

inline RhpBoolean Data_Storage::accepttimeevent_2_IN(void) const {
    return MainBehavior_subState == accepttimeevent_2;
}

inline RhpBoolean Data_Storage::ErrorHandling_IN(void) const {
    return rootState_subState == ErrorHandling;
}

inline RhpBoolean Data_Storage::Handled_IN(void) const {
    return ErrorHandling_subState == Handled;
}

inline RhpBoolean Data_Storage::Error_IN(void) const {
    return ErrorHandling_subState == Error;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Storage.h
*********************************************************************/
