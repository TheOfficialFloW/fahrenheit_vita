#ifndef __CONFIG_H__
#define __CONFIG_H__

#define DEBUG

#define LOAD_ADDRESS 0x98000000

#define MEMORY_SCELIBC_MB 4
#define MEMORY_NEWLIB_MB 256
#define MEMORY_VITAGL_THRESHOLD_MB 8

#define DATA_PATH "ux0:data/fahrenheit"
#define SO_PATH DATA_PATH "/" "libFahrenheit.so"
#define PSARC_PATH DATA_PATH "/" "obb.psarc"

#define SCREEN_W 960
#define SCREEN_H 544

#endif
