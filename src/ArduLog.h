/*
    Arduino logging macros

    by Eliza Weisman
    eliza@elizas.website

 */

#ifndef ArduLog_h
#define ArduLog_h

#if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#ifdef SERIAL_DEBUG
    #define DEBUG(msg)                                 \
        do {                                           \
            Serial.print(F(__FILE__));                 \
            Serial.print(F(":"));                      \
            Serial.print(String(__LINE__));             \
            Serial.print(F(":"));                      \
            Serial.print(__PRETTY_FUNCTION__);      \
            Serial.print(F(": "));                     \
            Serial.print(F(msg));                      \
            }  while (0)
    #define DEBUGLN(msg)                               \
        do {                                           \
            Serial.print(F(__FILE__));                 \
            Serial.print(F(":"));                      \
            Serial.print(String(__LINE__));             \
            Serial.print(F(":"));                      \
            Serial.print(__PRETTY_FUNCTION__);      \
            Serial.print(F(": "));                     \
            Serial.println(F(msg));                      \
            }  while (0)
#else
    #define DEBUG(msg) do { } while (0)
    #define DEBUGLN(msg) do { } while (0)
#endif

#endif
