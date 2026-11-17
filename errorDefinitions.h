#ifndef _VSW_ERRORS_H_
#define _VSW_ERRORS_H_

const char* VCU_OutOfDateErrorString = "VSW Definitions on VCU out of date!";
const char* PDB_OutOfDateErrorString = "VSW Definitions on PDB out of date!";
const char* HALOW_OutOfDateErrorString = "VSW Definitions on HALOW out of date!";
const char* DASH_OutOfDateErrorString = "VSW Definitions on DASH out of date!";

/* Motor controller */
#define MC_PFAULT_POST_DESATURATION_Pos     0x00
#define MC_PFAULT_POST_OVERCURRENT_Pos      0x01
#define MC_PFAULT_ACCELERATOR_SHORT_Pos     0x02
#define MC_PFAULT_ACCELERATOR_OPEN_Pos      0x03
#define MC_PFAULT_CURRENT_SENSOR_LOW_Pos    0x04
#define MC_PFAULT_CURRENT_SENSOR_HIGH_Pos   0x05
#define MC_PFAULT_MODULE_TEMP_LOW_Pos       0x06
#define MC_PFAULT_MODULE_TEMP_HIGH_Pos      0x07

#define MC_PFAULT_PCB_TEMP_LOW_Pos          0x08
#define MC_PFAULT_PCB_TEMP_HIGH_Pos         0x09
#define MC_PFAULT_DRIVER_TEMP_LOW_Pos       0x0A
#define MC_PFAULT_DRIVER_TEMP_HIGH_Pos      0x0B
#define MC_PFAULT_5V_SENSE_LOW_Pos          0x0C
#define MC_PFAULT_5V_SENSE_HIGH_Pos         0x0D
#define MC_PFAULT_12V_SENSE_LOW_Pos         0x0E
#define MC_PFAULT_12V_SENSE_HIGH_Pos        0x0F

#define MC_PFAULT_2V5_SENSE_LOW_Pos         0x10
#define MC_PFAULT_2V5_SENSE_HIGH_Pos        0x11
#define MC_PFAULT_1V5_SENSE_LOW_Pos         0x12
#define MC_PFAULT_1V5_SENSE_HIGH_Pos        0x13
#define MC_PFAULT_DC_BUS_VOLT_HIGH_Pos      0x14
#define MC_PFAULT_DC_BUS_VOLT_LOW_Pos       0x15
#define MC_PFAULT_PRECHARGE_TIMEOUT_Pos     0x16
#define MC_PFAULT_PRECHARGE_FAILURE_Pos     0x17

#define MC_PFAULT_EEPROM_CHECKSUM_Pos       0x18
#define MC_PFAULT_EEPROM_OUT_OF_RANGE_Pos   0x19
#define MC_PFAULT_EEPROM_UPDATE_REQ_Pos     0x1A
#define MC_PFAULT_OVERVOLT_DURING_INIT_Pos  0x1B
#define MC_PFAULT_BRAKE_SHORTED_Pos         0x1E
#define MC_PFAULT_BRAKE_OPEN_Pos            0x1F   

#define MC_PFAULT_POST_DESATURATION         (1ULL << MC_PFAULT_POST_DESATURATION_Pos)
#define MC_PFAULT_POST_OVERCURRENT          (1ULL << MC_PFAULT_POST_OVERCURRENT_Pos)
#define MC_PFAULT_ACCELERATOR_SHORT         (1ULL << MC_PFAULT_ACCELERATOR_SHORT_Pos)
#define MC_PFAULT_ACCELERATOR_OPEN          (1ULL << MC_PFAULT_ACCELERATOR_OPEN_Pos)
#define MC_PFAULT_CURRENT_SENSOR_LOW        (1ULL << MC_PFAULT_CURRENT_SENSOR_LOW_Pos)
#define MC_PFAULT_CURRENT_SENSOR_HIGH       (1ULL << MC_PFAULT_CURRENT_SENSOR_HIGH_Pos)
#define MC_PFAULT_MODULE_TEMP_LOW           (1ULL << MC_PFAULT_MODULE_TEMP_LOW_Pos)
#define MC_PFAULT_MODULE_TEMP_HIGH          (1ULL << MC_PFAULT_MODULE_TEMP_HIGH_Pos)

