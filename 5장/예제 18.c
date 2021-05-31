#include <stdio.h>
#include <string.h>
#define STR_LEN  20
#define STR_NUM   4
#define TOTAL_STR_LEN  (STR_LEN * STR_NUM)

int main(void)
{
    char str1[STR_LEN];
    char str2[STR_LEN];
    char str3[STR_LEN];
    char str4[STR_LEN];
    
    char mergeString[TOTAL_STR_LEN]={0,};

    /** 버블 정렬 적용을 위한 포인터 배열 **/
    char * strArr[4]={str1, str2, str3, str4}; 
    char * strTempPtr;
    int i, j;
    
    /** 문자열 입력 **/
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
            if(strcmp(strArr[j], strArr[j+1])>0)
            {
                strTempPtr=strArr[j];
                strArr[j]=strArr[j+1];
                strArr[j+1]=strTempPtr;
            }
        }
    }

    /** 정렬된 문자열을 하나의 문자열로 구성 **/
    for(i=0; i<STR_NUM; i++)
    {
        strcat(mergeString, strArr[i]);
        mergeString[strlen(mergeString)]=' '; // 공백 삽입.
    }
    
    /** 정렬된 문자열 출력 **/
    printf("정렬된 문자열: %s \n", mergeString);
    return 0;
}