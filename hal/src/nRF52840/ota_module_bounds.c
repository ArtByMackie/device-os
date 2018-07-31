#include "ota_flash_hal.h"
#include "spark_macros.h"

#if defined(MODULAR_FIRMWARE) && MODULAR_FIRMWARE
#error "Modular firmware is not supported"
#endif

// Bootloader
const module_bounds_t module_bootloader = {
        .maximum_size = 0x00008000, // bootloader_flash_length
        .start_address = 0x000f8000, // bootloader_flash_origin
        .end_address = 0x00100000,
        .module_function = MODULE_FUNCTION_BOOTLOADER,
        .module_index = 0,
        .store = MODULE_STORE_MAIN
    };

// Monolithic firmware
const module_bounds_t module_user_mono = {
        .maximum_size = 0x000bc000, // 1M - APP_CODE_BASE - OPENTHREAD_STORAGE_LENGTH - LENGTH(DCT1_FLASH) - LENGTH(DCT2_FLASH) - bootloader_flash_length
        .start_address = 0x00030000, // APP_CODE_BASE
        .end_address = 0x000ec000,
        .module_function = MODULE_FUNCTION_MONO_FIRMWARE,
        .module_index = 0,
        .store = MODULE_STORE_MAIN
    };

// Factory firmware
const module_bounds_t module_factory_mono = {
        .maximum_size = 0x000bc000, // module_user_mono.maximum_size
        .start_address = 0x12200000, // XIP start address (0x12000000) + 2M
        .end_address = 0x122bc000,
        .module_function = MODULE_FUNCTION_MONO_FIRMWARE,
        .module_index = 0,
        .store = MODULE_STORE_FACTORY
    };

// OTA region
const module_bounds_t module_ota = {
        .maximum_size = 0x000bc000, // module_user_mono.maximum_size
        .start_address = 0x122bc000, // module_factory_mono.end_address
        .end_address = 0x12378000,
        .module_function = MODULE_FUNCTION_NONE,
        .module_index = 0,
        .store = MODULE_STORE_SCRATCHPAD
    };

const module_bounds_t* const module_bounds[] = { &module_bootloader, &module_user_mono, &module_factory_mono };

const unsigned module_bounds_length = arraySize(module_bounds);