#include <stdio.h>
/**
 * main - main function where compiler starts
 *
 * Return: 0 terminate when successful
 */
int main(void)
{
	char lowerAlphabet;

	for (lowerAlphabet = 'a'; lowerAlphabet <= 'z'; lowerAlphabet++)
{
	if (lowerAlphabet == 'e')
{
	continue;
}
	else if (lowerAlphabet == 'q')
{
	continue;
}
	else
{
	putchar(letterAlphabet);
}

	putchar("\n");

	return (0);

}		
