#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print 0123456789abcdef
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
int n = 48;
while (n <= 102)
{
	putchar(n);
	if (n == 57)
	n = n + 39;
	n++;
}
putchar ('\n');
return (0);
}
