#include <stdio.h>

#define IN 	1 /* inside a word */
#define OUT 0 /* outside a word */

/* exercise 1-13; print histogram of lengths of words in input */
main()
{
	int c, state, count, max;
	
	state = OUT;
	count = 0;
	max = 0;
	while ((c = getchar()) != EOF) {
		++count;
		if ( c == ' ' || c == '\n' || c == '\t' ) {
			state = OUT;
			putchar('\n');
		} else if (state == OUT) {
			state = IN;
			putchar('-');
		} else {
			putchar('-');
		}
	}
}