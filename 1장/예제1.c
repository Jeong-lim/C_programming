#include <stdio.h>

int main(void)
{
    char ch;
    int iNum;
    double dNum;
    char str[100];

    printf("[����, ����, �Ǽ�, ���ڿ�]�� �������� �Է�: ");
    scanf("%c%d%lf%s", &ch, &iNum, &dNum, str);

    printf("�Էµ� ������ ���: ");
    printf("%c, %d, %f, %s \n", ch, iNum, dNum, str);

    return 0;
}