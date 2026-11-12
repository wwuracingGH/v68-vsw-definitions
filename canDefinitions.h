#pragma once
#include <stdint.h>

/*
 * DEFINITIONS for motor controller usage as defined in this pdf:
 * https://www.cascadiamotion.com/_files/ugd/b5e2cb_e731a297509a4b2786cea7ef36199b7f.pdf
 * 
 * also for the rest of the car now.
 */ 

#define MC_CANSTRUCT typedef struct __attribute__((packed, scalar_storage_order("little-endian")))
#define VCU_CANSTRUCT MC_CANSTRUCT
#define DASH_CANSTRUCT MC_CANSTRUCT
#define BMS_CANSTRUCT MC_CANSTRUCT
#define DL_CANSTRUCT MC_CANSTRUCT 

typedef int16_t     MC_Temperature;
typedef int16_t     MC_LowVoltage;
typedef int16_t     MC_Torque;
typedef int16_t     MC_HighVoltage;
typedef int16_t     MC_Current;
typedef int16_t     MC_Angle;
typedef int16_t     MC_AngularVelocity;
typedef uint8_t     MC_Boolean;
typedef int16_t     MC_Frequency;
typedef int16_t     MC_Time16;
typedef int32_t     MC_Time32;
typedef int16_t     MC_Flux;
typedef uint16_t    MC_ProportionalGain;
typedef uint16_t    MC_IntegralGain;
typedef uint16_t    MC_DerivativeGain;
typedef uint16_t    MC_LowPassFilterGain;
typedef uint16_t    MC_Pressure;
typedef int16_t     MC_Int;
typedef uint16_t    MC_UnsignedInt;
typedef uint8_t     MC_Byte;

#define DL_CANID_WHEELSPEED                0x001
#define DL_CANID_ACCEL                     0x002

#define DL_CANID_DASH_COMMAND              0x010
#define DL_CANID_DASH_BATTMODE             0x011

#define VCU_CANID_APPS_RAW                 0x101
#define VCU_CANID_BPS_RAW              	   0x102
#define VCU_CANID_CTRL_VEC                 0x103
#define VCU_CANID_VCU_STATE            	   0x104
#define VCU_CANID_PARAM_REVEAL             0x105
#define VCU_CANID_PARAM_CHANGE             0x106
#define VCU_CANID_PARAM_REQUEST            0x107

#define MC_CANID_TEMPERATURE1              0x0A0
#define MC_CANID_TEMPERATURE2              0x0A1
#define MC_CANID_TEMPERATURE3              0x0A2
#define MC_CANID_ANALOGINVOLTAGES          0x0A3
#define MC_CANID_DIGITALINPUT              0x0A4
#define MC_CANID_MOTORPOSITION             0x0A5
#define MC_CANID_CURRENTINFO               0x0A6
#define MC_CANID_VOLTAGEINFO               0x0A7
#define MC_CANID_FLUXINFO                  0x0A8
#define MC_CANID_INTERNALVOLTAGES          0x0A9          
#define MC_CANID_INTERNALSTATES            0x0AA
#define MC_CANID_FAULTCODES                0x0AB
#define MC_CANID_TORQUETIMER               0x0AC
#define MC_CANID_MIANDFLUXWEAKENINGINFO    0x0AD
#define MC_CANID_FIRMWAREINFO              0x0AE
#define MC_CANID_DIAGNOSTIC                0x0AF

#define MC_CANID_HIGHSPEEDMESSAGE          0x0B0

#define MC_CANID_COMMAND                   0x0C0
#define MC_CANID_PARAMCOM                  0x0C1
#define MC_CANID_PARAMREQ                  0x0C2



#define EightByteEndianSwap(data)   \
( (((data) >> 56) & 0x00000000000000FF) | (((data) >> 40) & 0x000000000000FF00) | \
  (((data) >> 24) & 0x0000000000FF0000) | (((data) >>  8) & 0x00000000FF000000) | \
  (((data) <<  8) & 0x000000FF00000000) | (((data) << 24) & 0x0000FF0000000000) | \
  (((data) << 40) & 0x00FF000000000000) | (((data) << 56) & 0xFF00000000000000) ) 

const char* MC_Post_Errors[32] = {
    //0
    "Hardware Gate/Desaturation Fault",
    "Hardware Overcurrent Fault",
    "Accelerator Shorted",
    "Accelerator Open",
    "Current Sensor Low",
    "Current Sensor High",
    "Module Temperature Low",
    "Module Temperature High",
    //1
    "Control PCB Temperature Low",
    "Control PCB Temperature High",
    "GateDrive PCB Temperature Low",
    "GateDrive PCB Temperature High",
    "5V Sense Voltage Low",
    "5V Sense Voltage High",
    "12V Sense Voltage Low",
    "12V Sense Voltage High",
    //2
    "2.5V Sense Voltage Low",
    "2.5V Sense Voltage High",
    "1.5V Sense Voltage Low",
    "1.5V Sense Voltage High",
    "DC Bus Voltage High",
    "DC Bus Voltage Low",
    "Pre-Charge Timeout",
    "Pre-Charge Voltage Failure",
    //3
    "EEPROM Checksum Invalid",
    "EEPROM Data Out Of Range",
    "EEPROM Update Required",
    "Hardware DC Bus Over-Voltage during Initalization",
    "",
    "",
    "Brake Shorted",
    "Brake Open"
};

