#include <stdio.h>

int main(void)
{
    char ch;
 
    while(1)
    {
        ch=getchar();
        fflush(stdin);
        
        if(ch==EOF)
            break;

        else if('a'<=ch && ch<='z')
            puts("입력하신 문자는 알파벳 소문자입니다.");

        else if('A'<=ch && ch<='Z')
            puts("입력하신 문자는 알파벳 대문자입니다.");

        else if('0'<=ch && ch<='9')
            puts("입력하신 문자는 아라비아숫자입니다.");

        else
            puts("특수문자를 입력하셨군요.");
    }

    puts("프로그램을 종료합니다.");    
    return 0;
}