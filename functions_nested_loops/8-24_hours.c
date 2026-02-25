#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: prints from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int heures, minutes;

	for (heures = 0; heures <= 23; heures++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((heures / 10) + '0');
			_putchar((heures % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
