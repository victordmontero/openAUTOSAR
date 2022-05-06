/********************************************************************
 * (C) DaVinci Engineering GmbH 2022
 ********************************************************************/

#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#include "Rte.h"

typedef void * Rte_Instance;

typedef boolean Boolean;

#define _DEFINED_TYPEDEF_FOR_Boolean_ 

typedef uint8 DigitalLevel;
#ifndef Low
#define Low ((DigitalLevel)0)
#endif /*Low*/
#ifndef High
#define High ((DigitalLevel)1)
#endif /*High*/
#define DigitalLevel_LowerLimit 0
#define DigitalLevel_UpperLimit 1

#define _DEFINED_TYPEDEF_FOR_DigitalLevel_ 

typedef float Float;

#define _DEFINED_TYPEDEF_FOR_Float_ 

typedef sint32 Hertz;
#define Hertz_LowerLimit -2147483647
#define Hertz_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_Hertz_ 

typedef uint16 IoHwAb_SignalType;
#define IoHwAb_SignalType_LowerLimit 0
#define IoHwAb_SignalType_UpperLimit 65535

#define _DEFINED_TYPEDEF_FOR_IoHwAb_SignalType_ 

typedef sint32 MilliAmpere;
#define MilliAmpere_LowerLimit -2147483647
#define MilliAmpere_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_MilliAmpere_ 

typedef sint32 MilliOhm;
#define MilliOhm_LowerLimit -2147483647
#define MilliOhm_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_MilliOhm_ 

typedef sint32 MilliVolt;
#define MilliVolt_LowerLimit -2147483647
#define MilliVolt_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_MilliVolt_ 

typedef sint32 Percent;
#define Percent_LowerLimit -2147483647
#define Percent_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_Percent_ 

typedef sint16 SInt16;
#define SInt16_LowerLimit -32768
#define SInt16_UpperLimit 32767

#define _DEFINED_TYPEDEF_FOR_SInt16_ 

typedef sint32 SInt32;
#define SInt32_LowerLimit -2147483648
#define SInt32_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_SInt32_ 

typedef sint8 SInt8;
#define SInt8_LowerLimit -128
#define SInt8_UpperLimit 127

#define _DEFINED_TYPEDEF_FOR_SInt8_ 

typedef uint8 SignalQuality;
#ifndef SignalQuality_InitialValue
#define SignalQuality_InitialValue ((SignalQuality)0)
#endif /*SignalQuality_InitialValue*/
#ifndef SignalQuality_Error
#define SignalQuality_Error ((SignalQuality)1)
#endif /*SignalQuality_Error*/
#ifndef SignalQuality_Bad
#define SignalQuality_Bad ((SignalQuality)2)
#endif /*SignalQuality_Bad*/
#ifndef SignalQuality_Good
#define SignalQuality_Good ((SignalQuality)3)
#endif /*SignalQuality_Good*/
#define SignalQuality_LowerLimit 0
#define SignalQuality_UpperLimit 3

#define _DEFINED_TYPEDEF_FOR_SignalQuality_ 

typedef uint16 UInt16;
#define UInt16_LowerLimit 0
#define UInt16_UpperLimit 65535

#define _DEFINED_TYPEDEF_FOR_UInt16_ 

typedef uint32 UInt32;
#define UInt32_LowerLimit 0
#define UInt32_UpperLimit 4294967295

#define _DEFINED_TYPEDEF_FOR_UInt32_ 

typedef uint8 UInt8;
#define UInt8_LowerLimit 0
#define UInt8_UpperLimit 255

#define _DEFINED_TYPEDEF_FOR_UInt8_ 

typedef struct {
} Rte_PDS_Blinker_DigitalOutput_P;
typedef struct {
} Rte_PDS_Blinker_DigitalOutput_R;

typedef struct {
} Rte_PDS_EcuAbstraction_DigitalOutput_P;
typedef struct {
} Rte_PDS_EcuAbstraction_DigitalOutput_R;

#endif
