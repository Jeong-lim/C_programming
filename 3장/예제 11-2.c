#include <stdio.h>

#include<stdio.h>
main() {
	int height = 0; 
	int days = 0; 
	int depth; 
	int numday = 0;
	int numnight = 0;
	printf("�칰�� ���̸� �Է����ּ���: ")
	scanf_s("%d", &depth);
	printf("�Ϸ翡 �ö󰡴� �Ÿ��� �Է����ּ���: ")
	scanf_s("%d", &numday);
	printf("�� �� �̲������� �Ÿ��� �Է����ּ���: ")
	scanf_s("%d", &numnight);

	height = height + numday - numnight; //55�ö�
	while (height >= depth) //3���� �Ʒ��� ��� ��� �ݺ��ϴ� while ��
	{
		height = height - numnight; //�㵿�ȿ� 13������
		days = days + 1; //��¥�� �Ϸ� �߰�
		height = height + numday; //�ٽ� 55 �ö�
	}
	printf("�����̰� �칰�� Ż���ϴµ� %d�� �ɷȽ��ϴ�. \n", days);
}}