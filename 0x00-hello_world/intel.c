#include <stdio.h>
/**
 * global variable declaration
 *
 * main - Entry point
 *
 * Description: 'Intel Inline Assemble Code'
 *
 * Return: Always 0 (Success)
 *
 */
unsigned int i = 0;

int main(void)
{
    printf("%d\n", i);
    asm(".intel_syntax noprefix\n");
    asm("mov dword ptr [i], 1\n");
    printf("%d\n", i);

    return (0);
}
