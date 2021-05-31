#include <stdio.h>

#include<stdio.h>
main() {
	int height = 0; 
	int days = 0; 
	int depth; 
	int numday = 0;
	int numnight = 0;
	printf("우물의 깊이를 입력해주세요: ")
	scanf_s("%d", &depth);
	printf("하루에 올라가는 거리를 입력해주세요: ")
	scanf_s("%d", &numday);
	printf("밤 중 미끄러지는 거리를 입력해주세요: ")
	scanf_s("%d", &numnight);

	height = height + numday - numnight; //55올라감
	while (height >= depth) //3미터 아래일 경우 계속 반복하는 while 문
	{
		height = height - numnight; //밤동안에 13내려옴
		days = days + 1; //날짜를 하루 추가
		height = height + numday; //다시 55 올라감
	}
	printf("달팽이가 우물을 탈출하는데 %d일 걸렸습니다. \n", days);
}}