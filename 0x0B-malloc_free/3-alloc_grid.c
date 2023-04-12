#include "main.h"
/**
 * alloc_grid -  pointer to a 2 dimensional array of integers.
 * @width: array width.
 * @height: array height.
 * Return: pointer to array, null of width or height equal 0.
 */
int **alloc_grid(int width, int height)
{
	int **temp, i, j;

	temp = malloc(sizeof(*temp) * height);
	if (width <= 0 || height <= 0 || temp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		temp[i] = malloc(width * sizeof(**temp));
		if (temp[i] == NULL)
		{
			while (i--)
				free(temp[i]);
			free(temp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			temp[i][j] = 0;
	}
	return (temp);
}
