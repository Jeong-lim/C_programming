#include <stdio.h>
#include <string.h>

#define STR_LEN  256

int main(void)
{
    char str[STR_LEN];
    int strLen=0;
    int i;
    
    int diff='A'-'a';     // �빮�ڿ� �ҹ����� ���� ���.
    
    fputs("���ڿ� �Է�: ", stdout);
    gets(str);
    strLen=strlen(str);    // �Էµ� ���ڿ��� ���� ���.

    for(i=0; i<strLen; i++)
    {
        if('a'<=str[i] && str[i]<='z')
            str[i]+=diff;

        else if('A'<=str[i] && str[i]<='Z')
            str[i]-=diff;

        else
            ;   // �̿��� ��쿡�� ���� �� ���� ��� ��� ��.
    }

    puts(str);
    return 0;
}