const char* MC_Run_Errors[32] = {
    //4
    "Motor Overspeed Fault",
    "Over-Current Fault",
    "Over-Voltage Fault",
    "Inverter Over-Temperature Fault",
    "Accelerator Input Shorted Fault",
    "Accelerator Input Open Fault",
    "Direction Command Fault",
    "Inverter Response Timeout Fault",
    //5
    "Hardware Gate Desaturation Fault",
    "Hardware Over-Current Fault",
    "Under-Voltage Fault",
    "CAN Command Message Lost Fault",
    "Motor Over-Temperature Fault",
    "",
    "",
    "",
    //6
    "Brake Input Shorted Fault",
    "Brake Input Open Fault",
    "Module A Over-Temperature Fault",
    "Module B Over-Temperature Fault",
    "Module C Over-Temperature Fault",
    "PCB Over-Temperature Fault",
    "Gate Drive Board 1 Over-Temperature Fault",
    "Gate Drive Board 2 Over-Temperature Fault",
    //7
    "Gate Drive Board 3 Over-temperature Fault",
    "Current Sensor Fault",
    "",
    "",
    "",
    "",
    "Resolver Not Connected",
    ""
};

MC_CANSTRUCT  {
    MC_Temperature      moduleATemp;
    MC_Temperature      moduleBTemp;
    MC_Temperature      moduleCTemp;
    MC_Temperature      gateDriverBoardTemp;
} MC_Temperature1;

MC_CANSTRUCT  {
    MC_Temperature      controlBoardTemp;
    MC_Temperature      rtdInput1Temp;
    MC_Temperature      rtdInput2Temp;
    MC_Temperature      rtdInput3Temp;
} MC_Temperature2;

MC_CANSTRUCT  {
    MC_Temperature      rtdInput4Temp;
    MC_Temperature      rtdInput5Temp;
    MC_Temperature      motorTemp;
    MC_Torque           torqueShudder;
} MC_Temperature3;

MC_CANSTRUCT {
    MC_LowVoltage       AnalogIn1;
    MC_LowVoltage       AnalogIn2;
    MC_LowVoltage       AnalogIn3;
    MC_LowVoltage       AnalogIn4;
} MC_AnalogInVoltages;

MC_CANSTRUCT {
    MC_Boolean          digitalInput1;
    MC_Boolean          digitalInput2;
    MC_Boolean          digitalInput3;
    MC_Boolean          digitalInput4;
    MC_Boolean          digitalInput5;
    MC_Boolean          digitalInput6;
    MC_Boolean          digitalInput7;
    MC_Boolean          digitalInput8;
} MC_DigitalInput;

MC_CANSTRUCT {
    MC_Angle            motorAngle;
    MC_AngularVelocity  motorSpeed;
    MC_Frequency        electricalOutputFrequency;
    MC_Angle            deltaResolverFiltered;
} MC_MotorPosition; 

MC_CANSTRUCT {
    MC_Current          phaseACurrent;
    MC_Current          phaseBCurrent;
    MC_Current          phaseCCurrent;
    MC_Current          dcBusCurrent;
} MC_CurrentInfo;

MC_CANSTRUCT {
    MC_Current          dcBusVoltage;
    MC_Current          outputVoltage;
    MC_Current          VABVoltage;
    MC_Current          VBCVoltage;
} MC_VoltageInfo;   

MC_CANSTRUCT {
    MC_Flux             fluxCommand;
    MC_Flux             fluxFeedback;
    MC_Current          ldFeedback;
    MC_Current          lqFeedback;
} MC_FluxInfo;

MC_CANSTRUCT  {
    MC_LowVoltage       ref1Point5V;
    MC_LowVoltage       ref2Point5V;
    MC_LowVoltage       ref5V;
    MC_LowVoltage       ref12V;
} MC_InternalVoltages;

MC_CANSTRUCT {
    MC_Byte             vsmState;
    MC_Byte             _RESERVED1;
    MC_Byte             inverterState;
    MC_Byte             relayState;
    uint8_t             inverterRunMode             : 1;
    uint8_t             selfSensingAssistEnable     : 1;
    uint8_t             _RESERVED2                  : 3;
    uint8_t             inverterActiveDischargeMode : 3;
    MC_Boolean          inverterCommandMode         : 4;
    uint8_t             rollingCounterValue         : 4;
    MC_UnsignedInt      whateverElse;
} MC_InternalStates;

MC_CANSTRUCT {
    uint32_t            postErrors;
    uint32_t            runtimeErrors;
} MC_FaultCodes;

