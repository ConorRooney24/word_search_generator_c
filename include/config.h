// config.h
// Stores settings that are taken in by the parser and used to generate the word search.

#ifndef CONFIG_H
#define CONFIG_H

typedef struct
{
	int grid_width;
	int grid_height;

	int output_to_file;
	char *output_file_name;

	int puzzles_to_generate;

} Config;

#endif