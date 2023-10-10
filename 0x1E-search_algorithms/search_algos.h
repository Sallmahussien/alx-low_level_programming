#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** Linear seach algorithm*/
int linear_search(int *array, size_t size, int value);

/** Binary search algorithm*/
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);

/** Jump search algorithm*/
int jump_search(int *array, size_t size, int value);
int linear_search_for_jump(int *array, size_t start, size_t end, int value);

/** Interpolation search algorithm*/
int interpolation_search(int *array, size_t size, int value);

/** Recursive binary search*/
int advanced_binary(int *array, size_t size, int value);
int binary_search_recursive(int *array, int low, int high, int value);

#endif
