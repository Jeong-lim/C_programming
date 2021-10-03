#include <stdio.h>

// 선언
void p(int num);

void function_without_return();

int main(void) {

	// int num = 2;

	// num = num + 3;
	// printf("num은 %d 입니다.\n", num);
	// p(num); // p란 함수로 호출하고 num이란 함수를 던지겠다.

	// num -= 1;
	// printf("num은 %d 입니다.\n", num);

	// num += 3;
	// printf("num은 %d 입니다.\n", num);

	// num /= 6;
	// printf("num은 %d 입니다.\n", num);

    // 함수 종료
    // 반환값이 없는 함수
    function_without_return();
	return 0;
}

//정의
void p(int num) //전달값
{
	printf("num은 %d 입니다\n", num);
}
// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?
// 반환형 함수이름(전달값)
// 예로 정수를 들면
// int 함수 이름(num)
// {
//     return num + 4;

// }
// 반환을 안할거면 void
// void 함수이름(int num1, int num2, char c, float f) // 메인함수 위쪽에 만든 것과 동일해야한다.
// {
    
// }

void function_without_return()
{
    printf("반환값이 없는 함수 입니다.");
}
