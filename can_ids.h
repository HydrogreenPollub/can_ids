#ifndef CAN_IDS_H
#define CAN_IDS_H

enum can_ids {
    CAN_ID_IS_EMERGENCY = 0x100,
    CAN_ID_IS_EMERGENCY_BUTTON_PRESSED = 0x101,
    CAN_ID_IS_EMERGENCY_SWITCH_TOGGLED = 0x102,
    CAN_ID_IS_HYDROGEN_LEAKING = 0x103,
    CAN_ID_IS_SC_RELAY_CLOSED = 0x104,
    CAN_ID_IS_TIME_RESET_BUTTON_PRESSED = 0x105,
    CAN_ID_IS_HALF_SPEED_BUTTON_PRESSED = 0x106,
    CAN_ID_IS_GAS_BUTTON_PRESSED = 0x107,
    CAN_ID_FUEL_CELL_MODE = 0x108,

    CAN_ID_FC_CURRENT = 0x109,
    CAN_ID_FC_SC_CURRENT = 0x10A,
    CAN_ID_SC_MOTOR_CURRENT = 0x10B,
    CAN_ID_FC_VOLTAGE = 0x10C,
    CAN_ID_SC_VOLTAGE = 0x10D,
    CAN_ID_HYDROGEN_SENSOR_VOLTAGE = 0x10E,
    CAN_ID_FUEL_CELL_TEMPERATURE = 0x10F,
    CAN_ID_FAN_RPM = 0x110,
    CAN_ID_VEHICLE_SPEED = 0x111,
    CAN_ID_MOTOR_PWM = 0x112,
    CAN_ID_HYDROGEN_PRESSURE = 0x113,

    CAN_ID_GPS_LATITUDE = 0x114,
    CAN_ID_GPS_LONGITUDE = 0x115,
    CAN_ID_GPS_ALTITUDE = 0x116,
    CAN_ID_GPS_SPEED = 0x117,

    CAN_ID_MOTOR_SPEED = 0x118,
    CAN_ID_MOTOR_CURRENT = 0x119,
    CAN_ID_FC_CURRENT_RAW = 0x11A,
    CAN_ID_FC_VOLTAGE_RAW = 0x11B,
    CAN_ID_MC_CURRENT = 0x11C,

    CAN_ID_LAP_NUMBER = 0x11D
};

#endif