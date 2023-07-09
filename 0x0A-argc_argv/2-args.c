#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all args
 * @argc: Count
 * @argv: argumrnts
 * Return: success/failure
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	exit(EXIT_SUCCESS);
}
