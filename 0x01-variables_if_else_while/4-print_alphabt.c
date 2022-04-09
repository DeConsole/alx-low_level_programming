#include <stdio.h>
/**
 * main - main function where compiler starts
 *
 * Return: 0 terminate when successful
 */
int main(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
{
	if (lower_alphabet == 'e')
	continue;

	else if (lower_alphabet == 'q')
	continue;

	putchar(lower_alphabet);
}

	putchar('\n');

	return (0);

}
