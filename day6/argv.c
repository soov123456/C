#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void clear_input_buffer(void) // 메모리안 버퍼에 남아있는 입력값과 \n(엔터)를 비워주는 함수
{
	while (getchar() != '\n'); // \n이 맞을때까지 무한반복
}*/

int main(int argc, char* argv[]) // argv는 외부에서 들어오는 값을 받을수 있다(갯수, 문자열), 기능이 필요없을때는 void
{
	/*printf("main함수의 매개변수 수: %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("argc[%d]: %s\n", i, argv[i]);
	}

	int num1, num2;
	if (argc < 3)
	{
		printf("Usage: 프로그램명 정수1 정수2\n");
		exit(0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("sum: %d\n", num1 + num2);


	// 문자 입력과 출력 방법

	// getchar = 문자1개를 입력받음, putchar = 문자 1개를 출력함
	char ch1;

	ch1 = getchar(); // 문자를 입력받는 방법
	printf("putchar-> ");
	putchar(ch1);
	printf("\n"); 


	// getc = 문자1개를 입력받음, putc = 문자 1개를 출력
	char ch1;

	ch1 = getc(stdin); 
	printf("putc-> ");
	putc(ch1, stdout);
	printf("\n");


	char ch1;
	// stdin = 어떤 파일에서 입력 과 출력을 할것인지(stdin, stdout은 키보드)
	ch1 = fgetc(stdin);
	printf("fputc-> ");
	fputc(ch1, stdout);
	printf("\n");


	char ch1;

	while (1)
	{
		ch1 = getchar();
		if (ch1 == EOF) // EOF = End Of File(define)
		{
			break;
		}
		putchar(ch1); 
	}

	//문자열을 입력과 출력방법
	char str[100];
	fgets(str, sizeof(str), stdin);
	printf("puts-> ");
	puts(str);
	printf("fputs-> ");
	fputs(str, stdout); // 출력시 puts와 fputs 둘중 하나 사용


	char id[7], name[10];

	fputs("생년월일 입력: ", stdout);
	fgets(id, sizeof(id), stdin);
	clear_input_buffer();

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("생년월일: %s\n", id);
	printf("이름: %s\n", name);


	char* str1 = "C Programming";
	char str2[100];
	char str3[100];
	char str4[] = " Language";
	char* str5 = " Class Mate";

	printf("length of str1: %d\n", (int)strlen(str1)); // strlen = null을 뺀 문자의 갯수
	printf("length of str1: %d\n", (int)strlen(str1+5)); // 주소의 시작점부터 null전까지 읽음

	strcpy(str2, str1); // (목적지의 주소, 입력 값)
	printf("strcpy(str2, str1) -> %s\n", str2);

	strncpy(str3, str1, strlen(str1)); // 목적지의 주소, 입력 값, 글자 수
	str3[strlen(str1)] = '\0';
	printf("strncpy(str3, str1, strlen(str1)) -> %s\n", str3);

	// 문자를 연결 = strcat
	strcat(str3, str4);
	printf("strcat(str3, str4)-> %s\n", str3);

	strncat(str3, str5, 6); // 문자 갯수 지정
	printf("strncat(str3, str5, 6)-> %s\n", str3);

	char* str6 = "C Programming";
	char* str7 = "C Programmin";
	char* str8 = "C Programming Language";
	char* str9 = "C Progrbmming";
	char* str10 = "C Prpgrbmmin";

	//strcmp = 문자갯수 비교
	// 문자의 코드로 계산 많을때 1, 적을때 -1, 같을때 0으로 표현
	printf("strcmp(str6, str7)-> %d\n", strcmp(str6, str7)); // 1, 첫번째 값에서 2번째 값을 뺌
	printf("strcmp(str6, str8)-> %d\n", strcmp(str6, str8)); // -1, 
	printf("strcmp(str6, str6)-> %d\n", strcmp(str6, str6)); // 0, 
	printf("strcmp(str6, str9)-> %d\n", strcmp(str6, str9)); // -1, 문자열의 길이가 같을때 문자의 아스키코드의 값으로 계산
	printf("strcmp(str9, str6)-> %d\n", strcmp(str9, str6)); // 1, 
	printf("strcmp(str6, str10)-> %d\n", strcmp(str6, str10)); // 

	// strcmp 활용
	if (!strcmp(str6, str7)) // 같으면 값이 0으로 나오지만 if에서 값0은 fail로 인식하므로 !를 붙여 참으로 만들어줌
	{
		printf("str6, str7는 동일함");
	}
	else
	{
		printf("str6, str7는 동일하지 않음\n");
	}

	if (!strncmp(str6, str7, 4)) // strcmp는 지정한 갯수만큼만 비교함
	{
		printf("str6, str7는 동일함");
	}
	else
	{
		printf("str6, str7는 동일하지 않음");
	}

	// 내일 수업 "구조체"
	// c언어 연습은 알고리즘 사이트에서 연습
	
	// 숙제

    int ar[] = { 50, 64, 39, 66, 93, 79, 0, 100 };
    char br[10][8]; // 배열의 숫자들을 10단위로 나누어서 막대그래프 만들기 10단위는 *, 1단위는 0

	결과물
	*******0
	****0**0
	****0**0
	****00*0
	*0*000*0
	00*000*0
	00*000*0
	000000*0
	000000*0
	000000*0

}*/