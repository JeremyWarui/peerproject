#include "headerfile.h"

/**
 * print_c - Prints character data type
 * @arg: list of character arguments
 * Return: the characters
 */

int print_c(va_list arg)
{
	int c;
	c = va_arg(arg, int);
	return(_putchar(c));
}


/**
 * print_s - Print strings data type
 * @arg: list of arguments
 * Return: num of params printed
 */
 
int print_s(va_list arg)
{
	char *str;
	int i;
	
	str = va_arg(arg, char *);
	
	if (str == NULL)
		str = "(null)";
	
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	
	return (i);
}

/**
 * print_d - Print integer data type
 * @arg: list of arguments
 * Return: num of params printed
 */

int print_int(va_list arg)
{
	unsigned int num, temp_num, i, div, result;
	int numbers;
	
	i = 0;
	numbers = va_arg(arg, int);
	
	if (numbers < 0)
	{
		num = (numbers * -1);
		i += _putchar(45);
	}
	else
		num = numbers;
	
	temp_num = num;
	div = 1;
	
	while (temp_num > 9)
	{
		div *= 10;
		temp_num /= 10;
	}
	
	while (div > 0)
	{
		result = num / div;
		_putchar((result % 10) + '0');
		div /= 10;

		i++;
	}
	return (i);
 }
 
/**
  * print_i - Print integers (%i)
  * @arg: list of arguments
  * Return: Number to print
  */
  
int print_i(va_list arg)
{
	return (print_int(arg));
}
