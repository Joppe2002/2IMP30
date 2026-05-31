/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government_Networks
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.h
*********************************************************************/

#ifndef Government_Networks_H
#define Government_Networks_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class Government_Networks
#include "Information_Channels.h"
//## package SystemContext

//## class Government_Networks
class Government_Networks : public Information_Channels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernment_Networks;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Government_Networks(void);
    
    //## auto_generated
    ~Government_Networks(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernment_Networks : public OMAnimatedInformation_Channels {
    DECLARE_META(Government_Networks, OMAnimatedGovernment_Networks)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government_Networks.h
*********************************************************************/
