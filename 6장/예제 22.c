#include <stdio.h>
#include <string.h>
#define   STR_MAX      100

int CharNumOfString(char * str, char ch)
{
    int len=strlen(str);
    int chCnt=0;
    int i;
    
    for(i=0; i<len; i++)
    {
        if(str[i]==ch)
            chCnt++;
    }
    return chCnt;
}

int main(void)
{
    char str[STR_MAX];
    char ch;
    
    fputs("��� ���ڿ� �Է�: ", stdout);
    gets(str);
    
    fputs("���� �� ���� �Է�: ", stdout);
    ch=getchar();

    printf("%c�� ����: %d \n", ch, CharNumOfString(str, ch));
    return 0;
}