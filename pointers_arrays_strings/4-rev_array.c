#include "main.h"

/**
 * reverse_array - reversing number element
 * @a: pointer to the string
 * @n: numb of elements
 */
void reverse_array(int *a, int n)
{
	int rev = 0;
	int ver = n - 1;
	int tmp;

	while (rev < ver)
	{
		tmp = a[rev];
		a[rev] = a[ver];
		a[ver] = tmp;
		rev++;
		ver--;
	}
}
