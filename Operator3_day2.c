#include <stdio.h>

//int main(void)
//{
	//char ch1 = 'A', ch2 = 66;
	//int int_ch1 = 'D', int_ch2 = 70;

	//printf("%c %d\n", ch1, ch1); //65
	//printf("%c %d\n", ch2, ch2); //66
	//printf("%c %d\n", int_ch1, int_ch1); //68
	//printf("%c %d\n", int_ch2, int_ch2); //70


	////상수 표현 (다시)
	//int num1;
	//const int MAX_LEN = 100; // const = 심볼릭 상수(변하지 않는 고정 값)

	///*const int MAX_LEN2;
	//MAX_LEN2 = 200;*/    // 상수적용 틀린방법(상수 적용시 다른변수 적용안됨)

	//num1 = MAX_LEN + 10;
	//printf("%d\n", num1);


	////자동 형변환 (다시)
	//double double_val = 123; // 서로다른 데이터타입을 넣을때 오른쪽 타입이 왼쪽타입보다 더 넓은 범위를 포함할때 자동 형변환
	//int int_val = 3.141592; // 변수가 실수일때 정수 데이터 타입 사용시 자동으로 변환되지만 소수점 아래는 사라짐
	//int int_val2 = 129;
	//char ch = int_val2; // chat 변수는 128까지 표현, 129이상 표현시 음수로 표현될수 있음  

	//printf("%f\n", double_val);
	//printf("%d\n", int_val);
	//printf("%d\n", ch); // 129가 나와야 하지만 129는 2진수로 00000000 00000000 00000000 10000001(129) 이지만 char 데이터타입에서는 10000001으로 표현, 첫번째 1은 음수로 표현되므로 -가 됨, 2의 보수로 01111111이 되므로 ch는 -127으로 표현됨


	// 또다른 자동 형변환
	//short num1 = 10, num2 = 20;
	//short num3 = num1 + num2;
	//printf("%d\n", num3); // 메모리의 2바이트를 cpu가 4바이트로 변환하여 계산후 다시 메모리에서 2바이트로 변환 후 저장 (integral promotion)


	//double num = 1.23 + 10; // 더블타입과 인트타입의 연산시 표현범위가 더 작은 인트타입 정수가 더블타입으로 변환되어 계산됨
	//printf("%f\n", num);

	// 강제 형변환
	//int num1 = 3, num2 = 4; // 정수 3과 4를 3/4로 계산시 정수 결과값이 나와 0.00000으로 표현됨
	//double result;          // 강제로 데이터 타입을 바꿀시 실수로 표현 가능
	//result = (double)num1 / num2; // 강제로 데이터 타입을 바꿀때 ()안에 데이터 타입을 넣는다.
	//printf("result = %f\n", result);


	//문자열 출력
	/*printf("%s, %s, %s\n", "C class", "C++ class", "Java class");

	printf("%-8s %14s %5s\n", "이  름", "전 공", "학 년");
	printf("---------------------------------------------\n");
	printf("%-8s %14s %5d\n", "홍길동", "담장넘기", 3);
	printf("%-8s %14s %5d\n", "로빈훗", "활쏘기", 4);
	printf("%-8s %14s %5d\n", "김선달", "사기치기", 2);*/


	//반복문 3가지
	//첫번째 반복문
	/*int sum = 0;*/
	// 코드블록()안에 한정되어있는 변수를 local variavle(지역변수),          Auto variable(자동변수)
	//for (int i = 1; i < 11; i++) {
	//	sum += i;
	//}
	//printf("%d\n", sum); // 55

	//int sum = 0;
	//int i = 1;
	//for (; i < 11; i++) {
	//	sum += i;
	//}
	//printf("%d\n", sum);

	//int sum = 0; //반복루프 Nested Loop
	//
	//for (int k = 0; k < 10; k++) {
	//	for (int i = 0; i < 10; i++) {
	//		sum += i;
	//	}
	//}
	//printf("%d\n", sum);


	/*int sum = 0;

	for (int i = 0; i < 10; i += 2) {
			sum += 1;
		}
	printf("%d\n", sum);*/


	/*int sum = 0;
	int k = 1;
	for (int i = 0; i < 10; i += 2, k++) {
		sum += 1;
	}
	printf("%d\n", sum);
	printf("%d\n", k);*/


	//int sum = 0; // 무한루프 
	//int k = 1;
	//for (;;) {
	//	sum += 1;
	//}
	//printf("%d\n", sum);
	//printf("%d\n", k);


  //  int sum = 0;

  //  int i = 1;
  //  while (i < 11) {
	 //   sum += i;
		//i++;
  //  }

  //  printf("%d\n", sum);



//// 3번째 반복문 (조건문이 뒤로가는 반복문)
//int sum = 0;
//
//int i = 1;
//do {
//	sum += i;
//	i++;
//} while (i < 11); // 반복문 끝에 ; 써야함
//
//printf("%d\n", sum);


   /* int n = 0;
	printf("구구단 단 입력: ");
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", n, n, i, n * i);
	}*/

	// 4 X 1 =4
	// 4 X 2 =8
	// ...

   /* int n = 0;

	printf("구구단 단 입력: ");
	scanf("%d", &n);


	for (int dan = 2; dan < 10; dan++) {
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", dan, i, dan * 1);
		}
		printf("--------------------------------\n");*/

		//for (int i = 1; i <= 100; i++) {
		//	if (i == 50) {//if (50)
		//		printf("%s\n", "꽝!");
		//	}
		//	}
		//
		//for (int i = 1; i <= 100; i++) {
		//	if (i % 3 == 0 || i % 4 == 0) {
		//		printf("%d\n", i);
		//	}
		//}




//int num; // if else구조 둘중 하나에 무조건 들어가는 구조
//scanf("%d", &num);
//
//if (num % 2 == 0) {
//	printf("입력하신 숫자 %d는 짝수입니다\n", num);
//}
//else {
//	printf("입력하신 숫자 %d는 홀수입니다\n", num);
//}
//printf("프로그램 종료\n");


//int num;
//double number1, number2, result;
//char select;
//
//printf("A:덧셈 B:뺄셈 C:곱셈 D:나눗셈\n");
//print("선택하세요: ");
//scanf("%c", &select);
//printf("실수 2개 입력하세요: ");
//scanf("%lf %lf", &number1, &number2);

//if (num == 1) {
//	result = number1 + number2;
//}
//else if (num == 2) {
//	result = number1 - number2;
//}
//else if (num == 3) {
//	result = number1 * number2;
//}
//else {
//	result = number1 / number2;
//}

//switch (select)
//{
//	
//		case 'A';
//		case 'a';// case는 정수타입만 사용가능 (char도 정수타입으로 이루어져 사용가능)
//		result = number1 + number2; 
//		break; // 대문자 소문자 같이 여러개일때 사용
//		case 'B';
//			case 'b';
//			result = number1 - number2;
//			break;
//			case 'C';
//				case 'c';
//			result = number1 * number2;
//			break;
//			default;
//			result = number1 / number2;
//
//}
//printf("계산결과: %f\n", result);
//}