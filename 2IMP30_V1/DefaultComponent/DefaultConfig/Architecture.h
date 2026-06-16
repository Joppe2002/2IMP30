/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/

#ifndef Architecture_H
#define Architecture_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## classInstance itsActionable_Information_Generator
class Actionable_Information_Generator;

//## classInstance itsData_Storage
class Data_Storage;

//## classInstance itsGovernment_Networks
class Government_Networks;

//## classInstance itsMobile_Apps
class Mobile_Apps;

//## classInstance itsNews_Outlets
class News_Outlets;

//## auto_generated
class Prediction_Module;

//## classInstance itsSMSWTD
class SMSWTD;

//## classInstance itsSMS_Signaling
class SMS_Signaling;

//## classInstance itsStorm_Prediction
class Storm_Prediction;

//## classInstance itsTsunami_Prediction
class Tsunami_Prediction;

//## classInstance itsWheather_Prediction
class Wheather_Prediction;

//## package Architecture


//## classInstance itsActionable_Information_Generator
extern Actionable_Information_Generator itsActionable_Information_Generator;

//## classInstance itsData_Storage
extern Data_Storage itsData_Storage;

//## classInstance itsSMSWTD
extern SMSWTD itsSMSWTD;

//## classInstance itsStorm_Prediction
extern Storm_Prediction itsStorm_Prediction;

//## classInstance itsTsunami_Prediction
extern Tsunami_Prediction itsTsunami_Prediction;

//## classInstance itsWheather_Prediction
extern Wheather_Prediction itsWheather_Prediction;

//## auto_generated
void Architecture_initRelations(void);

//## auto_generated
void Architecture_OMCreateInstances(void);

//## auto_generated
void Architecture_OMConnectRelations(void);

//## auto_generated
bool Architecture_startBehavior(void);

//#[ ignore
class Architecture_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Architecture_OMInitializer(void);
    
    //## auto_generated
    ~Architecture_OMInitializer(void);
};
//#]

//## event evPredictionReady()
class evPredictionReady : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPredictionReady;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPredictionReady(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPredictionReady : virtual public AOMEvent {
    DECLARE_META_EVENT(evPredictionReady)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPredictionReady_Architecture_id;
//#]

//## event evMediumStorm()
class evMediumStorm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMediumStorm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMediumStorm(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMediumStorm : virtual public AOMEvent {
    DECLARE_META_EVENT(evMediumStorm)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evMediumStorm_Architecture_id;
//#]

//## event evHighStorm()
class evHighStorm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevHighStorm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evHighStorm(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevHighStorm : virtual public AOMEvent {
    DECLARE_META_EVENT(evHighStorm)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evHighStorm_Architecture_id;
//#]

//## event evPredictionReadyTs()
class evPredictionReadyTs : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPredictionReadyTs;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPredictionReadyTs(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPredictionReadyTs : virtual public AOMEvent {
    DECLARE_META_EVENT(evPredictionReadyTs)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evPredictionReadyTs_Architecture_id;
//#]

//## event evHighTsunami()
class evHighTsunami : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevHighTsunami;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evHighTsunami(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevHighTsunami : virtual public AOMEvent {
    DECLARE_META_EVENT(evHighTsunami)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evHighTsunami_Architecture_id;
//#]

//## event evMediumTsunami()
class evMediumTsunami : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMediumTsunami;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMediumTsunami(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMediumTsunami : virtual public AOMEvent {
    DECLARE_META_EVENT(evMediumTsunami)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evMediumTsunami_Architecture_id;
//#]

//## event evErrorOccuredSt()
class evErrorOccuredSt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorOccuredSt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorOccuredSt(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorOccuredSt : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorOccuredSt)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorOccuredSt_Architecture_id;
//#]

//## event evErrorHandledSt()
class evErrorHandledSt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorHandledSt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorHandledSt(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorHandledSt : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorHandledSt)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorHandledSt_Architecture_id;
//#]

//## event evErrorOccuredTs()
class evErrorOccuredTs : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorOccuredTs;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorOccuredTs(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorOccuredTs : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorOccuredTs)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorOccuredTs_Architecture_id;
//#]

//## event evErrorHandledTs()
class evErrorHandledTs : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorHandledTs;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorHandledTs(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorHandledTs : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorHandledTs)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorHandledTs_Architecture_id;
//#]

//## event evRepairTsPred()
class evRepairTsPred : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRepairTsPred;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRepairTsPred(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRepairTsPred : virtual public AOMEvent {
    DECLARE_META_EVENT(evRepairTsPred)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evRepairTsPred_Architecture_id;
//#]

//## event evRepairStPred()
class evRepairStPred : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRepairStPred;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRepairStPred(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRepairStPred : virtual public AOMEvent {
    DECLARE_META_EVENT(evRepairStPred)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evRepairStPred_Architecture_id;
//#]

//## event evErrorOccuredDS()
class evErrorOccuredDS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorOccuredDS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorOccuredDS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorOccuredDS : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorOccuredDS)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorOccuredDS_Architecture_id;
//#]

//## event evErrorHandledDS()
class evErrorHandledDS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorHandledDS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorHandledDS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorHandledDS : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorHandledDS)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorHandledDS_Architecture_id;
//#]

//## event evRepairDS()
class evRepairDS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRepairDS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRepairDS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRepairDS : virtual public AOMEvent {
    DECLARE_META_EVENT(evRepairDS)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evRepairDS_Architecture_id;
//#]

//## event evLowRiskTs()
class evLowRiskTs : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLowRiskTs;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLowRiskTs(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLowRiskTs : virtual public AOMEvent {
    DECLARE_META_EVENT(evLowRiskTs)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evLowRiskTs_Architecture_id;
//#]

//## event evLowRiskSt()
class evLowRiskSt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLowRiskSt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLowRiskSt(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLowRiskSt : virtual public AOMEvent {
    DECLARE_META_EVENT(evLowRiskSt)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evLowRiskSt_Architecture_id;
//#]

//## event evErrorOccuredSO()
class evErrorOccuredSO : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorOccuredSO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorOccuredSO(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorOccuredSO : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorOccuredSO)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorOccuredSO_Architecture_id;
//#]

//## event evErrorHandledSO()
class evErrorHandledSO : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevErrorHandledSO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evErrorHandledSO(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevErrorHandledSO : virtual public AOMEvent {
    DECLARE_META_EVENT(evErrorHandledSO)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evErrorHandledSO_Architecture_id;
//#]

//## event evRepairSO()
class evRepairSO : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRepairSO;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRepairSO(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRepairSO : virtual public AOMEvent {
    DECLARE_META_EVENT(evRepairSO)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evRepairSO_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/
