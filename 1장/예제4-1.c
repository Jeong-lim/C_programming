#include <stdio.h>

int main(void)
{
    int total = 0;
    char input;

    while (1)
    {
        fputs("Data input (Ctrl+z to exit): ", stdout);
        input = getchar();
        if (input == EOF)
            break;

        fflush(stdin);
        total++;
    }

    printf("�Էµ� ������ ��: %d \n", total);
    return 0;
}