#define MC_PFAULT_PCB_TEMP_LOW              (1ULL << MC_PFAULT_PCB_TEMP_LOW_Pos)
#define MC_PFAULT_PCB_TEMP_HIGH             (1ULL << MC_PFAULT_PCB_TEMP_HIGH_Pos)
#define MC_PFAULT_DRIVER_TEMP_LOW           (1ULL << MC_PFAULT_DRIVER_TEMP_LOW_Pos)
#define MC_PFAULT_DRIVER_TEMP_HIGH          (1ULL << MC_PFAULT_DRIVER_TEMP_HIGH_Pos)
#define MC_PFAULT_5V_SENSE_LOW              (1ULL << MC_PFAULT_5V_SENSE_LOW_Pos)
#define MC_PFAULT_5V_SENSE_HIGH             (1ULL << MC_PFAULT_5V_SENSE_HIGH_Pos)
#define MC_PFAULT_12V_SENSE_LOW             (1ULL << MC_PFAULT_12V_SENSE_LOW_Pos)
#define MC_PFAULT_12V_SENSE_HIGH            (1ULL << MC_PFAULT_12V_SENSE_HIGH_Pos)

#define MC_PFAULT_2V5_SENSE_LOW             (1ULL << MC_PFAULT_2V5_SENSE_LOW_Pos)
#define MC_PFAULT_2V5_SENSE_HIGH            (1ULL << MC_PFAULT_2V5_SENSE_HIGH_Pos)
#define MC_PFAULT_1V5_SENSE_LOW             (1ULL << MC_PFAULT_1V5_SENSE_LOW_Pos)
#define MC_PFAULT_1V5_SENSE_HIGH            (1ULL << MC_PFAULT_1V5_SENSE_HIGH_Pos)
#define MC_PFAULT_DC_BUS_VOLT_LOW           (1ULL << MC_PFAULT_DC_BUS_VOLT_LOW_Pos)
#define MC_PFAULT_DC_BUS_VOLT_HIGH          (1ULL << MC_PFAULT_DC_BUS_VOLT_HIGH_Pos)
#define MC_PFAULT_PRECHARGE_TIMEOUT         (1ULL << MC_PFAULT_PRECHARGE_TIMEOUT_Pos)
#define MC_PFAULT_PRECHARGE_FAILURE         (1ULL << MC_PFAULT_PRECHARGE_FAILURE_Pos)

#define MC_PFAULT_EEPROM_CHECKSUM           (1ULL << MC_PFAULT_EEPROM_CHECKSUM_Pos)
#define MC_PFAULT_EEPROM_OUT_OF_RANGE       (1ULL << MC_PFAULT_EEPROM_OUT_OF_RANGE_Pos)
#define MC_PFAULT_EEPROM_UPDATE_REQ         (1ULL << MC_PFAULT_EEPROM_UPDATE_REQ_Pos)
#define MC_PFAULT_OVERVOLT_DURING_INIT      (1ULL << MC_PFAULT_OVERVOLT_DURING_INIT_Pos)
#define MC_PFAULT_BRAKE_SHORTED             (1ULL << MC_PFAULT_BRAKE_SHORTED_Pos)
#define MC_PFAULT_BRAKE_OPEN                (1ULL << MC_PFAULT_BRAKE_OPEN_Pos)   

#define MC_RFAULT_OVERSPEED_Pos             0x20
#define MC_RFAULT_OVERCURRENT_Pos           0x21
#define MC_RFAULT_OVERVOLTAGE_Pos           0x22
#define MC_RFAULT_OVERTEMP_Pos              0x23
#define MC_RFAULT_ACCELERATOR_SHORTED_Pos   0x24      
#define MC_RFAULT_ACCELERATOR_OPEN_Pos      0x25
#define MC_RFAULT_DIRECTION_COMMAND_Pos     0x26
#define MC_RFAULT_INV_RESPONSE_TIMEOUT_Pos  0x27

#define MC_RFAULT_GATE_DESATURATION_Pos     0x28
#define MC_RFAULT_HARDWARE_OVERCURRENT_Pos  0x29
#define MC_RFAULT_HARDWARE_UNDERVOLTAGE_Pos 0x2A
#define MC_RFAULT_CAN_COMMAND_LOST_Pos      0x2B
#define MC_RFAULT_MOTOR_OVERTEMP_Pos        0x2C

#define MC_RFAULT_BRAKE_SHORT_Pos           0x30
#define MC_RFAULT_BRAKE_OPEN_Pos            0x31
#define MC_RFAULT_MODULEA_OVERTEMP_Pos      0x32
#define MC_RFAULT_MODULEB_OVERTEMP_Pos      0x33
#define MC_RFAULT_MODULEC_OVERTEMP_Pos      0x34
#define MC_RFAULT_PCB_OVERTEMP_Pos          0x35
#define MC_RFAULT_GATEDRIVER_1_OVERTEMP_Pos 0x36
#define MC_RFAULT_GATEDRIVER_2_OVERTEMP_Pos 0x37

