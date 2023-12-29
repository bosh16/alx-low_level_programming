#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print the alphabet in lower case and uppercase
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
while (CH <= 'Z')
{
	putchar(CH);
	CH++;
}
putchar('\n');
	return (0);
}
