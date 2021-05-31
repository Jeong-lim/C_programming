#include <stdio.h>
#define DATA_CNT    7

int main(void)
{
    int total=0;
    int min=0, max=0;
    int i, input; 
    
    /** 초기 입력 **/
    fputs("정수형 데이터 입력: ", stdout);
    scanf("%d", &input);
    min=input;
    max=input;
    total+=input;

    /** 두 번째 이후 입력 **/
    for(i=0; i<DATA_CNT-1; i++)
    {
        fputs("정수형 데이터 입력: ", stdout);
        scanf("%d", &input);
        if(min>input)   // 최소값 계산.
            min=input;

        if(max<input)   // 최대값 계산.
            max=input;

        total+=input;   // 전체 합 계산.
    }

    printf("최대값: %d \n", max);
    printf("최소값: %d \n", min);
    printf("전체합: %d \n", total);
    printf("평  균: %f \n", (double)total/DATA_CNT);

    return 0;
}