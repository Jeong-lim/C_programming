#include <stdio.h>

int main(void)
{
    int total = 0;
    int input = 0;
    int ret;

    while (1)
    {
        fputs("Data input (Ctrl+z to exit): ", stdout);
        ret = scanf("%d", &input);
        if (ret == EOF)
            break;

        total += input;
    }

    printf("?? ??: %d \n", total);
    return 0;
}