#include <stdint.h>

#include "py/obj.h"
#include "py/runtime.h"
#include "supervisor/usb.h"
#include "shared-module/storage/__init__.h"


#include "shared-bindings/unsafe/__init__.h"

static mp_obj_t unsafe_usb_deinit(void) {
    usb_disconnect();
    usb_deinit();
    return mp_const_true;
}
MP_DEFINE_CONST_FUN_OBJ_0(unsafe_usb_deinit_obj, unsafe_usb_deinit);


static mp_obj_t unsafe_usb_init(void) {
    usb_init();
    usb_connect();
    return mp_const_true;
}
MP_DEFINE_CONST_FUN_OBJ_0(unsafe_usb_init_obj, unsafe_usb_init);


static mp_obj_t unsafe_usb_hide(mp_obj_t internal, mp_obj_t saves) {
    if (internal != mp_const_none) {
        bool bInternal = mp_obj_is_true(internal);

        if (bInternal) {
            common_hal_storage_disable_usb_drive();
        } else {
            common_hal_storage_enable_usb_drive();
        }
    }

    if (saves != mp_const_none) {
        bool bSaves = mp_obj_is_true(saves);

        if (bSaves) {
            common_hal_storage_disable_saves_usb_drive();
        } else {
            common_hal_storage_enable_saves_usb_drive();
        }
    }
    return mp_const_true;
}
MP_DEFINE_CONST_FUN_OBJ_2(unsafe_usb_hide_obj, unsafe_usb_hide);


static const mp_rom_map_elem_t unsafe_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_unsafe) },

    { MP_ROM_QSTR(MP_QSTR_usb_deinit),             MP_ROM_PTR(&unsafe_usb_deinit_obj) },
    { MP_ROM_QSTR(MP_QSTR_usb_init),             MP_ROM_PTR(&unsafe_usb_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_usb_hide),             MP_ROM_PTR(&unsafe_usb_hide_obj) }
};

static MP_DEFINE_CONST_DICT(unsafe_module_globals, unsafe_module_globals_table);

const mp_obj_module_t unsafe_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&unsafe_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_unsafe, unsafe_module);
