#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="010-1111-3333";   // ��ū�� ���� ���ڿ�
    char * delim="-";   // ��ū�� ������ ����
    char * token;
    
    token=strtok(str, delim);  // ��ū�� ���� ���ڿ��� ������ ����
    
    while(token!=NULL)
    {
        puts(token);
        token=strtok(NULL, delim);
    }
    
    return 0;
}