/**
 * phoenix_globals.h
 **/

#pragma once

#include <Arduino.h>
#include "ares_joints.h"
#include "ares_drive.h"
#include "ares_line.h"
#include "ares_line_internal.h"
#include "bno055.h"
#include "ares_imu.h"
#include "ares_rullo.h"

extern PhoenixJoint joints[NUM_JOINTS];
extern PhoenixDrive drive;
extern PhoenixLineSensor line_sensors[NUM_LINE_SENSORS];
extern PhoenixLineHandler line_handler;
extern BNO055 dev_bno055;
extern PhoenixImu imu;
