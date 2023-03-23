/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * ESPA-like pin assignments
 * Supports 4 stepper drivers, heated bed, single hotend.
 */

#include "env_validate.h"

#define SHIFT_REG_OUT(SHIFT_REG_OUTPUT_PIN) (SHIFT_REG_OUTPUT_PIN+128)

#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME  BOARD_INFO_NAME
#endif

#define I2S_STEPPER_STREAM
#if ENABLED(I2S_STEPPER_STREAM)
  #define I2S_WS                              17
  #define I2S_BCK                             22
  #define I2S_DATA                            21
#endif

//
// Limit Switches
//
#define X_STOP_PIN                            33
#define Y_STOP_PIN                            32
#define Z_STOP_PIN                            25

//
// Steppers
//
#define X_STEP_PIN                            SHIFT_REG_OUT(1)
#define X_DIR_PIN                             SHIFT_REG_OUT(0)
#define X_ENABLE_PIN                          SHIFT_REG_OUT(5)

#define Y_STEP_PIN                            SHIFT_REG_OUT(13)
#define Y_DIR_PIN                             SHIFT_REG_OUT(12)
#define Y_ENABLE_PIN                          SHIFT_REG_OUT(17)

#define Z_STEP_PIN                            SHIFT_REG_OUT(22)
#define Z_DIR_PIN                             SHIFT_REG_OUT(23)
#define Z_ENABLE_PIN                          SHIFT_REG_OUT(18)

#define E0_STEP_PIN                           SHIFT_REG_OUT(28)//16
#define E0_DIR_PIN                            SHIFT_REG_OUT(29)//17
#define E0_ENABLE_PIN                         SHIFT_REG_OUT(24)

//
// Temperature Sensors
//
#define TEMP_0_PIN                            36  // Analog Input
// #define TEMP_BED_PIN                          39  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                           26
#define FAN_PIN                               13
// #define HEATER_BED_PIN                         4

//
// MicroSD card
//
#define SD_MOSI_PIN                           23
#define SD_MISO_PIN                           19
#define SD_SCK_PIN                            18
#define SDSS                                   5
#define USES_SHARED_SPI                           // SPI is shared by SD card with TMC SPI drivers
