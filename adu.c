#include <stdio.h>
#include "stdlib.h"
int main() {
	int *a;
	int *m;
	a = (int*) malloc(100 * sizeof(int));
	m = a;
	while (*(a - 4) != 0) {
		scanf("%d", a);
		a += 4;
	};
	for (int* i = m; i < a; i += 4) {
		if (*i % 2 == 1){
			printf("%d ", *i);
		}
	}
}