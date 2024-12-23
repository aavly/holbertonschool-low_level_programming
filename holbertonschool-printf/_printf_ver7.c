#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int write_function(const char *s, int size, int t_count);
int write_number(int num);
int _putchar(char c);

/**
 * _printf - function that produces output according to a format
 *
 * @format: string passed into this function
 * Return: integer value of total number of chars
 */

int _printf(const char *format, ...)
{
        int flag = 0, count = 0;
        va_list args;
        char c;
        char *s;

        int i;
        /* unsigned int i, temp_num;  unsigned int to acoomodate INT_MIN */
        /* int digit = 0; */

        int temp_num;
        /**
        *int digit = 0; 
        *char *num_array;
        *int j;
        */
        va_start(args, format);

        if (format == NULL)
        {       /* write(1, "\n", 1); */
                /*count = write_function("\n", 1, count);*/
                return (-1); /* terminate with count = 0 */
        }
        while (format[flag] != '\0')
        {
                if (format[flag] == '%')
                {
                        if (format[flag + 1] == '\0')
                        {
                                va_end(args);
                                return (-1);
                        }

                /* make sure the format[] after % detected is not empty */
                /*if ((format[flag] == '%') && (format[flag + 1])) */
                /* if (format[flag] == '%') */
                /* { */
                        flag++;
                        switch (format[flag])
                        {
                                case 'c':
                                        c = (char)va_arg(args, int);
                                        write(1, &c, 1);
                                        count++;
                                        /*count = write_function(&c, 1, count); */
                                        break;
                                case 's':
                                        s = va_arg(args, char*);
                                        if (s == NULL)
                                        {
                                                s = "(null)"; /* not needed but leave it */
                                        }
                                        while (*s != '\0')
                                        {
                                                write(1, s, 1);
                                                count++;
                                                /*count = write_function(s, 1, count);*/
                                                s++;
                                        }
                                        break;
                                case '%':
                                        write(1, "%", 1);
                                        count++;
                                        /* count = write_function("%", 1, count); */
                                        break;
                                case 'i':
                                case 'd':
                                        i = va_arg(args, int);
                                        temp_num = i;
                                        
					/**
					*if (i == 0)
                                        *{
                                        *        write(1, "0", 1);
                                        *        count++;
                                        *        *count = write_function("0", 1, count); *
                                        *        break;
                                        * }
					*/
                                        /** INT_MIN detected 
                                        *if ((i <= 0) && (i == INT_MIN))
                                        *{
                                        * assign INT_MIN value to write to prevent int overflow *
                                                * 11 bytes in INT_MIN *
                                        *        count = write_function("-2147483648", 11, count) + 10;
                                        *        break;
                                        *}
					*
                                        *if ((i > 0) && (i == INT_MAX))
                                        *{
                                        * assign INT_MAX value to write to prevent int overflow *
                                                * 10 bytes in INT_MAX *
                                           *     count = write_function("2147483647",10 , count) + 9;
                                           *     break;
                                        *}
					*/

                                        /* if ((i < 0) && (i != INT_MIN)) */
                                        /* { */
                                                /*write(1, "-", 1); */
                                                /*count++;*/
                                                /* count = write_function("-", 1, 1);*/
                                                /*count = count + _putchar('-'); */
                                                /*printf("%d",count); debugging use only */
                                        /*temp_num = i; */

                                                /* temp_num = -temp_num;  normalized the value */
                                        /* count = count + 1; */
                                                /* temp_num = temp_num; for debugging use :*/
                                        /*  int range between 2,147,483,647 and -2,147,483,648 */
                                                /* count = count + 1; */
                                        /* } */

                                        count = write_number(temp_num);
                                        /*count = count + 1; */

                                        /**
                                        *temp_num = i; 
                                        *while (temp_num != 0)
                                        *{
                                        *       temp_num = temp_num / 10;
                                        *       digit++;
                                        *}
                                        *num_array = malloc(digit * sizeof(char));  1 added by Mao 
                                        *if (num_array == NULL)
                                        *{
                                        *       return (-1);
                                        *}
                                        *temp_num = i < 0 ? -i : i;
                                        *j = 0;
                                        *while (temp_num != 0)
                                        *{
                                        *       num_array[j] = (char)(temp_num % 10 + '0');
                                        *
                                        *       j++;
                                        *       temp_num /= 10;
                                        *}
                                        *
                                        *for (j = digit - 1; j >= 0; j--)
                                        *{
                                        *       count = write_function(&num_array[j], 1, count);
                                        *}
                                        *free(num_array);
                                        */
                                        break;

                                default:
                                        /**
					*  write(1, "%", 1);
                                        *write(1, &format[flag], 1);
                                        * count += 2;
					*/
                                        count = write_function("%", 1, count);

                                        /*format is const char thus can't use write_function */
                                        count = write_function(&format[flag], 1, count);
                                        /*count++;*/
                                        break;
                        }
                }
                else
                {
                        /*write(1, &format[flag], 1); */
                        /* count++;*/
                        count = write_function(&format[flag], 1, count);
                }
                flag++;
        }
        /*count++;  increment by 1 due to '\n' - checker ?? */
        va_end(args);
        return (count);
}

/**
 * write_function - write function for character buffer
 *
 * @s : char array that is the buffer
 * @size : size of the s
 * @t_count : characters that been counted
 * Return: incremented tcount by 1
 */

int write_function(const char *s, int size, int t_count)
{
        /* int i = t_count; */
        write(1, s, size);
        /*i = i + 1; */
        return (t_count + 1); /* increment t_count */
        /*return (i);*/
}

/**
 * write_number - write number
 *
 * @n : integer input
 *
 * Return: character count value
 */

int write_number(int n)
{
        char c;
        unsigned int result;
        int t_count = 0;

        /* result = n; */


        if (n < 0)
        {
                result = -n; /* absolute value */
                t_count = write_function("-", 1, 1);
        }     
	
	else 
	{
		result = n;	
	}
        /* if (result / 10 == 0) */
        /*      return (1); */
        if (result / 10)
        {
                /*t_count = t_count + 1; */
                t_count += write_number(result / 10); /* recursive function */
                /*_putchar((result % 10) + '0');*/
                /* c = (result % 10) + '0'; */
                /* write(1, &c, 1); */
                /*printf("current t_count %c is %d\n", c, t_count); */
        }
                c = (result % 10) + '0';
                t_count = write_function(&c, 1, t_count);
                /* t_count = _putchar(c) + t_count; */
                /*t_count = t_count + 1; */
                return (t_count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
