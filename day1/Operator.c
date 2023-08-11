#include <stdio.h>

//int main(void)
{
	/*int num1 = 7, num2 = 2;

	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);*/

	// 다시
	//int num1 = 1, num2 = 3, num3 = 4, num4 = 4, num5 = 5;
	//printf("num1 + 3 = %d\n", num1 += 3); //num1 = num1 +3
	//printf("num2 - 1 = %d\n", num2 -= 1);
	//printf("num3 * 2 = %d\n", num3 *= 2);
	//printf("num4 / 2 = %d\n", num4 /= 2);
	//printf("num5 %% 2 = %d\n", num5 %= 2);


	//증산연산자
	//int num1 = 10, num2 = 0;

	//printf("num1 = %d, num2 = %d\n", num1, num2);
	//printf("++num1 = %d, num2 = %d\n", ++num1, num2);

	//num2 = ++num1 + 10;
	//printf("num1 = %d, num2 = %d\n", num1, num2);

	//printf("num1++ = %d, num2 = %d\n", num1++, num2);
	//printf("num1 = %d, num2 = %d\n", num1, num2);

	//num2 = num1++ + 10;
	//printf("num1 = %d, num2 = %d\n", num1, num2);
	//num2++;
	//printf("num1 = %d, num2 = %d\n", num1, num2);


	//int num1 = 10, num2 = 20;
	//int result1, result2, result3, result4;

	//result1 = num1 == num2;
	//result2 = num1 <= num2;
	//result3 = num1 > num2;
	//result4 = num1 != num2;
	//printf("result1: %d\n", result1);
	//printf("result2: %d\n", result2);
	//printf("result3: %d\n", result3);
	//printf("result4: %d\n", result4);

	
	//논리연산자
	//int num1 = 10, num2 = 20;
	//int result1, result2, result3;

	//result1 = num1 == 10 && num2 == 20; // && = and(그리고)
	//result2 = num1 < 30 || num2 > 30; // || = or(둘중하나)
	//result3 = !num1; // ! = not(아님)

	//printf("result1: %d\n", result1); 
	//printf("result2: %d\n", result2);
	//printf("result3: %d\n", result3);


	/*int num1, num2;
	int result;

	printf("정수 입력1: ");
	scanf("%d", &num1);

	printf("정수 입력2: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);*/

	/*int num1, num2;
	int result;

	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);


	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);*/


	//10진수, 16진수
	/*int num1 = 12;
	int num2 = 0x12;
	printf("num1 = %d, %x\n", num1, num1);
	printf("num2 = %d, %x\n", num2, num2);*/


	// float과 double의 차이 메모리사용량 차이로 오차 정확도가 다름
	/*int num1;
	float num = 0.0f;
	double num2 = 0.0;
	
	for (int i = 0; i < 100; i++) {
		num += 0.1f;
	}
	printf("0.1 * 100; %f\n", num);

	for (int i = 0; i < 100; i++) {
		num2 += 0.1f;
	}
	printf("0.1 * 100; %f\n", num2);*/


 //   int num1 = 12; //00000000 00000000 00000000 00001100
 //   int num2 = 13; //00000000 00000000 00000000 00001101
 //   int num3 = -12; //11111111 11111111 11111111 11110100

 //   printf("num1 & num2: %d\n", num1 & num2); //00000000 00000000 00000000 00001100
	//printf("num1 | num2: %d\n", num1 | num2); //00000000 00000000 00000000 00001101
	//printf("num1 ^ num2: %d\n", num1 ^ num2); //00000000 00000000 00000000 00000001
	//	// ^ = 둘다 같으면 0, 다르면 1
	//printf("~num3: %d\n", ~num3); //00000000 00000000 00000000 00001011
	//printf("~num3 + 1: %d\n", ~num3 + 1); //00000000 00000000 00000000 00001100

	//printf("num1 << 3: %d\n", num1 << 3); //00000000 00000000 00000000 01100000
	//// num1 * 2^3
	//printf("num1 >> 1: %d\n", num1 >> 1); //00000000 00000000 00000000 00000110

	//빠른 연산이 필요로할때 *,/ 대신 <<,>>을 쓸수있다.

	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));*/

    double radius, area;
    printf("반지름 입력: ");
    scanf("%lf", &radius);
	//scanf(실수) 사용시 %lf 사용

    area = radius * radius * 3.141592;
    printf("원의 면적: %f\n", area);

}