#include <stdio.h>

/*void print_array(int* arr, int count) // 배열의 함수를 만들때 
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}


void int_swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void print_array(const int* arr, int count) // 함수안에서 const를 사용하면 변하지 않는 값으로 인식
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

}


void pointer_swap(int** a, int** b) // 이중 포인터로 스왑함수 사용하는법(다시)
{
	int* temp = *a;
	*a = *b;
	*b = temp;
}


void print_array(int(* ptr)[4], int a) // 2차원 배열의 주소를 포인터로 받을때는 int(* ptr)[가로의 수] 
{
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < (sizeof(*ptr) / sizeof(int)); k++)
		{
			printf("%d ", ptr[i][k]);
		}
		printf("\n");
	}
	
}

int main(void)
{

	int arr1[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	print_array(arr1, sizeof(arr1) / sizeof(arr1[0])); // 주소와 행의 갯수

	/*int arr1[] = {1, 2, 3};
	int arr2[] = { 10, 20, 30, 40, 50 };

	print_array(arr1, sizeof(arr1) / sizeof(int));
	print_array(arr2, sizeof(arr2) / sizeof(int));


	int num1 = 100, num2 = 200;

	printf("before num1 = %d, num2 = %d\n", num1, num2);
	//int_swap(num1, num2); // call-by-value (변수 값을 함수에 복사)
	int_swap(&num1, &num2); // call-by-reference (변수의 주소를 함수에 복사)
	printf("before num1 = %d, num2 = %d\n", num1, num2);



	// 포인터에서 const활용

	int num = 20;
	const int* ptr = &num; // const는 num가 상수화되어 변수값은 변경하지 못하지만 포인터값은 변경가능
	ptr = 100; // 가능
	*ptr = 50; // 불가능
	num = 50;

	int num1 = 10;
	int num2 = 20;
	int* const ptr = &num1; // 포인터 다음 const가 들어가면 포인터의 값은 변경 불가능, 변수는 변경가능
	ptr = &num2; // 불가능
	*ptr = 100; // 가능

	// const의 위치에따라 상수로 변하는 것이 바뀐다.


	// 2차원 배열

	int arr1[3][4];
	double arr2[4][5];

	printf("arr1의 크기: %d\n", (int)sizeof(arr1)); // 48, 배열의 갯수(12) * 4바이트
	printf("arr2의 크기: %d\n", (int)sizeof(arr2)); // 160, 배열의 갯수(20) * 8바이트



	// 2차원 배열의 표현방법
	int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }; // 2차원 배열

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			printf("%2d ", arr1[i][k]);
		}
		printf("\n");
	}


	int value = 10;
	int* ptr = &value; // int* ptr에 value의 주소저장
	int** dptr = &ptr; // int** dptr에 ptr의 주소저장
	// 포인터의 주소를 다른포인터에 저장할때는 **이중포인터를 사용
	int* ptr2;

	printf("%p %p\n", ptr, *dptr); // 2개의 값은 동일, ptr = value의 주소, *dptr = ptr안에있는 주소(value의 주소)
	printf("%d %d\n", *ptr, **dptr); // 2개의 값은 동일 *ptr = value의 값, **dptr = ptr안에있는 주소의 값(value의 값)
	ptr2 = *dptr; // *dptr = value의 주소
	*ptr2 = 20; // *ptr2 = value의 값(10)
	printf("%d %d\n", value, **dptr); // 20, 20


	// 이중 포인터로 스왑함수 사용하는법(다시)

	int num1 = 10, num2 = 20;
	int* ptr1;
	int* ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2); // 10, 20
	pointer_swap(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2); // 20, 10


	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptr_arr[] = { ptr1, ptr2, ptr3 };
	int** dptr = ptr_arr; // 10, 배열의 값을 불러올때는 이중 포인터 사용
	printf("%d %d %d\n", *(ptr_arr[0]), *(ptr_arr[1]), *(ptr_arr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2])); // 배열주소를 포인터에 넣으면 포인터를 배열처럼 쓸수있음

	printf("%d %d %d\n", **ptr_arr, **(ptr_arr + 1), **(ptr_arr + 2));
	printf("%d %d %d\n", **dptr, **(dptr + 1), **(dptr + 2));


	// 2차원배열

	int arr[3][4];

	printf("%p\n", arr); // 배열의 시작주소
	printf("%p\n", arr[0]); // 배열의 시작주소와 동일함, 2차원 배열에서 0만 사용하면 배열의 시작주소
	printf("%p\n", &arr[0][0]); // 배열의 시작주소와 동일함
	printf("---------------------------\n");
	printf("%p\n", arr[1]);
	printf("%p\n", &arr[1][0]);
	printf("---------------------------\n");
	printf("%p\n", arr[2]);
	printf("%p\n", &arr[2][0]);
	printf("---------------------------\n");
	printf("sizeof(arr): %d\n", (int)sizeof(arr));
	printf("sizeof(arr[0]): %d\n", (int)sizeof(arr[0])); // 특정 줄의 sizeof를 구하면 한줄의 크기가 나옴
	printf("sizeof(arr[1]): %d\n", (int)sizeof(arr[1]));
	printf("sizeof(arr[2]): %d\n", (int)sizeof(arr[2]));
	printf("---------------------------\n");

    // 2차원 배열 + 활용

    int arr1[3][4];
    int arr2[3][3];

    printf("arr1: %p\n", arr1);
    printf("arr1+1: %p\n", arr1 + 1);
    printf("arr1+2: %p\n", arr1 + 2); // 2차원 배열에서  배열 + 1 하면 세로줄이 + 됨(세로 이동)
	printf("---------------------------\n");
	printf("arr1[0]: %p\n", arr1[0]);
	printf("arr1[0]+1: %p\n", arr1[0] + 1);
	printf("arr1[0]+2: %p\n", arr1[0] + 2);// arr[i][k] <=> arr[i] + k
	printf("arr1[0]+3: %p\n", arr1[0] + 3); // 2차원 배열에서 배열[세로줄] + 1 하면 가로줄이 + 됨(가로 이동)
	printf("---------------------------\n");
	printf("arr2: %p\n", arr2);
	printf("arr2+1: %p\n", arr2 + 1);
	printf("arr2+2: %p\n", arr2 + 2); // 1줄이 3칸 이기 때문에 4바이트씩 총 12바이트 이동 (16진수로)


	//2차원 배열의 대한 포인터

    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int arr2[2][3] = { {10, 20, 30}, {40, 50, 60} };
	int(*ptr1)[4] = arr1;
	int(*ptr2)[3] = arr2; // 포인터에 2차원배열의 주소를 입력할때는 가로값을 입력
	// int* ptr[] = 1차원 배열의 주소를 가지는 포인터
	// int(*ptr)[] = 2차원 주소의 주소를 가지는 포인터

	// 반복문을 사용한 2차원 배열의 표현방법
	for (int i = 0; i < 3; i++) 
	{
		for (int k = 0; k < 4; k++)
		{
			printf("%d ", ptr1[i][k]);
		}
		printf("\n");
	} 
	printf("---------------------------\n");
	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%d ", ptr2[i][k]);
		}
		printf("\n");
	}


}*/