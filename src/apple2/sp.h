#ifdef BUILD_APPLE2
/**
 * FujiNet CONFIG for #Apple2
 *
 * SmartPort MLI Routines
 */

#ifndef SP_H
#define SP_H

#include <stdint.h>

#ifdef __ORCAC__
extern uint8_t *sp_payload;
#else
extern uint8_t sp_payload[1024];
#endif

int8_t sp_status(uint8_t dest, uint8_t statcode);
void sp_list_devs(void);

#endif /* SP_H */
#endif /* BUILD_APPLE2 */

