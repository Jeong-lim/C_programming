#include <stdio.h>
#include <string.h>
#define STR_LEN  20
#define STR_NUM 5

int main(void)
{
    char strArr[5][STR_LEN];
    char tempStr[STR_LEN];
    int i, j;
    
    for(i=0; i<STR_NUM; i++)
    {
        printf("문자열 입력 %d: ", i+1);
        gets(strArr[i]);
    }
    
    /** 문자열 정렬과정(버블정렬방식)  **/
    for(i=0; i<STR_NUM-1 ;i++)
    {
        for(j=0; j<(STR_NUM-i)-1; j++)
        {
            if(strlen(strArr[j]) > strlen(strArr[j+1]))
            {
                strcpy(tempStr, strArr[j]);
                strcpy(strArr[j], strArr[j+1]);
                strcpy(strArr[j+1], tempStr);
            }
        }
    }

    /** 정렬된 문자열 출력 **/
    for(i=0; i<STR_NUM; i++)
        puts(strArr[i]);

    return 0;
}