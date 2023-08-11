#include <stdio.h>
#include <stdarg.h>

//배열 Array

/*int main(void)
{
	//int arr[5] = { 20 ,25, 30, 21, 10 };

	//// arr[index 또는 첨자, 항상 0부터 시작]
	////arr[0] = 20;
	////arr[1] = 25;
	////arr[2] = 30;
	////arr[3] = 21;
	////arr[4] = 10;
	//
	//
	//for (int i = 0; i < 5; i++) // 반복문을 사용하여 배열을 전부 나열하는 방법
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[5] = { 1 ,2, 3, 4, 5 };
	//int sum = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	sum += arr[i];
	//		printf("sum = %d\n", sum);
	//}

	int arr1[] = { 10 ,20, 30, 40, 50, 60, 70 };
	double arr2[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0 };

	int sum = 0;
	int arr1_len, arr2_len;

	printf("arr1의 크기: %d byte\n", (int)sizeof(arr1));
	printf("arr1의 크기: %d byte\n", (int)sizeof(arr2));

	arr1_len = sizeof(arr1) / sizeof(int);
	arr2_len = sizeof(arr2) / sizeof(double); // 배열 나열시 배열의 갯수

	printf("arr1_len: %d\n", arr1_len);
	printf("arr2_len: %d\n", arr2_len);

	for (int i = 0; i < arr1_len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < arr2_len; i++)
	{
		printf("%.2f ", arr2[i]);
	}
	printf("\n");
}*/