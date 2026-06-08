#include "diagnostics.h"

static uint32_t loop_count;

void diagnostics_init(void)
{
    loop_count = 0;
}

void diagnostics_update(void)
{
    loop_count++;
}

uint32_t diagnostics_loop_count(void)
{
    return loop_count;
}
