/*#include <stdio.h>

int main(void)
{
	// 배열을 활용하여 문자열 표시방법

	char str[] = "Hello World!"; //글자 수 12개?
	// 배열의 문자열 끝에는 \0(null)이 찍한다.
	// \0(null)의 역할은? = 문자열의 끝에 자동으로 붙는다. 문자열의 끝을 표시하는 역할

	printf("str의 크기: %d\n", sizeof(str));
	printf("str[4]: %c\n", str[4]);
	printf("str 12번: %c\n", str[12]); // 아무것도 안나옴
	printf("str 12번: %d\n", str[12]); // 0

	printf("%s\n", str); // Hello World 출력

	str[5] = '\0';
	printf("%s\n", str); // Hello 까지만 출력, printf는 \0(null)문자가 읽힐때까지 작동됨

	char str2[] = { 'A', 'p', 'p', 'l', 'e' }; // \0null 문자가 있는 배열만 문자열.
	printf("str2의 크기: %d\n", sizeof(str2));
	printf("%s\n", str2); // Apple오류오류어류....



	char str[100];

	printf("이름입력: ");
	scanf("%s", str);
	printf("입력하신 이름은 %s\n", str);

	for (int i = 0; i < 5; i++)
	{
		printf("str[%d] = %d\n", i, str[i]);
	}

}*/