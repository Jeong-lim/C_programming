#include <stdio.h>
#define  DIVIDE_BY_ZERO    -256

int DivInt(int, int, int*);

int main(void)
{
    int dd, ds;
    int result[2];
    
    while(1)
    {
        fputs("������ ���� �� ���� �Է�: ", stdout);
        scanf("%d %d", &dd, &ds);
        
        if(DivInt(dd, ds, result)==DIVIDE_BY_ZERO)
        {
            printf("0���� ������ �����߻�! ���� �� �Է� \n\n");
            continue;
        }
        else
        {
            printf("��: %d, ������: %d \n", result[0], result[1]);
            break;
        }
    }
    return 0;
}

int DivInt(int divid, int divisor, int * resultArr)
{
    if(divisor==0)
        return DIVIDE_BY_ZERO;
    
    resultArr[0]=divid / divisor;
    resultArr[1]=divid % divisor;
    return 1;
}