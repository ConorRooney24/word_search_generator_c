// parser.h
// Parses command line arguments and updates the config with the new settings.

#ifndef PARSER_H
#define PARSER_H

int parse_arguments(int argc, char *argv[]); // Parses all arguments and returns an error code - 0 on success, non zero on failure.
int parse_argument(int argc, char *argv[], int index); // Parses a single argument, and any additional values that the argument expects. Returns the number of argv elements it consumes, or -1 on error. For example, if it parses '-w 10', it will return 2. if it parses '-h', it will return 1.

#endif