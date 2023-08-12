/*#include <stdio.h>

int main(void)
{
	int a = 100, b = 100;
	int* p = NULL; //*포인터 표시방법, int* p(인트 형 포인터), int타입의 주소를 저장할수 있는 공간

	p = &a; // &는 불러낸다는 뜻으로, 변수a의 주소를 p에 저장한다. p의 크기는 64bit = 8byte

	*p += 30; // *의 역활은 포인터가 가지고 있는 주소를 불러낸다.

	p = &b;
	*p += 50;

	printf("a = %d, b = %d\n", a, b);

	int arr[3] = { 10, 20, 30 };

	printf("배열이름: %p\n", arr);
	// arr = 100; 배열의 이름을 포인터 상수(주소값을 가지고 있어 수정 불가능) 라고 도 합니다.
	printf("arr[0]: %p\n", &arr[0]);
	printf("arr[1]: %p\n", &arr[1]);
	printf("arr[2]: %p\n", &arr[2]);

	
	int int_arr[3] = { 10, 20, 30 };
	double double_arr[3] = { 1.0, 2.0, 3.0 };

	printf("%d %g\n", *int_arr, *double_arr); // *는  주소 안쪽의 값을 가져옴, &는 주소를 불러옴

	*int_arr += 10;
	*double_arr += 10.5;
	printf("%d %g\n", int_arr[0], double_arr[0]); // 20, 20.5



	int arr[3] = { 10, 20, 30 };
	int* ptr = arr; // 배열의 주소를 포인터에 저장하면 포인터를 배열과 똑같이 사용 가능

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]); 


	int int_arr[3] = { 10, 20, 30 };
	double double_arr[3] = { 1.0, 2.0, 3.0 };
	int* int_ptr = int_arr;
	double* double_ptr = double_arr;

	printf("%d\n", *int_ptr); // 10
	printf("%d\n", *(int_ptr + 1)); // 20, (int_arr의 주소 + int의 4byte = 배열에서 4바이트 이동)를 *로 값을 불러낸다.
	printf("%d\n", *int_ptr + 1); // 11, (int_arr의 값 10) + 1
	printf("%d\n", *int_ptr + 2); // 11, (int_arr의 값 10) + 1

	printf("%g\n", *double_ptr);
	printf("%g\n", *(double_ptr + 1));
	printf("%g\n", *(double_ptr + 2)); // 데이터 타입의 byte크기에 따라 주소에 있는 배열에서 +되는 byte값이 달라짐


	char str1[] = "Array string!";
	printf("size of str1: %d\n", sizeof(str1)); // 14(null 값 포함됨)
	printf("%s\n", str1);
	printf("------------------\n");

	char* str2 = "Constant string!";
	printf("size of str2: %d\n", sizeof(str2)); // 14(null 값 포함됨)
	printf("%s\n", str2);

	printf("------------------\n");  // 배열에 들어간 값은 변환이 되지만 포인터에 들어간 값은 수정이 안됨

	str1[4] = 'z';
	str2[4] = 'e';
	printf("%s\n", str1);
	printf("%s\n", str2);


	int num1 = 10, num2 = 20, num3 = 3;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d %d\n", *arr[0], **arr); // 10, 10
	printf("%d %d\n", *arr[1], **(arr+1)); 
	// ** = 이중 포인트(첫번째 * 는 배열안의 주소을 불러오고, 두번째 * 는 불러온 주소의 값을 불러온다.)
	// arr+1는 주소의 크기 8byte만큼 이동하여 &num2 로 이동하고
	// 첫번째 * 는 arr배열안의 주소를 불러오고, 두번째 * 는 불러온 주소의 값을 불러온다. 


	char* strArr[3] = { "first", "Second", "Third" }; // 각 문자열마다 주소값을 가지고 있는것

	printf("%s %s\n", strArr[0], *strArr);   
	printf("%s %s\n", strArr[1], *(strArr+1));
	printf("%s %s\n", strArr[2], *(strArr+2));
	// strArr[]는 배열을 뜻하고, strArr은 배열안의 주소, *strArr은 주소의 값을 불러온다.

	int num = 10;

	scanf("%d", &num); //
	printf("%d\n", num);

	char str[100];
	scanf("%s", str); // str에 &(주소 불러오기)를 안붙이는 이유는 배열의 이름이 주소역할을 하기 때문.
	printf("%s\n", str);


	char s[] = "Hello";
	char* s2 = "Worid";
	char* s3; // 자주하는 실수, 8byte 공간이 되므로 
    scanf("%s", s3); 

    
	
	
	// 번외문제
	int a = 0, b = 1, c;

    printf("%d %d ", a, b);

    for (int i = 0; i < 10; i++)
    {
	    c = a + b;
	    a = b;
	    b = c;

	    printf("%d ", c);
    }
    printf("\n");

}*/