#include <stdio.h>

int main(void)
{
    int num1, num2, i;
    int total=0;
    
    fputs("�� ���� ���� �Է�: ", stdout);
    scanf("%d %d", &num1, &num2);
    
    if(num1>num2)
    {
        for(i=num2; i<=num1; i++)
            total+=i;
    }
    else
    {
        for(i=num1; i<=num2; i++)
            total+=i;
    }
    
    printf(
        "%d�� %d�� �����Ͽ� �� ���̿� �ִ� �������� ��: %d\n", 
        num1, num2, total
    );
    
    return 0;
}