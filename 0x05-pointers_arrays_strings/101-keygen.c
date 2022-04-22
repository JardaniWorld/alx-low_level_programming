#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function generates random passwords for a program
 *
 * Return: Always 0. (Success)
 */

int main(void)
{
int num;
int count;
int total;

srand(time(0));

for (count = 0, total = 2772; total > 122; count++)
{
num = (rand() % 125) + 1;
printf("%c", num);
total -= num;
}
printf("%c", total);

return (0);

}
