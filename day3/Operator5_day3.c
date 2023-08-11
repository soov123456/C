#include <stdio.h>

//static int total; // 전역변수(Global Variable) 프로그램이 시작되고 종료될때까지 남아있기 때문에 언제든지 접근이 가능함
//static : 이 파일에서만 접근가능하고 다른파일에서는 접근이 안되는 전역함수

//void Add(int a) {
//	static int total; // Add함수 안에서 사용된 전역함수이기 때문에 이곳에서만 사용가능, Add 함수가 사용끝나도 전역함수로 남아있음
//	total += a;
//	printf("total = %d\n", total);
//    // 함수를 한번 사용후 다시사용 할때 변수가 2번 정의 되어 에러가 나지만 Static은 2번 사용시 자동으로 정의를 무시함
//}
//
//int main(void)
//{
//	/*int num = 0, temp = 0;
//
//	printf("total = %d\n", total);
//	Add(5);
//	printf("total = %d\n", total);
//	Add(7);
//	printf("total = %d\n", total);
//
//	printf("num = %d\n", num);
//	printf("temp = %d\n", temp);
//	return 0;*/
//
//	int num;
//	Add(5);
//	num = 0;
//	//total++;
//	Add(10);
//
//	
//}