#include <stdio.h>
/**
 * main - Where the compiler starts
 *
 * Return 0: terminate program if logical
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar("%c", letter);
}

	putchar('\n');

	return (0);

}
