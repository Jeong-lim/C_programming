#include <stdio.h>

int main(void)
{
    int num;
    int ret;
    int i;

    while(1)
    {
        fputs("1 �̻��� ���� �Է�: ", stdout);
        ret=scanf("%d", &num);
        
        if(ret==EOF)
            break;
        else if(num<1)
            puts("1 �̻��� �Է��� �ʿ�� �մϴ�. �ٽ� �Է��ϼ��� \n");
        else
        {
            printf("%d�� ����� \n", num);
            for(i=1; i<=num; i++)
            {
                if((num%i)==0)
                    printf("%d ", i);
            }
            printf("\n\n");
        }
    }
    puts("EOF �Է¿� ���� ���α׷��� �����մϴ�.");
    return 0;
}