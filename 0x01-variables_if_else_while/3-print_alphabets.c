#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print the alphabet in uppercase wit putchar
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
char ch = 'A';

while (ch <= 'Z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
	return (0);
}
