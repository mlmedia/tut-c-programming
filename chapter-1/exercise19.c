#include <stdio.h>

/* exercise 1.9; replace multiple blanks with a single blank */

main()
{
	int c, state;
	state = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (state == 0) {
				putchar(c);
			}
			state = 1; 
		} else {
			state = 0;
			putchar(c);
		}	
	}
}