#include <stdio.h>
#define DATA_CNT    7

int main(void)
{
    int total=0;
    int min=0, max=0;
    int i, input; 
    
    /** �ʱ� �Է� **/
    fputs("������ ������ �Է�: ", stdout);
    scanf("%d", &input);
    min=input;
    max=input;
    total+=input;

    /** �� ��° ���� �Է� **/
    for(i=0; i<DATA_CNT-1; i++)
    {
        fputs("������ ������ �Է�: ", stdout);
        scanf("%d", &input);
        if(min>input)   // �ּҰ� ���.
            min=input;

        if(max<input)   // �ִ밪 ���.
            max=input;

        total+=input;   // ��ü �� ���.
    }

    printf("�ִ밪: %d \n", max);
    printf("�ּҰ�: %d \n", min);
    printf("��ü��: %d \n", total);
    printf("��  ��: %f \n", (double)total/DATA_CNT);

    return 0;
}