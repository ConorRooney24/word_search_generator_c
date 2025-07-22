#include "../include/config.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Config config;

void config_assign_defaults(Config *config)
{
	config->grid_width = 30;
	config->grid_height = 30;
	config->output_to_file = 0;
	config->output_file_name = strdup("word_search.txt");
	config->puzzles_to_generate = 1;
}

void config_print(Config *config)
{
	printf("h: %d\n", config->grid_height);
	printf("w: %d\n", config->grid_width);
	printf("n: %d\n", config->puzzles_to_generate);
	printf("o: %d, %s\n", config->output_to_file, config->output_file_name);
}

void config_free(Config *config)
{
	free(config->output_file_name);
	config->output_file_name = NULL;
}

