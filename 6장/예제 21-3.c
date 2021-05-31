#include <stdio.h>

int SumOfArray(int * arrPtr, int arrLen)
{
    int total=0;
    int i;
    
    for(i=0; i<arrLen; i++)
        total+=arrPtr[i];

    return total;
}

int main(void)
{
    int arr3[2][2]={1, 3, 5, 7};
    int arr4[2][3]={1, 2, 3, 4, 5, 6};
    
    int sumOfArrResult;
    
    sumOfArrResult=SumOfArray((int*)arr3, sizeof(arr3)/sizeof(int));
    printf("1, 3, 5, 7의 합: %d \n", sumOfArrResult);
    
    sumOfArrResult=SumOfArray((int*)arr4, sizeof(arr4)/sizeof(int));
    printf("1, 2, 3, 4, 5, 6의 합: %d \n", sumOfArrResult);
    return 0;
}