#include <stdio.h>

/*void print_array(int(*ptr)[4], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < (sizeof(*ptr) / sizeof(int)); k++)
		{
			//printf("%d ", ptr[i][k]);
			//printf("%d ", (*(ptr + i))[k]); // arr[i] <=> *(arr+i)
			//printf("%d ", *(ptr[i]+k)); // arr[i][k] <=> *(arr[i]+k)
			//printf("%d ", *(*(ptr + i) + k)); // arr[i] <=> *(arr+i) 
		}
		printf("\n");
	}

}


void func1(int* ptr1, int* ptr2);
void func2(int (*ptr)[4], int (*ptr2)[4]); 

void func1(int** ptr1, int* (*ptr2)[5]);
void func2(int*** ptr1, int*** (*ptr2)[5]);


int adder(int a, int b)
{
	return a + b;
}


int get_bigger(int a, int b)
{
	return a > b ? a : b;
}

int get_smaller(int a, int b)
{
	return a < b ? a : b;
}

int get_one_of_two(int a, int b, int(*fptr)(int, int))
{
	return fptr(a, b);
}

int main(void)
{
	
	/*int arr1[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

	print_array(arr1, sizeof(arr1) / sizeof(arr1[0]));



	int arr[3][2] = { {1, 2}, {3, 4}, {5, 6} };

	printf("%d %d\n", arr[1][0], arr[0][1]); // 3, 2
	printf("%d %d\n", *(arr[2]+1), *(arr[1]+1)); // 6, 4
	printf("%d %d\n", (*(arr+2))[0], (*(arr+0))[1]); // 5, 2
	printf("%d %d\n", **arr, *(*(arr+0)+0)); // 1, 1


	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	func1(arr1, arr2);
	func2(arr3, arr4);


	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];
	
	func1(arr1, arr2);
	func2(arr3, arr4);

	//함수 포인터
	
	int num1 = 10, num2 = 20, sum;
	sum = adder(num1, num2);
	printf("sum = %d\n", sum); // 30

	// 함수의 주소를 포인터에 담는 방법
	num1 = 50;
	int(*fptr)(int, int) = adder;
	sum = fptr(num1, num2);
	printf("sum = %d\n", sum); // 70


	int num1 = 10, num2 = 20;
	printf("Bigger one is %d\n", get_one_of_two(num1, num2, get_bigger));
	printf("Smaller one is %d\n", get_one_of_two(num1, num2, get_smaller));

}*/