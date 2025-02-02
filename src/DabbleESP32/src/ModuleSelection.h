#define ANY_MODULE_DEFINED \
(defined(INCLUDE_DABBLEINPUTS_MODULE) || \
defined(INCLUDE_GAMEPAD_MODULE) || \
defined(INCLUDE_INTERNET_MODULE) || \
defined(INCLUDE_MOTORCONTROL_MODULE) || \
defined (INCLUDE_PINMONITOR_MODULE) || \
defined(INCLUDE_TERMINAL_MODULE) ||  \
defined(INCLUDE_CAMERA_MODULE) ||  \
defined(INCLUDE_COLORDETECTOR_MODULE) || \
defined(INCLUDE_LEDCONTROL_MODULE) ||  \
defined(INCLUDE_DATALOGGER_MODULE) ||  \
defined(INCLUDE_SMS_MODULE) || \
defined(INCLUDE_NOTIFICATION_MODULE) || \
defined(INCLUDE_MUSIC_MODULE) || \
defined(INCLUDE_HOMEAUTOMATION_MODULE) || \
defined(INCLUDE_ROBOTICARM_MODULE) || \
defined(INCLUDE_SENSOR_MODULE))


#if !defined(FROM_DABBLE_LIBRARY) 
	#if (defined(INCLUDE_ALL_MODULES) && defined(CUSTOM_SETTINGS)) || (!defined(CUSTOM_SETTINGS) && !ANY_MODULE_DEFINED)
		#include "IncludedModulesDefines.h"
		#define ALL_MODULES_INCLUDED
	#endif
#endif 

#if (ANY_MODULE_DEFINED && defined(CUSTOM_SETTINGS)) || defined(ALL_MODULES_INCLUDED)
	#define EXTERN
#else
    #define EXTERN extern
#endif