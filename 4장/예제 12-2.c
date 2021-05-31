#include <stdio.h>

int main(void)
{
    int num;
    int a, b, c;
    
    fputs("정수 입력: ", stdout);
    scanf("%d", &num);
    
    for(a=0; a<=100; a++)
    {
        for(b=0; b<=100; b++)
        {
            for(c=0; c<=100; c++)
            {
                if( (a*b-c)==num )
                    printf("(%d)x(%d)-(%d)=%d \n\n", a, b, c, num);
            }
        }
    }
    return 0;
}