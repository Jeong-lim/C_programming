#include <stdio.h>
#define ARR_LEN    5

int main(void)
{
    int arr[ARR_LEN];
    int idx;
    int i, j;
    int temp;
    
    for(idx=0; idx<ARR_LEN; idx++)
    {
        printf("���� %d �Է�: ", idx+1);
        scanf("%d", &arr[idx]);
    }
    
    for(i=0; i<ARR_LEN-1 ;i++)
    {
        for(j=0; j<(ARR_LEN-i)-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    fputs("���ĵ� ���: ", stdout);
    for(i=0; i<ARR_LEN; i++)
        printf("%d ", arr[i]);

    return 0;
}