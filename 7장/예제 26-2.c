#include <stdio.h>
#include <stdlib.h>

char * ReadString(void);

int main(void)
{
    char * strArr[3];
    strArr[0]=ReadString();
    strArr[1]=ReadString();
    strArr[2]=ReadString();
    
    puts(strArr[0]);
    puts(strArr[1]);
    puts(strArr[2]);
    
    free(strArr[0]);
    free(strArr[1]);
    free(strArr[2]);
    
    return 0;
}

/* ��    ��: char * ReadString()
 * ��    ��: Ű����κ��� �ԷµǴ� ���ڿ��� �о� ���δ�.
 * ��    ȯ: �о� ���� ���ڿ��� �����ϰ� �ִ� �迭�� �ּ� ��
 *
 * Ư�̻���
 *     ���ڿ��� ���� ���� �޸� ������ �Ҵ��Ѵ�.
 *     ���� �ݵ�� ��ȯ�Ǵ� �����͸� ������� free �Լ��� ȣ���ؾ� ��. 
 */
char * ReadString(void)
{
    int maxStrLen=10;
    char * str=(char*)malloc(sizeof(char)*maxStrLen);
    int idx=0;
    
    while(1)
    {
        if(idx>=maxStrLen)
            maxStrLen=ExtendMemForString(&str, maxStrLen);
        
        str[idx]=getchar();
        if(str[idx]=='\n')
        {
            str[idx]=0;
            break;
        }
        idx++;
    }
    
    return str;
}
