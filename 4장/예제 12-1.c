#include <stdio.h>

int main(void)
{
    int i;
    int sel=0;
    int start=0;
   
    while(1)  /** ��Ȯ�� �Է��� ���ؼ� **/
    {
        fputs("Ȧ�� ��(1), ¦�� ��(2): ", stdout);
        scanf("%d", &sel);
        
        if(sel==1 || sel==2)
            break;
        else
            puts("�߸��� �Է��Դϴ�. 1 �Ǵ� 2�� �Է��ϼ���. ");
    }
    
    start = (sel==2) ? 2 : 3;  //sel�� 2�̸� 2�ܺ���, �ƴϸ� 3�ܺ��� ���.
    
    for( ;start<=9 ;start+=2)
    {
        for(i=1; i<=9; i++)
            printf("%d x %d = %d \n", start, i, start*i);
    }
    return 0;
}