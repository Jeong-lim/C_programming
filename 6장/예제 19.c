#include <stdio.h>
#define  FACTOR_ONEUNDER_ERROR    -100

int Factorial(int);

int main(void)
{
    int n, result;
    
    fputs("���� �Է�(1�̻�): ", stdout);
    scanf("%d", &n);
    
    result=Factorial(n);
    if(result==FACTOR_ONEUNDER_ERROR)
        puts("�Է��� �߸��Ǿ� ����ġ ���� ����� ������ϴ�.");
    else
        printf("%d! = %d \n", n, result);
    
    return 0;
}

int Factorial(int num)
{
    int fact=1;
    int i;
    
    if(num<1)
        return FACTOR_ONEUNDER_ERROR;
    
    for(i=1; i<=num; i++)
        fact*=i;
    
    return fact;	
}