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

    /** ���� ���� ������ ���� ������ �迭 **/
    char * strArr[4]={str1, str2, str3, str4}; 
    char * strTempPtr;
    int i, j;
    
    /** ���ڿ� �Է� **/
    for(i=0; i<STR_NUM; i++)
    {
        printf("���ڿ� �Է� %d: ", i+1);
        gets(strArr[i]);
    }

    /** ���ڿ� ���İ���(�������Ĺ��)  **/
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

    /** ���ĵ� ���ڿ��� �ϳ��� ���ڿ��� ���� **/
    for(i=0; i<STR_NUM; i++)
    {
        strcat(mergeString, strArr[i]);
        mergeString[strlen(mergeString)]=' '; // ���� ����.
    }
    
    /** ���ĵ� ���ڿ� ��� **/
    printf("���ĵ� ���ڿ�: %s \n", mergeString);
    return 0;
}