#include"main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * @hour:
 * @minute:
 */
void jack_bauer(void)
{
	int hour, minute;
	char separator = ':';

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(separator);
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
}
