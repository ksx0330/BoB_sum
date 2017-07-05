#include <stdio.h>

int sum() {
	int i, sum=0;

	for (i=1; i<=100; i++)
		sum += i;

	printf("%d", sum);

}