MC_CANSTRUCT {
    MC_Torque           commandedTorque;
    MC_Torque           torqueFeedback;
    MC_Time32           powerOnTimer;
} MC_TorqueTimer;

MC_CANSTRUCT {
    MC_UnsignedInt      modulationIndex;
    MC_Current          fluxWeakening;
    MC_Current          ldCommand;
    MC_Current          lqCommand;
} MC_MIandFluxWeakeningInfo;

MC_CANSTRUCT {
    MC_UnsignedInt      version;
    MC_UnsignedInt      softwareVersion;
    MC_UnsignedInt      dateCodeMMDD;
    MC_UnsignedInt      dateCodeYYYY;
} MC_FirmwareInfo; 

MC_CANSTRUCT {
    uint32_t a, b;
} MC_Diagnostic; 

MC_CANSTRUCT {
    MC_Torque           torqueCommand;
    MC_Torque           torqueFeedback;
    MC_AngularVelocity  motorSpeed;
    MC_HighVoltage      dcBusVoltage;
} MC_HighSpeed;

MC_CANSTRUCT {
    MC_Torque           torqueCommand;
    MC_AngularVelocity  speedCommand;
    MC_Boolean          directionCommand;
    MC_Byte             inverterEnable : 1;
    MC_Byte             inverterDischarge : 1;
    MC_Byte             speedEnableMode   : 1;
    MC_Byte             _RESERVED : 5;
    MC_Torque           torqueLimit;
} MC_Command;

MC_CANSTRUCT {
    uint16_t parameterAdress;
    uint8_t  readWrite;
    uint8_t _RESERVED;
    uint16_t LowData;
    uint16_t HighData;
} MC_ParameterCommand;

DL_CANSTRUCT {
    uint16_t wheelSpeed_FL;
    uint16_t wheelSpeed_FR;
    uint16_t wheelSpeed_BL;
    uint16_t wheelSpeed_BR;
} DL_WheelSpeed;

DL_CANSTRUCT {
    uint16_t carAccel_X;
    uint16_t carAccel_Y;
    uint16_t yawRate;
    /* steering angle ? */
} DL_CarAcceleration;

VCU_CANSTRUCT {
	uint16_t apps1;
	uint16_t apps2;
	uint16_t apps3;
	uint16_t apps4;
} VCU_AppsRaw;

VCU_CANSTRUCT {
	uint16_t fbps;
	uint16_t rbps;
} VCU_BpsRaw;

VCU_CANSTRUCT {
    uint8_t state;
	uint8_t faultCounter    : 7;
    uint8_t pLatch          : 1;
    uint16_t lastValidTorqueReq;
} VCU_VCUState;

VCU_CANSTRUCT {
	uint32_t setValue;
	uint16_t id;
} VCU_ParamReveal;

VCU_CANSTRUCT {
	uint32_t setValue;
	uint16_t id : 15;
	uint16_t write : 1;
} VCU_ParamSet;

VCU_CANSTRUCT {
	uint16_t id;
} VCU_ParamReq;

/* 4 bytes if normal, 8 bytes if lapped */
DL_CANSTRUCT {
    uint16_t current_time; /* current time, in 100ths of a second */
    int16_t pred_delta; /* predicted delta, in 100ths of a second */
    uint16_t best_lap_time; /* best lap time, in 100ths of a second - for delta calculation */
    uint16_t last_lap_time; /* last lap time, in 100ths of a second - for delta calculation */
} DASH_TimeCommand;

VCU_CANSTRUCT {
    uint8_t battery_percentage; /* battery percentage */
    uint8_t mode; /* boolean; do we switch mode this frame */
} DASH_BattCommand;

BMS_CANSTRUCT {
    uint16_t discharge_limit;
    uint16_t charge_limit;
    uint32_t _RESERVED;
} BMS_Limits;

BMS_CANSTRUCT {
    uint16_t relayState;
    uint16_t failsafeState;
    uint16_t DCT_status1;
    uint16_t DCT_status2;
} BMS_FaultsAndStatus;

BMS_CANSTRUCT {
    uint16_t pack_voltage;
    uint16_t pack_current;
    uint16_t pack_open_voltage;
    uint16_t pack_resistance;
} BMS_InstaneousValues;

BMS_CANSTRUCT {
    uint16_t pack_soc;
    uint16_t pack_amphours;
    uint16_t adaptive_soc;
} BMS_InferredValues;

BMS_CANSTRUCT {
    
} BMS_CellVoltageInfo;

BMS_CANSTRUCT {

} BMS_CellTempInfo;

BMS_CANSTRUCT {

} BMS_CellOpenVoltageInfo;

BMS_CANSTRUCT {

} BMS_CellResistanceInfo;

BMS_CANSTRUCT {

} BMS_Whatever1;

BMS_CANSTRUCT {

} BMS_Whatever2;

BMS_CANSTRUCT {
    uint16_t ac_current_limit;
    uint16_t ac_power_limit;
    uint16_t ac_voltage;
    uint8_t  ac_plug_state;
    uint8_t  _reserved;
} BMS_J1772Info;
