// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2021 Dan Halbert for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#if CIRCUITPY_USB_DEVICE
#include "supervisor/usb.h"

bool storage_usb_enabled(void);
void storage_usb_set_defaults(void);
bool common_hal_storage_disable_usb_drive(void);
bool common_hal_storage_enable_usb_drive(void);
bool common_hal_storage_disable_saves_usb_drive(void);
bool common_hal_storage_enable_saves_usb_drive(void);
#endif
