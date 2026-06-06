/*********************************************************************
	Rhapsody	: 10.0 
	Login		: 20214193
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sat, 6, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

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
//## classInstance itsActionable_Information_Generator
#include "Actionable_Information_Generator.h"
//## class SMSWTD
#include "bool_raw_wind_direction_ProxyFlowPropertyInterface.h"
//## classInstance itsData_Storage
#include "Data_Storage.h"
//## class SMSWTD
#include "int_raw_precipitation_amount_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_precipitation_type_ProxyFlowPropertyInterface.h"
//## class SMSWTD
#include "int_raw_wind_speed_ProxyFlowPropertyInterface.h"
//## classInstance itsPrediction_Module
#include "Prediction_Module.h"
//## classInstance itsSystem_Output
#include "System_Output.h"
//## link itsCultural_and_Geological_Differences
class Cultural_and_Geological_Differences;

//## link itsInformation_Channels
class Information_Channels;

//## link itsStakeholders
class Stakeholders;

//## link itsStandards_and_Regulations
class Standards_and_Regulations;

//## link itsStorm_Sensors
class Storm_Sensors;

//## link itsTsunami_Sensors
class Tsunami_Sensors;

//## package Architecture

//## class SMSWTD
class SMSWTD : public OMReactive, public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package Architecture
    class p_SMSWTD_C : public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSMSWTD(SMSWTD* part);
        
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
    class p_SMSWTD_1_C : public int_raw_wind_speed_ProxyFlowPropertyInterface, public bool_raw_wind_direction_ProxyFlowPropertyInterface, public int_raw_precipitation_amount_ProxyFlowPropertyInterface, public int_raw_precipitation_type_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_SMSWTD_1_C(void);
        
        //## auto_generated
        virtual ~p_SMSWTD_1_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        bool_raw_wind_direction_ProxyFlowPropertyInterface* getItsBool_raw_wind_direction_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_amount_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_amount_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_precipitation_type_ProxyFlowPropertyInterface* getItsInt_raw_precipitation_type_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_raw_wind_speed_ProxyFlowPropertyInterface* getItsInt_raw_wind_speed_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        SMSWTD::p_SMSWTD_1_C* getOutBound(void);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSWTD(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setRaw_precipitation_amount(int p_raw_precipitation_amount);
    
    void setRaw_precipitation_type(int p_raw_precipitation_type);
    
    void setRaw_wind_direction(bool p_raw_wind_direction);
    
    void setRaw_wind_speed(int p_raw_wind_speed);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_SMSWTD_C* getP_SMSWTD(void) const;
    
    //## auto_generated
    p_SMSWTD_C* get_p_SMSWTD(void) const;
    
    //## auto_generated
    p_SMSWTD_1_C* getP_SMSWTD_1(void) const;
    
    //## auto_generated
    p_SMSWTD_1_C* get_p_SMSWTD_1(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_amount(void) const;
    
    //## auto_generated
    const int getRaw_precipitation_type(void) const;
    
    //## auto_generated
    const bool getRaw_wind_direction(void) const;
    
    //## auto_generated
    const int getRaw_wind_speed(void) const;
    
    //## auto_generated
    const Actionable_Information_Generator* getItsActionable_Information_Generator(void) const;
    
    //## auto_generated
    const Cultural_and_Geological_Differences* getItsCultural_and_Geological_Differences(void) const;
    
    //## auto_generated
    void setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences);
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    const Information_Channels* getItsInformation_Channels(void) const;
    
    //## auto_generated
    void setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    const Prediction_Module* getItsPrediction_Module(void) const;
    
    //## auto_generated
    const Stakeholders* getItsStakeholders(void) const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    const Standards_and_Regulations* getItsStandards_and_Regulations(void) const;
    
    //## auto_generated
    void setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations);
    
    //## auto_generated
    const Storm_Sensors* getItsStorm_Sensors(void) const;
    
    //## auto_generated
    void setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors);
    
    //## auto_generated
    const System_Output* getItsSystem_Output(void) const;
    
    //## auto_generated
    const Tsunami_Sensors* getItsTsunami_Sensors(void) const;
    
    //## auto_generated
    void setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int raw_precipitation_amount;		//## attribute raw_precipitation_amount
    
    int raw_precipitation_type;		//## attribute raw_precipitation_type
    
    bool raw_wind_direction;		//## attribute raw_wind_direction
    
    int raw_wind_speed;		//## attribute raw_wind_speed
    
    ////    Relations and components    ////
    
//#[ ignore
    p_SMSWTD_C p_SMSWTD;
    
    p_SMSWTD_1_C p_SMSWTD_1;
//#]

    Actionable_Information_Generator itsActionable_Information_Generator;		//## classInstance itsActionable_Information_Generator
    
    Cultural_and_Geological_Differences* itsCultural_and_Geological_Differences;		//## link itsCultural_and_Geological_Differences
    
    Data_Storage itsData_Storage;		//## classInstance itsData_Storage
    
    Information_Channels* itsInformation_Channels;		//## link itsInformation_Channels
    
    Prediction_Module itsPrediction_Module;		//## classInstance itsPrediction_Module
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    Standards_and_Regulations* itsStandards_and_Regulations;		//## link itsStandards_and_Regulations
    
    Storm_Sensors* itsStorm_Sensors;		//## link itsStorm_Sensors
    
    System_Output itsSystem_Output;		//## classInstance itsSystem_Output
    
    Tsunami_Sensors* itsTsunami_Sensors;		//## link itsTsunami_Sensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences);
    
    //## auto_generated
    void _setItsCultural_and_Geological_Differences(Cultural_and_Geological_Differences* const p_Cultural_and_Geological_Differences);
    
    //## auto_generated
    void _clearItsCultural_and_Geological_Differences(void);
    
    //## auto_generated
    void __setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    void _setItsInformation_Channels(Information_Channels* const p_Information_Channels);
    
    //## auto_generated
    void _clearItsInformation_Channels(void);
    
    //## auto_generated
    void __setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* const p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders(void);
    
    //## auto_generated
    void __setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations);
    
    //## auto_generated
    void _setItsStandards_and_Regulations(Standards_and_Regulations* const p_Standards_and_Regulations);
    
    //## auto_generated
    void _clearItsStandards_and_Regulations(void);
    
    //## auto_generated
    void __setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors);
    
    //## auto_generated
    void _setItsStorm_Sensors(Storm_Sensors* const p_Storm_Sensors);
    
    //## auto_generated
    void _clearItsStorm_Sensors(void);
    
    //## auto_generated
    void __setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors);
    
    //## auto_generated
    void _setItsTsunami_Sensors(Tsunami_Sensors* const p_Tsunami_Sensors);
    
    //## auto_generated
    void _clearItsTsunami_Sensors(void);
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
