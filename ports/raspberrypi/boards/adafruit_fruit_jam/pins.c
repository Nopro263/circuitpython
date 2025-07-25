// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2024 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS


    // On JST PH connector.
    { MP_OBJ_NEW_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO40) },

    // On header
    { MP_OBJ_NEW_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO41) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO42) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO43) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO44) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO45) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO6) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO7) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO8) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO9) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_GPIO10) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO29) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_IR), MP_ROM_PTR(&pin_GPIO29) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_GPIO32) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_BUTTON1), MP_ROM_PTR(&pin_GPIO0) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BOOT), MP_ROM_PTR(&pin_GPIO0) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_BUTTON2), MP_ROM_PTR(&pin_GPIO4) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BUTTON3), MP_ROM_PTR(&pin_GPIO5) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO20) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO21) },

    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_GPIO30) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_GPIO31) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_GPIO28) },

    // Shared with ESP TX/RX.
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO9) },

    { MP_ROM_QSTR(MP_QSTR_ESP_CS), MP_ROM_PTR(&pin_GPIO46) },
    // was GPIO0 on ESP32. Used for IRQ and mode switching.
    { MP_ROM_QSTR(MP_QSTR_ESP_IRQ), MP_ROM_PTR(&pin_GPIO23) },
    // BUSY is also known as READY, and is RTS for BLE mode.
    { MP_ROM_QSTR(MP_QSTR_ESP_BUSY), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_ESP_RESET), MP_ROM_PTR(&pin_GPIO22) },
    // TX and RX are from the point of view of the RP2350.
    { MP_ROM_QSTR(MP_QSTR_ESP_TX), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_ESP_RX), MP_ROM_PTR(&pin_GPIO9) },

    { MP_ROM_QSTR(MP_QSTR_CKN), MP_ROM_PTR(&pin_GPIO12) },
    { MP_ROM_QSTR(MP_QSTR_CKP), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_D0N), MP_ROM_PTR(&pin_GPIO14) },
    { MP_ROM_QSTR(MP_QSTR_D0P), MP_ROM_PTR(&pin_GPIO15) },
    { MP_ROM_QSTR(MP_QSTR_D1N), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_D1P), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_D2N), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_D2P), MP_ROM_PTR(&pin_GPIO19) },

    { MP_ROM_QSTR(MP_QSTR_PERIPH_RESET), MP_ROM_PTR(&pin_GPIO22) },

    { MP_ROM_QSTR(MP_QSTR_I2S_DIN), MP_ROM_PTR(&pin_GPIO24) },
    { MP_ROM_QSTR(MP_QSTR_I2S_MCLK), MP_ROM_PTR(&pin_GPIO25) },
    { MP_ROM_QSTR(MP_QSTR_I2S_BCLK), MP_ROM_PTR(&pin_GPIO26) },
    { MP_ROM_QSTR(MP_QSTR_I2S_WS), MP_ROM_PTR(&pin_GPIO27) },
    { MP_ROM_QSTR(MP_QSTR_I2S_IRQ), MP_ROM_PTR(&pin_GPIO23) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_SCK), MP_ROM_PTR(&pin_GPIO34) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDIO_CLOCK), MP_ROM_PTR(&pin_GPIO34) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_MOSI), MP_ROM_PTR(&pin_GPIO35) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDIO_COMMAND), MP_ROM_PTR(&pin_GPIO35) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_MISO), MP_ROM_PTR(&pin_GPIO36) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDIO_DATA0), MP_ROM_PTR(&pin_GPIO36) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SDIO_DATA1), MP_ROM_PTR(&pin_GPIO37) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDIO_DATA2), MP_ROM_PTR(&pin_GPIO38) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_CS), MP_ROM_PTR(&pin_GPIO39) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDIO_DATA3), MP_ROM_PTR(&pin_GPIO39) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_CARD_DETECT), MP_ROM_PTR(&pin_GPIO33) },

    { MP_ROM_QSTR(MP_QSTR_USB_HOST_DATA_PLUS), MP_ROM_PTR(&pin_GPIO1) },
    { MP_ROM_QSTR(MP_QSTR_USB_HOST_DATA_MINUS), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_USB_HOST_5V_POWER), MP_ROM_PTR(&pin_GPIO11) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_STEMMA_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    // Shared with ESP TX/RX.
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
