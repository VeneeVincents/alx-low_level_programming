#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the sizes of various data types in bytes
 *              on the computer where it is compiled and run. It returns 0 to
 *              indicate successful execution.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
