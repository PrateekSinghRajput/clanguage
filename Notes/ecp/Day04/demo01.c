#include <stdio.h>
int main(void)
{
    int res = ((4 + ((5 * 2) / 2)) - 3);        // 6

  	int a = -10, b = 3, c = 0, d;

	d = a++ || ++b && c++;      // -9, 3, 0, 1

	printf("%d, %d, %d, %d, ", a, b, c, d);

	a = -10, b = 3, c = 0;

	d = c++ && ++b || a++;      // -9, 3, 1, 1

	printf("%d, %d, %d, %d", a, b, c, d);

	return 0;
}
