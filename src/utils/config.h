#ifndef _SCHAUFEL_UTILS_CONFIG_H_
#define _SCHAUFEL_UTILS_CONFIG_H_

#define SCHAUFEL_TYPE_CONSUMER 1
#define SCHAUFEL_TYPE_PRODUCER 2

#include <libconfig.h>
#include <stdbool.h>

#include "utils/options.h"


void read_config(config_t *config, char *cfile);

void config_merge(config_t *config, Options o);

int get_thread_count(config_t *config, int type);

bool config_validate(config_t *config);

char* module_to_string(int module);

#endif
