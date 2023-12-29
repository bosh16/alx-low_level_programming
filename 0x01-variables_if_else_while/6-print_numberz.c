#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print from 0 to 9
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
int n = 0;
while (n <= 9)
{
	putchar(n + '0');
	n++;
}
putchar('\n');
	return (0);
}
