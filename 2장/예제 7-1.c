#include <stdio.h>

int main(void)
{
    int num1, num2;
    int bigNumber;
    fputs("�� ���� ���ڸ� �Է��ϼ���: ", stdout);
    scanf("%d %d", &num1, &num2);

    bigNumber= (num1>num2) ? num1 : num2;

    printf("ū ���� %d \n", bigNumber);
    return 0;
}