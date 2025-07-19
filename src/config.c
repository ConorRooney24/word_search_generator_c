#include "include/config.h"

#include <stdlib.h>
#include <string.h>

Config config;

void config_assign_defaults(Config *config)
{
        config->grid_width = 20;
        config->grid_height = 20;
        config->output_to_file = 0;
        config->output_file_name = strdup("word_search.txt");
        config->puzzles_to_generate = 1;
}

void config_free(Config *config)
{
    free(config->output_file_name);
    config->output_file_name = NULL;
}

