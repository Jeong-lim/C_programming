#include <stdio.h>

int main(void)
{
    int num, i;
    int oddTotal=0;
    int evenTotal=0;

    while(1)
    {
        fputs("�ڿ��� �Է�: ", stdout);
        scanf("%d", &num);
        
        if(num>0)
            break;
        else
            puts("�ڿ����� �ƴմϴ�. �ٽ� �Է�!");
    }

    for(i=1; i<=num; i++)
    {
        if((i%2)==0)
            evenTotal+=i;
        else
            oddTotal+=i;
    }
    
    printf("%d ���� Ȧ�� ��: %d \n", num, oddTotal);
    printf("%d ���� ¦�� ��: %d \n", num, evenTotal);
    return 0;
}