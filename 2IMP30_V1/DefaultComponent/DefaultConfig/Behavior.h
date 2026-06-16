/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: neppo
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Behavior
//!	Generated Date	: Tue, 16, Jun 2026  
	File Path	: DefaultComponent\DefaultConfig\Behavior.h
*********************************************************************/

#ifndef Behavior_H
#define Behavior_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## package Behavior


//## type precipitation_type_enum
enum precipitation_type_enum {
    nothing,
    rain,
    snow,
    hail
};

//## type warning_message_enum
enum warning_message_enum {
    no_warning, // threat passed, resume normal activity
    stay_alert, // monitor official updates
    secure_and_prepare, // secure property, stock supplies
    prepare_to_evacuate, // ready to leave, await instruction
    take_shelter_now, // storm, move indoors, interior room
    leave_the_coast, // tsunami advisory, off beaches, out of the water
    evacuate_to_high_ground, // tsunami warning, move inland and uphill 
    pray_to_god, // the world is ending
    output_broken
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Behavior.h
*********************************************************************/
