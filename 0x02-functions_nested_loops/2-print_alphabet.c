#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in ten lines
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int alphabet;
int count;

count = 0;
while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');

}
