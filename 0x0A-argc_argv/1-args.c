#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number of args
 * @argc: Count
 * @argv: argumrnts
 * Return: success/failure
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
