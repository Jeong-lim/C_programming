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
    
    puts("********* 도서 정보 입력 *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d번째 도서 정보 입력. \n", (i+1));
        
        fputs("도서 제목: ", stdout);
        gets(bookInfoList[i].bookTitle);
        
        fputs("출판사 명: ", stdout);
        gets(bookInfoList[i].bookPub);
        
        fputs("도서 가격: ", stdout);
        scanf("%d", &bookInfoList[i].bookPrice);
        fflush(stdin);
        printf("%d번째 입력 완료.......\n\n", (i+1));
    }
    
    puts("********* 도서 정보 출력 *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d번째 도서 정보 출력. \n", (i+1));
        printf("도서 제목: %s \n", bookInfoList[i].bookTitle);
        printf("출판사 명: %s \n", bookInfoList[i].bookPub);
        printf("도서 가격: %d \n\n", bookInfoList[i].bookPrice);
    }
    
    return 0;
}