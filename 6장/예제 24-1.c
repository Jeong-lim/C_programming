#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="010-1111-3333";   // 토큰을 나눌 문자열
    char * delim="-";   // 토큰을 나누는 기준
    char * token;
    
    token=strtok(str, delim);  // 토큰을 나눌 문자열과 기준을 지정
    
    while(token!=NULL)
    {
        puts(token);
        token=strtok(NULL, delim);
    }
    
    return 0;
}