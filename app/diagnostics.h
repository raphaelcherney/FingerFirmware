#ifndef DIAGNOSTICS_H
#define DIAGNOSTICS_H

#include <stdint.h>

void diagnostics_init(void);
void diagnostics_update(void);
uint32_t diagnostics_loop_count(void);

#endif
