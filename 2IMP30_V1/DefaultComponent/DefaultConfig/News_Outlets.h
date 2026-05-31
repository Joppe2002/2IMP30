/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: News_Outlets
//!	Generated Date	: Sun, 31, May 2026  
	File Path	: DefaultComponent\DefaultConfig\News_Outlets.h
*********************************************************************/

#ifndef News_Outlets_H
#define News_Outlets_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## class News_Outlets
#include "Information_Channels.h"
//## package SystemContext

//## class News_Outlets
class News_Outlets : public Information_Channels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNews_Outlets;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    News_Outlets(void);
    
    //## auto_generated
    ~News_Outlets(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNews_Outlets : public OMAnimatedInformation_Channels {
    DECLARE_META(News_Outlets, OMAnimatedNews_Outlets)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\News_Outlets.h
*********************************************************************/
