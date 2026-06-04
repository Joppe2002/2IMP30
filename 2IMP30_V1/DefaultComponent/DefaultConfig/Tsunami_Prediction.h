/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Tsunami_Prediction
//!	Generated Date	: Mon, 1, Jun 2026  
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
//## class Tsunami_Prediction
#include "int_flowDirection_ProxyFlowPropertyInterface.h"
//## class Tsunami_Prediction
#include "int_pressure_ProxyFlowPropertyInterface.h"
//## class Tsunami_Prediction
#include "int_tectonicPlate_location_ProxyFlowPropertyInterface.h"
//## class Tsunami_Prediction
#include "int_vibrations_ProxyFlowPropertyInterface.h"
//## link itsData_Storage
class Data_Storage;

//## package Architecture

//## class Tsunami_Prediction
class Tsunami_Prediction : public int_flowDirection_ProxyFlowPropertyInterface, public int_pressure_ProxyFlowPropertyInterface, public int_tectonicPlate_location_ProxyFlowPropertyInterface, public int_vibrations_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package Architecture
    class p_Tsunami_Prediction_C : public int_flowDirection_ProxyFlowPropertyInterface, public int_pressure_ProxyFlowPropertyInterface, public int_tectonicPlate_location_ProxyFlowPropertyInterface, public int_vibrations_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Tsunami_Prediction_C(void);
        
        //## auto_generated
        virtual ~p_Tsunami_Prediction_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTsunami_Prediction(Tsunami_Prediction* part);
        
        //## auto_generated
        int_flowDirection_ProxyFlowPropertyInterface* getItsInt_flowDirection_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_pressure_ProxyFlowPropertyInterface* getItsInt_pressure_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_tectonicPlate_location_ProxyFlowPropertyInterface* getItsInt_tectonicPlate_location_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_vibrations_ProxyFlowPropertyInterface* getItsInt_vibrations_ProxyFlowPropertyInterface(void);
        
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
    friend class OMAnimatedTsunami_Prediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Tsunami_Prediction(void);
    
    //## auto_generated
    ~Tsunami_Prediction(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setFlowDirection(int p_flowDirection);
    
    void setPressure(int p_pressure);
    
    void setTectonicPlate_location(int p_tectonicPlate_location);
    
    void setVibrations(int p_vibrations);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_Tsunami_Prediction_C* getP_Tsunami_Prediction(void) const;
    
    //## auto_generated
    p_Tsunami_Prediction_C* get_p_Tsunami_Prediction(void) const;
    
    //## auto_generated
    int const getTest(void) const;
    
    //## auto_generated
    void setTest(const int p_Test);
    
    //## auto_generated
    int const getFlowDirection(void) const;
    
    //## auto_generated
    int const getPressure(void) const;
    
    //## auto_generated
    int const getTectonicPlate_location(void) const;
    
    //## auto_generated
    int const getVibrations(void) const;
    
    //## auto_generated
    const Data_Storage* getItsData_Storage(void) const;
    
    //## auto_generated
    void setItsData_Storage(Data_Storage* const p_Data_Storage);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int Test;		//## attribute Test
    
    int flowDirection;		//## attribute flowDirection
    
    int pressure;		//## attribute pressure
    
    int tectonicPlate_location;		//## attribute tectonicPlate_location
    
    int vibrations;		//## attribute vibrations
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Tsunami_Prediction_C p_Tsunami_Prediction;
//#]

    Data_Storage* itsData_Storage;		//## link itsData_Storage
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _setItsData_Storage(Data_Storage* const p_Data_Storage);
    
    //## auto_generated
    void _clearItsData_Storage(void);

protected :

    //## auto_generated
    void OMCreateInstances(void);
    
    //## auto_generated
    void OMConnectRelations(void);
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
