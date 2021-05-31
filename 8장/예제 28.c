#include <stdio.h>
#define  STR_LEN    50
#define  BOOK_INFO_NUM   3

typedef struct bookInfo{
    char bookTitle[STR_LEN];
    char bookPub[STR_LEN];
    int bookPrice;
}bookInfo;

bookInfo bookInfoList[BOOK_INFO_NUM];

int main(void)
{
    int i;
    
    puts("********* ���� ���� �Է� *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d��° ���� ���� �Է�. \n", (i+1));
        
        fputs("���� ����: ", stdout);
        gets(bookInfoList[i].bookTitle);
        
        fputs("���ǻ� ��: ", stdout);
        gets(bookInfoList[i].bookPub);
        
        fputs("���� ����: ", stdout);
        scanf("%d", &bookInfoList[i].bookPrice);
        fflush(stdin);
        printf("%d��° �Է� �Ϸ�.......\n\n", (i+1));
    }
    
    puts("********* ���� ���� ��� *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d��° ���� ���� ���. \n", (i+1));
        printf("���� ����: %s \n", bookInfoList[i].bookTitle);
        printf("���ǻ� ��: %s \n", bookInfoList[i].bookPub);
        printf("���� ����: %d \n\n", bookInfoList[i].bookPrice);
    }
    
    return 0;
}