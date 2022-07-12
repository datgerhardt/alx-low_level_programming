/**
 * swap_int - swap integer
 * @a: input
 * @b: input
 * Return: Null
 */

void swap_int(int *a, int *b)
{
	int *c = (int *)a;
	*(int *)a = *(int *)b;
	*(int *)b = *(int *)c;
}
