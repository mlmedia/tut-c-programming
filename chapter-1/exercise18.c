#include <stdio.h>

/* exercise 1.8; count blanks, tabs, and new lines */

main()
{
	int c, b, t, nl;
	b = t = nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		} else if (c == '\t') {
			++t;
		} else if (c == ' ') {
			++b;
		}
	}
	printf("\nblanks%d\ntabs%d\nnew lines%d\n\n", b, t, nl);
}