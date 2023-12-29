#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print 1 to nine between it ,
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
int n = 0;
while (n <= 9)
{
	putchar(n + '0');
	if (n != 9)
	{
		putchar (',');
		putchar (' ');
	}
n++;
}
putchar ('\n');
return (0);
}
