#include <stdio.h>

int main(void)
{
    int num1, num2, i;
    int total=0;
    
    int start, end;
    
    fputs("�� ���� ���� �Է�: ", stdout);
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
    {
        start=num2;
        end=num1;
    }
    else
    {
        start=num1;
        end=num2;
    }

    for(i=start; i<=end; i++)
    {
        if(!(i%3) || !(i%5))
        {
            printf("%d�� �տ��� ����. \n", i);
            continue;
        }
        total+=i;
    }

    printf(
        "%d�� %d�� �����Ͽ� �� ���̿� �ִ� �������� ��: %d\n", 
        num1, num2, total
    );
    return 0;
}