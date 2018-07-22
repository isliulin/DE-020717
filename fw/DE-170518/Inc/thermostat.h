/**
 ******************************************************************************
 * File Name          : thermostat.h
 * Date               : 22/02/2018 07:03:00
 * Description        : temperature controller header
 ******************************************************************************
 */
 
 
 /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef TEMP_CTRL_H
#define TEMP_CTRL_H     			211		// version


/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx.h"


/* Exported Type  ------------------------------------------------------------*/
typedef struct
{ 	
	uint8_t valve;						// pipe valve state
	uint8_t fan_mode;					// fan control: auto/low/medium/high
	uint8_t fan_speed;					// fan speed: off/low/med/high
	uint8_t ctrl_mode;					// controler mode: off/cool/heat/error
	uint16_t actual_temperature;		// measured temperature	
	uint16_t set_temperature;			// set point temperature
	uint8_t	set_temperature_diff;		// set point tempearture difference
	uint8_t	fan_low_speed_band;			// middle to low fan speed change in auto mode 
	uint8_t	fan_middle_speed_band;		// high to middle fan speed change in auto mode
	uint8_t fan_speed_diff;				// fan speed change value differenc in auto mode
	
}THERMOSTAT_TypeDef;

extern THERMOSTAT_TypeDef Thermostat_1;


/* Exported Define  ----------------------------------------------------------*/
#define THERMOSTAT_CONTROL_MODE_OFF			        0
#define THERMOSTAT_CONTROL_MODE_COOLING		        1
#define THERMOSTAT_CONTROL_MODE_HEATING		        2
#define THERMOSTAT_CONTROL_MODE_COOL_ONE_CYCLE      3
#define THERMOSTAT_CONTROL_MODE_HEAT_ONE_CYCLE      4
#define FANCOIL_FAN_RPM_ERROR                       5
#define FANCOIL_PIPE_TEMPERATURE_LOW_ERROR          6
#define FANCOIL_PIPE_TEMPERATURE_HIGH_ERROR         7
#define THERMOSTAT_MAX_TEMPERATURE			        320		// 32,0°C max. thermostat setup temperature
#define THERMOSTAT_MIN_TEMPERATURE			        140		// 14,0°C min. thermostat setup temperature
#define THERMOSTAT_POWER_ON_DELAY_TIME              2345    // 2,5 sec. power on startup time


/* Exported Variable   -------------------------------------------------------*/
extern __IO uint32_t thermostat_timer;
extern __IO uint32_t thermostat_fan_timer;
extern __IO uint32_t thermostat_valve_timer;
extern uint32_t thermostat_flags;


/* Exported Macro ------------------------------------------------------------*/
#define THERMOSTAT_StartTimer(TIME)			(thermostat_timer = TIME)
#define THERMOSTAT_StopTimer()				(thermostat_timer = 0)
#define IsTHERMOSTAT_TimerExpired()			(thermostat_timer == 0)

#define THERMOSTAT_StartFanTimer(TIME)		(thermostat_fan_timer = TIME)
#define THERMOSTAT_StopFanTimer()			(thermostat_fan_timer = 0)
#define IsTHERMOSTAT_FanTimerExpired()		(thermostat_fan_timer == 0)

#define THERMOSTAT_StartValveTimer(TIME)	(thermostat_valve_timer = TIME)
#define THERMOSTAT_StopValveTimer()			(thermostat_valve_timer = 0)
#define IsTHERMOSTAT_ValveTimerExpired()	(thermostat_valve_timer == 0)

#define THERMOSTAT_ActivSet()               (thermostat_flags |= (1 << 0))
#define THERMOSTAT_ActivReset()             (thermostat_flags &= (~ (1 << 0)))
#define IsTHERMOSTAT_Activ()                ((thermostat_flags & (1 << 0)) != 0)

#define AMBIENT_NTC_SensorConnected()       (thermostat_flags |= (1 << 1))
#define AMBIENT_NTC_SensorNotConnected()    (thermostat_flags &= (~ (1 << 1)))
#define IsAMBIENT_NTC_SensorConnected()     ((thermostat_flags & (1 << 1)) != 0)

#define FANCOIL_NTC_SensorConnected()       (thermostat_flags |= (1 << 2))
#define FANCOIL_NTC_SensorNotConnected()    (thermostat_flags &= (~ (1 << 2)))
#define IsFANCOIL_NTC_SensorConnected()     ((thermostat_flags & (1 << 2)) != 0)

#define FANCOIL_TriacTypeSet()              (thermostat_flags |= (1 << 3))
#define FANCOIL_TriacTypeReset()            (thermostat_flags &= (~ (1 << 3)))
#define IsFANCOIL_TriacTypeActiv()          ((thermostat_flags & (1 << 3)) != 0)

#define FANCOIL_RelayTypeSet()              (thermostat_flags |= (1 << 4))
#define FANCOIL_RelayTypeReset()            (thermostat_flags &= (~ (1 << 4)))
#define IsFANCOIL_RelayTypeActiv()          ((thermostat_flags & (1 << 4)) != 0)


/* Exported Function  ------------------------------------------------------- */
void THERMOSTAT_Init(void);
void THERMOSTAT_Service(void);


#endif
/******************************   END OF FILE  ********************************/
