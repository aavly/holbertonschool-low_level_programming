#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * Description: Header file containing declarations
 *		for function pointers.
 */

/**
 * _putchar - prints char to output.
 *
 * @c: char to print.
 *
 * Return: on success 1, otherwise -1.
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif