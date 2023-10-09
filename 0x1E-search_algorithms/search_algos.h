#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/** Linear seach algorithm*/
int linear_search(int *array, size_t size, int value);

/** Binary search algorithm*/
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);

#endif
