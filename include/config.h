// config.h
// Stores settings that are taken in by the parser and used to generate the word search.

#ifndef CONFIG_H
#define CONFIG_H

typedef struct
{
	int grid_width = 20;
	int grid_height = 20;

	int output_to_file = 0;
	char *output_file_name = "word_search.txt";

	int puzzles_to_generate = 1;

} Config;

#endif