#define MC_RFAULT_GATEDRIVER_3_OVERTEMP_Pos 0x38
#define MC_RFAULT_CURRENT_SENSOR_FAULT_Pos  0x39
#define MC_RFAULT_RESOLVER_DISCONNECTED_Pos 0x3E

#define MC_RFAULT_OVERSPEED                 (1ULL << MC_RFAULT_OVERSPEED_Pos)
#define MC_RFAULT_OVERCURRENT               (1ULL << MC_RFAULT_OVERCURRENT_Pos)
#define MC_RFAULT_OVERVOLTAGE               (1ULL << MC_RFAULT_OVERVOLTAGE_Pos)
#define MC_RFAULT_OVERTEMP                  (1ULL << MC_RFAULT_OVERTEMP_Pos)
#define MC_RFAULT_ACCELERATOR_SHORTED       (1ULL << MC_RFAULT_ACCELERATOR_SHORTED_Pos)
#define MC_RFAULT_ACCELERATOR_OPEN          (1ULL << MC_RFAULT_ACCELERATOR_OPEN_Pos)
#define MC_RFAULT_DIRECTION_COMMAND         (1ULL << MC_RFAULT_DIRECTION_COMMAND_Pos)
#define MC_RFAULT_INV_RESPONSE_TIMEOUT      (1ULL << MC_RFAULT_INV_RESPONSE_TIMEOUT_Pos)

#define MC_RFAULT_GATE_DESATURATION         (1ULL << MC_RFAULT_GATE_DESATURATION_Pos)
#define MC_RFAULT_HARDWARE_OVERCURRENT      (1ULL << MC_RFAULT_HARDWARE_OVERCURRENT_Pos)
#define MC_RFAULT_HARDWARE_UNDERVOLTAGE     (1ULL << MC_RFAULT_HARDWARE_UNDERVOLTAGE_Pos)
#define MC_RFAULT_CAN_COMMAND_LOST          (1ULL << MC_RFAULT_CAN_COMMAND_LOST_Pos)
#define MC_RFAULT_MOTOR_OVERTEMP            (1ULL << MC_RFAULT_MOTOR_OVERTEMP_Pos)

#define MC_RFAULT_BRAKE_SHORT               (1ULL << MC_RFAULT_BRAKE_OPEN_Pos)
#define MC_RFAULT_BRAKE_OPEN                (1ULL << MC_RFAULT_BRAKE_SHORT_Pos)
#define MC_RFAULT_MODULEA_OVERTEMP          (1ULL << MC_RFAULT_MODULEA_OVERTEMP_Pos)
#define MC_RFAULT_MODULEB_OVERTEMP          (1ULL << MC_RFAULT_MODULEB_OVERTEMP_Pos)
#define MC_RFAULT_MODULEC_OVERTEMP          (1ULL << MC_RFAULT_MODULEC_OVERTEMP_Pos)
#define MC_RFAULT_PCB_OVERTEMP              (1ULL << MC_RFAULT_PCB_OVERTEMP_Pos)
#define MC_RFAULT_GATEDRIVER_1_OVERTEMP     (1ULL << MC_RFAULT_GATEDRIVER_1_OVERTEMP_Pos)
#define MC_RFAULT_GATEDRIVER_2_OVERTEMP     (1ULL << MC_RFAULT_GATEDRIVER_2_OVERTEMP_Pos)

#define MC_RFAULT_GATEDRIVER_3_OVERTEMP     (1ULL << MC_RFAULT_GATEDRIVER_3_OVERTEMP_Pos)
#define MC_RFAULT_CURRENT_SENSOR_FAULT      (1ULL << MC_RFAULT_CURRENT_SENSOR_FAULT_Pos)
#define MC_RFAULT_RESOLVER_DISCONNECTED     (1ULL << MC_RFAULT_RESOLVER_DISCONNECTED_Pos)

// ERROR STRINGS
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


/* VCU */
#define APPS_FAULT_MASK     0xFF00

#define APPS_FAULT_BOUNDS_Pos   0xF
#define APPS_FAULT_BOUNDS       (1 << APPS_FAULT_BOUNDS_Pos)

#define APPS_FAULT_DELTA_Pos    0xE
#define APPS_FAULT_DELTA        (1 << APPS_FAULT_DELTA_Pos)

