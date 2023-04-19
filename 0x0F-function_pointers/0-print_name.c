#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to funtion
 * @name: strring to add
 * @f: pointer to funtion
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
