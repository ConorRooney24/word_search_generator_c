// grid.h
// Defines the 2d array for the grid and provides basic functions like filling the grid.

#ifndef GRID_H
#define GRID_H

#define GRID_MAX_WIDTH 256
#define GRID_MAX_HEIGHT 256

#define GRID_EMPTY_CHAR ' ' // The character that represents a legal spot on the grid that has just not been filled yet
#define GRID_OUT_OF_BOUNDS_CHAR '\0' // The character that represents an illegal spot on the board. This will fill the difference between the users desired grid size, and the max grid size.


extern char grid[GRID_MAX_HEIGHT][GRID_MAX_WIDTH];
extern int current_grid_width;
extern int current_grid_height;

void grid_init(int width, int height);


#endif