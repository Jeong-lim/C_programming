#include <stdio.h>
#define STR_LEN 50

int main(void)
{
    char name[STR_LEN];//50 �Ҵ� 

    fputs("���ڿ� �Է�: ", stdout);
    gets(name);

    fputs("�Էµ� ���ڿ�: ", stdout);
    puts(name);

    return 0;
}