#ifndef _SCHAUFEL_UTILS_SCALLOC_H
#define _SCHAUFEL_UTILS_SCALLOC_H

#include "utils/logger.h"

void *scalloc(size_t n, size_t s, char *file, size_t line);
#define SCALLOC(n, s) scalloc(( n), (s), __FILE__, __LINE__);

#define SFREE(e) \
    free(e); \
    e = NULL;


#endif
