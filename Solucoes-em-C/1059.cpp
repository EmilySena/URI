#include <stdio.h>

int main() {

	int num, cont;
	num=100;
	cont=1;
	while (cont<=num)
	{
		cont++;
		if (cont%2==0)
			printf ("%d\n", cont);
	}

    return 0;
}
