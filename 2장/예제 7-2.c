#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int bigNumber;
    fputs("�� ���� ���ڸ� �Է��ϼ���: ", stdout);
    scanf("%d %d %d", &num1, &num2, &num3);

    bigNumber=
         (num1>num2) ? 
            (num1>num3) ? num1:num3 : (num2>num3)? num2:num3 ;

    printf("ū ���� %d \n", bigNumber);
    return 0;
}