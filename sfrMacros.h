#ifndef SFR_MACROS_H_
#define SFR_MACROS_H_

#include <cstdint>
typedef volatile uint32_t *const SFR;
#define sfr(BASE, OFFSET) (((uint32_t *) (BASE+OFFSET)))


#endif
