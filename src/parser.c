#include "../include/parser.h"
#include "../include/config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int parse_arguments(int argc, char *argv[])
{
        int consumed;

        for (int i = 1; i < argc;)
        {
                consumed = parse_argument(argc, argv, i);

                if (consumed > 0)
                {
                        i += consumed;
                }
                else
                {
                        //fprintf(stderr, "Error: Failed to parse argument '%s'\n", argv[i]); - Commenting out because errors should be printed from parse_argument 
                        return 1;
                }  
        }

        return 0;
}

int parse_argument(int argc, char *argv[], int index)
{
        if (strcmp(argv[index], "--help") == 0)
        {
                printf("Word_Search_Generator_C\n\n");
                printf("Usage: wsgen [OPTIONS]\n\n");
                printf("Options:\n");
                printf("   -h, --height <n>          Set the height of the puzzle grid.     (Default: 30)\n\n");
                printf("   -w, --width <n>           Set the width of the puzzle grid.      (Default: 30)\n\n");
                printf("   -n, --num-puzzles <n>     Set the number of puzzles to output.   (Default: 1)\n\n");
                printf("   -o, --output <filename>   Enables file output. A filename is     (Default: Disabled,\n");
                printf("                             Optional. If no filename is             Default Filename: 'word_search.txt')\n");
                printf("                             specified, the default filename will\n");
                printf("                             be used.\n\n");
                printf("Example Usage:\n");
                printf("   wsgen -w 50 -h 50 -o                              (This would output a 50 by 50 puzzle with file\n");
                printf("                                                      output enabled. The output file name would be the\n");
                printf("                                                      default 'word_search.txt')\n\n");
                printf("   wsgen --width 40 --height 40 -n 3 -o puzzle.txt   (This would output 3 unique 40 by 40 puzzles. The\n");
                printf("                                                      three puzzles would be stored in a single file\n");
                printf("                                                      called 'puzzle.txt')\n");

                return argc - index; // Print usage menu and exit if --help is detected.
        }
        else if (strcmp(argv[index], "-h") == 0 || strcmp(argv[index], "--height") == 0)
        {
                if (index + 1 >= argc)
                {
                        fprintf(stderr, "Error: No value given for '%s'.\n", argv[index]);
                        return -1;
                }
                
                char *endptr;

                config.grid_height = strtol(argv[index + 1], &endptr, 10);

                if (*endptr != '\0')
                {
                        fprintf(stderr, "Error: Invalid value given for '%s'.\n", argv[index]);
                        return -1;
                }

                if (config.grid_height <= 0)
                {
                        fprintf(stderr, "Error: Grid height must be a positive value.\n");
                        return -1;
                }

                return 2;
        }
        
        else
        {
                fprintf(stderr, "Error: Unknown argument: '%s'\n", argv[index]);
                return -1;
        }
}
