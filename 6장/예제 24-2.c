#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="010-1111-3333";
    char * delim="-";
    char * token;
    printf("문자열의 주소: %d \n", str);  //문자열의 주소 값 출력.
	    
    token=strtok(str, delim);
    while(token!=NULL)
    {
        printf("토큰의 주소: %d \n", token);
        puts(token);
        token=strtok(NULL, delim);
    }

    return 0;
}
