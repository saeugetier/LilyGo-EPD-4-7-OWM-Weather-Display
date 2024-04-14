#ifndef __EVENT_RECORD_H__
#define __EVENT_RECORD_H__

#include <Arduino.h>

typedef struct
{
    String StartDate;
    String EndDate;
    String Name;
    bool empty;
    /* data */
} Event_record_type;
 
 #endif // __EVENT_RECORD_H__