#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid	-	nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);

		if (tab[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tab[i]);

			free(tab);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}

	return (tab);
}
