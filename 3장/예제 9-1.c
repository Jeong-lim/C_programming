#include <stdio.h>

int main(void)
{
    int num, i;
    int total=0;
    
    /* 1 �̻��� ������ �Է¹޴� ���� */
    while(1)
    {
        fputs("1 �̻��� ���� �Է�: ", stdout);
        scanf("%d", &num);
        
        if(num>0)
            break;
        else
            puts("1 �̻��� ������ �Է��ؾ� �մϴ�.");
    }

    /* ���� ��� ���� */
    for(i=1; i<=num; i++)
        total+=i;

    printf("1���� %d������ ���� %d. \n", num, total);
    return 0;
}