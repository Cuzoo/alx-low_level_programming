#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints name of the program
 * @argc: Count
 * @argv: argumrnts
 * @Return: success/failure
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
