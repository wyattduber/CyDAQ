#include <stdio.h>
#include <stdarg.h>
#include "shared_definitions.h"

void debug_printf(const char *__restrict __format, ...){
	if(DEBUG){
		printf("comm> ");

		va_list args;
		va_start(args, __format);
		vprintf(__format, args);
		va_end(args);
	}
}
