#include <stdio.h>
#define  STR_LEN    50
#define  BOOK_INFO_NUM   3

char bookTitle[BOOK_INFO_NUM][STR_LEN];
char bookPub[BOOK_INFO_NUM][STR_LEN];
int bookPrice[BOOK_INFO_NUM];

int main(void)
{
    int i;
    
    puts("********* ���� ���� �Է� *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d��° ���� ���� �Է�. \n", (i+1));
        
        fputs("���� ����: ", stdout);
        gets(bookTitle[i]);
        
        fputs("���ǻ� ��: ", stdout);
        gets(bookPub[i]);
        
        fputs("���� ����: ", stdout);
        scanf("%d", &bookPrice[i]);
        fflush(stdin);
        
        printf("%d��° �Է� �Ϸ�.......\n\n", (i+1));
    }
    
    puts("********* ���� ���� ��� *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d��° ���� ���� ���. \n", (i+1));
        printf("���� ����: %s \n", bookTitle[i]);
        printf("���ǻ� ��: %s \n", bookPub[i]);
        printf("���� ����: %d \n\n", bookPrice[i]);
    }
    return 0;
}