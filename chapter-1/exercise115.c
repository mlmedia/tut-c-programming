#include <stdio.h>

/* exercise 1-15; print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300 using a function*/

float convert_to_fahr(float celsius);

main()
{
	float celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	
	celsius = lower;
	
	printf("%10s\t%10s\n", "Celsius", "Fahrenheit"); /* print the header */
	
	while (celsius <= upper) {
		printf("%10.0f\t%10.2f\n", celsius, convert_to_fahr(celsius));
		celsius = celsius + step;
	}
}

float convert_to_fahr(float celsius)
{
	float fahr;
	fahr = (9.0/5.0) * celsius + 32.0;
	return fahr;
}
