#include <stdio.h>
#define ARR_LEN    20

int main(void)
{
    int num;
    int binaryArr[ARR_LEN];
    int binaryCnt=0;
    
    fputs("10���� ���� �Է�: ", stdout);
    scanf("%d", &num);

    printf("%d�� 2������ ��ȯ�ϸ�: ", num);

    /* 2������ ��ȯ�ϱ� ���� ������ ���� */
    while(num>0)   
    {
        binaryArr[binaryCnt++]=num%2;
        num=num/2;
    }
    
    /* �������� �Ųٷ� ����Ͽ� 2������ ���� */
    while(binaryCnt>0)
    {
        printf("%d", binaryArr[binaryCnt-1]);
        binaryCnt-=1;
    }
    puts(""); // �� �ٲ��� ���� �ڵ�.
    
    return 0;
}