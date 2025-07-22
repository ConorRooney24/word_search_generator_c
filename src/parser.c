#include "../include/parser.h"

#include <stdio.h>
#include <string.h>

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
        if (strcmp(argv[index], "--help") == 0 )
        {
                printf("Usage: wsgen [OPTIONS]\n\n");
                return 1; // Print usage menu and exit if --help is detected.
        }
        else
        {
                fprintf(stderr, "Error: Unknown argument: '%s'\n", argv[index]);
                return -1;
        }
}
