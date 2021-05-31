#include <stdio.h>
#define  STR_LEN    50
#define  BOOK_INFO_NUM   3

char bookTitle[BOOK_INFO_NUM][STR_LEN];
char bookPub[BOOK_INFO_NUM][STR_LEN];
int bookPrice[BOOK_INFO_NUM];

int main(void)
{
    int i;
    
    puts("********* 도서 정보 입력 *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d번째 도서 정보 입력. \n", (i+1));
        
        fputs("도서 제목: ", stdout);
        gets(bookTitle[i]);
        
        fputs("출판사 명: ", stdout);
        gets(bookPub[i]);
        
        fputs("도서 가격: ", stdout);
        scanf("%d", &bookPrice[i]);
        fflush(stdin);
        
        printf("%d번째 입력 완료.......\n\n", (i+1));
    }
    
    puts("********* 도서 정보 출력 *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d번째 도서 정보 출력. \n", (i+1));
        printf("도서 제목: %s \n", bookTitle[i]);
        printf("출판사 명: %s \n", bookPub[i]);
        printf("도서 가격: %d \n\n", bookPrice[i]);
    }
    return 0;
}