#include <stdio.h>
#include <stdlib.h>

char * ReadString(void);

int main(void)
{
    char * strArr[3];
    strArr[0]=ReadString();
    strArr[1]=ReadString();
    strArr[2]=ReadString();
    
    puts(strArr[0]);
    puts(strArr[1]);
    puts(strArr[2]);
    
    free(strArr[0]);
    free(strArr[1]);
    free(strArr[2]);
    
    return 0;
}

/* 함    수: char * ReadString()
 * 기    능: 키보드로부터 입력되는 문자열을 읽어 들인다.
 * 반    환: 읽어 들인 문자열을 저장하고 있는 배열의 주소 값
 *
 * 특이사항
 *     문자열을 위해 힙에 메모리 공간을 할당한다.
 *     따라서 반드시 반환되는 포인터를 대상으로 free 함수를 호출해야 함. 
 */
char * ReadString(void)
{
    int maxStrLen=10;
    char * str=(char*)malloc(sizeof(char)*maxStrLen);
    int idx=0;
    
    while(1)
    {
        if(idx>=maxStrLen)
            maxStrLen=ExtendMemForString(&str, maxStrLen);
        
        str[idx]=getchar();
        if(str[idx]=='\n')
        {
            str[idx]=0;
            break;
        }
        idx++;
    }
    
    return str;
}
