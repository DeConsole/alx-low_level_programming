#include <stdio.h>
/**
 * main - Where the compiler starts
 *
 * Return 0 : nunber success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}

	putchar('\n');

	return (0);

}
