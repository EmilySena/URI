#include <stdio.h>

int main() {

    int v[5], i, par=0, q;
	for (i=0; i<5; i++){
		scanf("%d", &v[i]);
	}
	for (i=0; i<5; i++){
		q= v[i]%2;
		if (q==0)
		par++;
	}
	printf ("%d valores pares\n", par);

    return 0;
}
