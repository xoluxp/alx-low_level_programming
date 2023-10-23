#include "variadic_functions.h"


	/**
	 * print_strings - Prints strings, followed by a new line.
	 * @separator: The string to be printed between strings.
	 * @n: The number of strings passed to the function.
	 * @...: A variable number of strings to be printed.
	 *
	 * Description: If separator is NULL, it is not printed.
	 *              If one of the strings if NULL, (nil) is printed instead.
	 */
void print_strings(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
		va_list ap;



		va_start(ap, n);



		if (separator == NULL)
		separator = "";



		for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}

		printf("\n");
		va_end(ap);
}
