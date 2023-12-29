#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print the alphabet in lower case without e q
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	if (ch == 'e' || ch == 'q')
		ch++;
	putchar(ch);
	ch++;
}
putchar('\n');
	return (0);
}
