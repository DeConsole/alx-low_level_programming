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
	if (lowerAlphabet != 'e' && lowerAlphabet != 'q')
{
	putchar(lowerAlphabet);
}
	else
{
	continue;
}
}
	
	putchar("\n");

	return (0);

}		