#define APPS_FAULT_PLAUS_Pos    0xD
#define APPS_FAULT_PLAUS        (1 << APPS_FAULT_PLAUS_Pos)

#define APPS_FAULT_BSE_Pos      0xC
#define APPS_FAULT_BSE          (1 << APPS_FAULT_BSE_Pos)

#define APPS_FAULT_DISAG_Pos    0xB
#define APPS_FAULT_DISAG        (1 << APPS_FAULT_DISAG_Pos)

const char* VCU_Faults_String[16] = {
    // 0
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    // 1
    "",
    "",
    "",
    "APPS Disagreement Error",
    "Brake Sensor Error",
    "APPS/BSE Plausability Error",
    "APPS Delta Error",
    "APPS Bounds Error",
};

const char* VCU_Latch_String = "APPS/BSE Latch enabled";

#define BMS_FAULT1_DISCHARGE_LIMIT_Pos                  0x00
#define BMS_FAULT1_CHARGE_SAFETY_RELAY_Pos              0x01
#define BMS_FAULT1_INTERNAL_HARDWARE_Pos                0x02
#define BMS_FAULT1_INTERNAL_HEATSINK_THERMISTOR_Pos     0x03
#define BMS_FAULT1_INTERNAL_SOFTWARE_Pos                0x04
#define BMS_FAULT1_CELL_VOLTAGE_HIGH_Pos                0x05
#define BMS_FAULT1_CELL_VOLTAGE_LOW_Pos                 0x06
#define BMS_FAULT1_PACK_TOO_HOT_Pos                     0x07

#define BMS_FAULT1_HV_INTERLOCK_SIGNAL_Pos              0x08
#define BMS_FAULT1_PRECHARGE_CIRCUIT_Pos                0x09
#define BMS_FAULT1_PRECHARGE_CIRCUIT_Pos                0x0A

#define BMS_FAULT1_DISCHARGE_LIMIT                      (1UL << BMS_FAULT1_PACK_TOO_HOT_Pos) 
#define BMS_FAULT1_CHARGE_SAFETY_RELAY                  (1UL << BMS_FAULT1_CELL_VOLTAGE_LOW_Pos) 
#define BMS_FAULT1_INTERNAL_HARDWARE                    (1UL << BMS_FAULT1_CELL_VOLTAGE_HIGH_Pos) 
#define BMS_FAULT1_INTERNAL_HEATSINK_THERMISTOR         (1UL << BMS_FAULT1_INTERNAL_SOFTWARE_Pos) 
#define BMS_FAULT1_INTERNAL_SOFTWARE                    (1UL << BMS_FAULT1_INTERNAL_HEATSINK_THERMISTOR_Pos) 
#define BMS_FAULT1_CELL_VOLTAGE_HIGH                    (1UL << BMS_FAULT1_INTERNAL_HARDWARE_Pos) 
#define BMS_FAULT1_CELL_VOLTAGE_LOW                     (1UL << BMS_FAULT1_CHARGE_SAFETY_RELAY_Pos) 
#define BMS_FAULT1_PACK_TOO_HOT                         (1UL << BMS_FAULT1_DISCHARGE_LIMIT_Pos) 

#define BMS_FAULT1_HV_INTERLOCK_SIGNAL                  (1UL << BMS_FAULT1_PRECHARGE_CIRCUIT_Pos)
#define BMS_FAULT1_PRECHARGE_CIRCUIT                    (1UL << BMS_FAULT1_PRECHARGE_CIRCUIT_Pos)
#define BMS_FAULT1_PRECHARGE_CIRCUIT                    (1UL << BMS_FAULT1_HV_INTERLOCK_SIGNAL_Pos)

#define BMS_FAULT2_INTERNAL_COMMUNICATION_Pos           0x00
#define BMS_FAULT2_CELL_BALANCING_STUCK_OFF_Pos         0x01
#define BMS_FAULT2_WEAK_CELL_Pos                        0x02
#define BMS_FAULT2_LOW_CELL_VOLTAGE_Pos                 0x03
#define BMS_FAULT2_OPEN_WIRING_Pos                      0x04
#define BMS_FAULT2_CURRENT_SENSOR_Pos                   0x05
#define BMS_FAULT2_CELL_VOLTAGE_EXCEEDS_5V_Pos          0x06
#define BMS_FAULT2_CELL_ASIC_Pos                        0x07

