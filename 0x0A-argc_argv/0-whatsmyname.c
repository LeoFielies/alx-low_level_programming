#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the programe
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *agrv[])
{
	printf("%s\n", *argv);

	return (0);
}
