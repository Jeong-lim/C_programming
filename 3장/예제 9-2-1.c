#include <stdio.h>

int main(void)
{
    int num1, num2, i;
    int total=0;
    
    fputs("두 개의 정수 입력: ", stdout);
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
        "%d과 %d을 포함하여 그 사이에 있는 정수들의 합: %d\n", 
        num1, num2, total
    );
    
    return 0;
}