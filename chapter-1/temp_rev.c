#include <stdio.h>

/* print Fahrenheit-Celsius table in reverse order */

#define	LOWER	0 		/* lower limit of table */
#define	UPPER	300		/* upper limit of table */
#define	STEP	20		/* increment size */

main()
{
	int fahr;
	
	printf("%10s\t%10s\n", "Fahrenheit", "Celsius"); /* print the header */
	
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%10d\t%10.2f\n", fahr, (5.0/9.0) * (fahr-32));
	}
}