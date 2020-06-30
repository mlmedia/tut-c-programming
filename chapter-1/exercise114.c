#include <stdio.h>

#define IN 	1 /* inside a word */
#define OUT 0 /* outside a word */

/* exercise 1-14; print histogram of frequencies of characters in input */
main()
{
	int c, i, x;
	int ndigit[10];

	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c-'0'];
		} 
	}
	
	for (i = 0; i < 10; ++i) { 
		printf("%d = ", i);
		for (x = 0;x < ndigit[i];++x) {
			printf("*");
		}
		printf("\n");
	}
}