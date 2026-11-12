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
