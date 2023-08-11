/*#include <stdio.h> //전처리문 <stdio.h> 기본 제공하는 함수들을 가져오는것, 기본제공 함수를 사용해도 에러가 안뜸
//사용자가 헤더파일을 직접 만들수 있음, 기본제공 헤더파일 <>사용, 사용자정의 헤더파일 ""사용

void PrintMessage(void); // 함수의 시그니처
int GetMaxValue(int, int); // 함수의 시그니처

int GetMaxValue(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

void PrintMessage(void) // 함수, void : 외부로부터 받는것이 없다.
{
	int a, b; // {}내용은 함수정의 // 함수정의 안의 지정된 변수(예:a, b)는 함수정의 안에서만 작동하는 "지역변수"이다.
	printf("두 수 입력: ");
	scanf("%d %d", &a, &b);
	printf("두 수 중에서 큰 값은 %d 입니다.\n", GetMaxValue(a, b)); // a, b 값을 다른 함수로 복사하는 것을 Parameter Passing
}


int main(void) 
{

	/*int num;

	while (1) {
		printf("숫자입력(0:quit): ");
		scanf("%d", &num);

		if (num == 0) {
			break; // 임의로 반복문을 빠져나고가 싶을때 break와 가장 가까운 반복문을 멈춤.
		}

		if (num % 2 == 0) {
			printf("짝수!\n");
			continue; // 결과 값이 참일경우 다시 반복
		}

		printf("%d\n", num);
	}
	printf("프로그램 종료\n");*/


	/*for (int i = 1; i <= 100; i++) {
		if (i % 3 != 0)
			continue;
		printf("%d\n", i);
	}*/


	// 함수 종류 : 반환값, 함수이름, 매개인자, 본문



	// 컴파일러의 종류 1phse compiler(위에서부터 읽어 내려옴), 2phse compiler(구형, 오래걸림)

	// 함수의 선언(Declaration)
	//void PrintMessage(void), int GetMaxValue(int, int) 를 함수의 시그니처라고 부른다.
	// 함수의 시그니처를 적을때 변수는 적지 않아도 된다

//}