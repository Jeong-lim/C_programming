#include <stdio.h>

int main(void)
{
    int i;
    int sel=0;
    int start=0;
   
    while(1)  /** 정확한 입력을 위해서 **/
    {
        fputs("홀수 단(1), 짝수 단(2): ", stdout);
        scanf("%d", &sel);
        
        if(sel==1 || sel==2)
            break;
        else
            puts("잘못된 입력입니다. 1 또는 2만 입력하세요. ");
    }
    
    start = (sel==2) ? 2 : 3;  //sel이 2이면 2단부터, 아니면 3단부터 출력.
    
    for( ;start<=9 ;start+=2)
    {
        for(i=1; i<=9; i++)
            printf("%d x %d = %d \n", start, i, start*i);
    }
    return 0;
}