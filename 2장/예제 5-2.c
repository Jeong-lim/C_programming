#include <stdio.h>
#define PI 3.14

int main(void)
{
    double rad;

    fputs("������ �Է�: ", stdout);
    scanf("%lf", &rad);

    printf("���� ����: %f \n", rad*rad*PI);
    return 0;
}