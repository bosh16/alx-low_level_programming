#include<stdio.h>
/**
 * main - Entry Point
 *
 * Descriptian: A C program that print the alphabet in lower case in mirror
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
putchar('\n');
	return (0);
}
