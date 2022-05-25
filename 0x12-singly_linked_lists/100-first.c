#include <stdio.h>

void printCharacters(void)__attribute__((constructor));

/**
 * printCharacters - This function prints out text to the display
 * and it executes before main
 *
 * Return: Nothing to return
 */

void printCharacters(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
