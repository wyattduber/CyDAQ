#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

//there are more then this, but I'm not sure how to include them in the petalinux side
//probably just not use?
#define XST_SUCCESS 0L
#define XST_FAILURE 1L

//taken from filter.h
#define FILTER_FREQ_TYPE unsigned int
