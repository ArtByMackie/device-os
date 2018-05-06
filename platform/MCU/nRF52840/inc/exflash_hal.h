#ifndef _EXFLASH_HAL_H
#define _EXFLASH_HAL_H

#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif

#define EXFLASH_SECTOR_SIZE     (4 * 1024)
#define EXFLASH_BLOCK_SIZE      (64 * 1024)


int hal_exflash_init(void);
int hal_exflash_write(uint32_t addr, void const * data_buf, uint32_t data_size);
int hal_exflash_erase_sector(uint32_t addr, uint32_t num_sectors);
int hal_exflash_erase_block(uint32_t addr, uint32_t num_blocks);
int hal_exflash_read(uint32_t addr, void * data_buf, uint32_t data_size);
int hal_exflash_copy_sector(uint32_t src_addr, uint32_t dest_addr, uint32_t data_size);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //_EXFLASH_HAL_H
