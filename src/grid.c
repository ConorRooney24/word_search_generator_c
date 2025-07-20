#include "../include/grid.h"

#include <stdio.h>

char grid[GRID_MAX_HEIGHT][GRID_MAX_WIDTH];
int current_grid_width = 0;
int current_grid_height = 0;

void grid_init(int width, int height)
{
        if (width > GRID_MAX_WIDTH || height > GRID_MAX_HEIGHT)
        {
                fprintf(stderr, "Error - Max Height or width Exceeded. Max width allowed: %d, Max height allowed: %d\n", GRID_MAX_WIDTH, GRID_MAX_HEIGHT);
                return;
        }

        current_grid_width = width;
        current_grid_height = height;

        for (int i = 0; i < GRID_MAX_HEIGHT; i++)
        {
                for (int j = 0; j < GRID_MAX_WIDTH; j++)
                {
                        if (i >= current_grid_height || j >= current_grid_width)
                        {
                                grid[i][j] = GRID_OUT_OF_BOUNDS_CHAR;
                        }
                        else
                        {
                                grid[i][j] = GRID_EMPTY_CHAR;
                        }
                        
                }
        }
}