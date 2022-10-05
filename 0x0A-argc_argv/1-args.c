#include <stdio.h>

/**
 * main - prints the number of arguments passed to it 
 * @argc: number of arguments passed to the functions
 * @argv: argument vector of pointes to string
 *
 * Return: always (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc -1);
	return (0);
}
