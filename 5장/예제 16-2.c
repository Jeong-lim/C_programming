#include <stdio.h>
#define STR_LEN  256

int main(void)
{
    char ch;
    int diff='A'-'a';  // �빮�ڿ� �ҹ����� ���� ���.

    fputs("���ڿ� �Է�: ", stdout);
    while(1)
    {
        ch=getchar();

        if(ch=='\n')
            break;

        else if('a'<=ch && ch<='z')
            putchar(ch+diff);

        else if('A'<=ch && ch<='z')
            putchar(ch-diff);

        else
            putchar(ch);
    }
    return 0;
}