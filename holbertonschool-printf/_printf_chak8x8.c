#include "main.h" 
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int j = 0, flag = 0, count = 0;
	va_list args;
	char c;
	char *s;
	int i;
	int temp_num, digit = 0;
	char *num_array;

	va_start(args, format);

	while ((format != NULL) && (format[flag] != '\0'))
	{
	if (format[flag] == '%')
	{
		flag++;
		switch format[flag]
		{
		case 'c':
		       c = (char)va_arg(args, int);
		       write(1, &c, 1);
		       count++;
		       break;

		case 's':
			s = (char)va_arg(args, char*);
			if (s == NULL)
			{
			s = "(null)";
			}
			while(*s != '\0')
			{
			write(1, s, 1);
			s++;
			count++;
			}
		       break;

		case '%':
			write(1, "%", 1);
			count++;
			break;
		case 'i':
			i = va_arg(args, int);
			temp_num = i;
			if (i == 0) 
			{
				write(1, "0", 1);
				count++;
				break;
			}

			if (i < 0)
			{
				write(1, "-", 1);
				temp_num = -temp_num;
				count++;
			}
			while (temp_num / 10 != 0)
			{
				digit++;
				temp_num = temp_num / 10;
			}
			digit++;

			num_array = malloc(digit * sizeof(char));
			if (num_array == NULL)
			{
				return (-1);
			}

			temp_num = i < 0 ? -i : i;

			while (temp_num / 10 != 0)
			{
				num_array[j] = (char)(temp_num % 10 + '0');
				j++;
				temp_num = temp_num / 10;
			}
			num_array[j] = (char)(temp_num + '0');

			for (j = digit - 1; j >= 0; j--)
			{
				write(1, &num_array[j], 1);
				count++;
			}	

			free(num_array);
			break;
		case 'd':

			break;
		default:
			write(1, &format[i - 1], 1);
			write(1, &format[i], 1);
  			count += 2;
			break;
		}
	}
	else
	{
		write(1, &format[i], 1);
		count++;
	}
	}
	va_end(args);
	return (count);
}
