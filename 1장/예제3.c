#include <stdio.h>

int main(void)
{
    int n1, n2;
    int add;

    fputs("�� ���� 16������ �Է�: ", stdout);
    scanf("%x %x", &n1, &n2);   // %x�� ���� 16������ �޾� ���δ�.
    add = n1 + n2;

    printf("���� ��� 8����: %o \n", add);
    printf("���� ��� 10����: %d \n", add);
    printf("���� ��� 16����: %x \n", add);

    return 0;
}