#define BMS_FAULT2_WEAK_PACK_Pos                        0x08
#define BMS_FAULT2_FAN_MONITOR_Pos                      0x09
#define BMS_FAULT2_THERMISTOR_Pos                       0x0A
#define BMS_FAULT2_EXTERNAL_COMMUNICATION_Pos           0x0B
#define BMS_FAULT2_REDUNDANT_POWER_SUPPLY_Pos           0x0C
#define BMS_FAULT2_HIGH_VOLTAGE_ISOLATION_Pos           0x0D
#define BMS_FAULT2_INPUT_POWER_SUPPLY_Pos               0x0E
#define BMS_FAULT2_CHARGE_LIMIT_ENFORCEMENT_Pos         0x0F

#define BMS_FAULT2_INTERNAL_COMMUNICATION               (1UL << BMS_FAULT2_INTERNAL_COMMUNICATION_Pos)
#define BMS_FAULT2_CELL_BALANCING_STUCK_OFF             (1UL << BMS_FAULT2_CELL_BALANCING_STUCK_OFF_Pos)
#define BMS_FAULT2_WEAK_CELL                            (1UL << BMS_FAULT2_WEAK_CELL_Pos)
#define BMS_FAULT2_LOW_CELL_VOLTAGE                     (1UL << BMS_FAULT2_LOW_CELL_VOLTAGE_Pos)
#define BMS_FAULT2_OPEN_WIRING                          (1UL << BMS_FAULT2_OPEN_WIRING_Pos)
#define BMS_FAULT2_CURRENT_SENSOR                       (1UL << BMS_FAULT2_CURRENT_SENSOR_Pos)
#define BMS_FAULT2_CELL_VOLTAGE_EXCEEDS_5V              (1UL << BMS_FAULT2_CELL_VOLTAGE_EXCEEDS_5V_Pos)
#define BMS_FAULT2_CELL_ASIC                            (1UL << BMS_FAULT2_CELL_ASIC_Pos)

#define BMS_FAULT2_WEAK_PACK                            (1UL << BMS_FAULT2_CHARGE_LIMIT_ENFORCEMENT_Pos)
#define BMS_FAULT2_FAN_MONITOR                          (1UL << BMS_FAULT2_INPUT_POWER_SUPPLY_Pos)
#define BMS_FAULT2_THERMISTOR                           (1UL << BMS_FAULT2_HIGH_VOLTAGE_ISOLATION_Pos)
#define BMS_FAULT2_EXTERNAL_COMMUNICATION               (1UL << BMS_FAULT2_REDUNDANT_POWER_SUPPLY_Pos)
#define BMS_FAULT2_REDUNDANT_POWER_SUPPLY               (1UL << BMS_FAULT2_EXTERNAL_COMMUNICATION_Pos)
#define BMS_FAULT2_HIGH_VOLTAGE_ISOLATION               (1UL << BMS_FAULT2_THERMISTOR_Pos)
#define BMS_FAULT2_INPUT_POWER_SUPPLY                   (1UL << BMS_FAULT2_FAN_MONITOR_Pos)
#define BMS_FAULT2_CHARGE_LIMIT_ENFORCEMENT             (1UL << BMS_FAULT2_WEAK_PACK_Pos)

const char* BMS_DTC_Strings_1[16] = {
    /* 0 */
    "Discharge Limit Enforcement Fault",
    "Charger Safety Relay Fault",
    "Internal Hardware Fault",
    "Internal Heatsink Thermistor Fault",
    "Internal Software Fault",
    "Highest Cell Voltage Too High Fault",
    "Lowest Cell Voltage Too Low Fault",
    "Pack Too Hot Fault",
    /* 1 */
    "High Voltage Interlock Signal Fault",
    "Precharge Circuit Malfunction",
    "Abnormal State of Charge Behavior",
    "",
    "",
    "",
    "",
    ""
};

const char* BMS_DTC_Strings_2[16] = {
    /* 2 */
    "Internal Communication Fault",
    "Cell Balancing Stuck Off Fault",
    "Weak Cell Fault",
    "Low Cell Voltage Fault",
    "Open Wiring Fault",
    "Current Sensor Fault",
    "Highest Cell Voltage Over 5V Fault",
    "Cell ASIC Fault",
    /* 3 */
    "Weak Pack Fault",
    "Fan Monitor Fault",
    "Thermistor Fault",
    "External Communication Fault",
    "Redundant Power Supply Fault",
    "High Voltage Isolation Fault",
    "Input Power Supply Fault",
    "Charge Limit Enforcement Fault",
};

#endif
