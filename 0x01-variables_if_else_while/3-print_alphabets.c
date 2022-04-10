#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful/correct)
 */
int main(void)

{
char lower_case;
char upper_case;

for (lower_case = 'A'; lower_case <= 'Z'; lower_case++)
{
putchar(lower_case);
}

for (upper_case = 'a'; upper_case <= 'z'; upper_case++)
{
putchar(upper_case);
}

putchar('\n');

return (0);

}
