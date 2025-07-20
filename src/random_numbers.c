#include "../include/random_numbers.h"

#include <stdlib.h>
#include <time.h>

void random_init()
{
        srand(time(NULL));
}

int random_int(int min, int max)
{
        return rand() % (max - min + 1) + min;
}