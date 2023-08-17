#include <stdio.h>

/*void print_array(int* arr, int count) // �迭�� �Լ��� ���鶧 
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


void print_array(const int* arr, int count) // �Լ��ȿ��� const�� ����ϸ� ������ �ʴ� ������ �ν�
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

}


void pointer_swap(int** a, int** b) // ���� �����ͷ� �����Լ� ����ϴ¹�(�ٽ�)
{
	int* temp = *a;
	*a = *b;
	*b = temp;
}


void print_array(int(* ptr)[4], int a) // 2���� �迭�� �ּҸ� �����ͷ� �������� int(* ptr)[������ ��] 
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

	print_array(arr1, sizeof(arr1) / sizeof(arr1[0])); // �ּҿ� ���� ����

	/*int arr1[] = {1, 2, 3};
	int arr2[] = { 10, 20, 30, 40, 50 };

	print_array(arr1, sizeof(arr1) / sizeof(int));
	print_array(arr2, sizeof(arr2) / sizeof(int));


	int num1 = 100, num2 = 200;

	printf("before num1 = %d, num2 = %d\n", num1, num2);
	//int_swap(num1, num2); // call-by-value (���� ���� �Լ��� ����)
	int_swap(&num1, &num2); // call-by-reference (������ �ּҸ� �Լ��� ����)
	printf("before num1 = %d, num2 = %d\n", num1, num2);



	// �����Ϳ��� constȰ��

	int num = 20;
	const int* ptr = &num; // const�� num�� ���ȭ�Ǿ� �������� �������� �������� �����Ͱ��� ���氡��
	ptr = 100; // ����
	*ptr = 50; // �Ұ���
	num = 50;

	int num1 = 10;
	int num2 = 20;
	int* const ptr = &num1; // ������ ���� const�� ���� �������� ���� ���� �Ұ���, ������ ���氡��
	ptr = &num2; // �Ұ���
	*ptr = 100; // ����

	// const�� ��ġ������ ����� ���ϴ� ���� �ٲ��.


	// 2���� �迭

	int arr1[3][4];
	double arr2[4][5];

	printf("arr1�� ũ��: %d\n", (int)sizeof(arr1)); // 48, �迭�� ����(12) * 4����Ʈ
	printf("arr2�� ũ��: %d\n", (int)sizeof(arr2)); // 160, �迭�� ����(20) * 8����Ʈ



	// 2���� �迭�� ǥ�����
	int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }; // 2���� �迭

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			printf("%2d ", arr1[i][k]);
		}
		printf("\n");
	}


	int value = 10;
	int* ptr = &value; // int* ptr�� value�� �ּ�����
	int** dptr = &ptr; // int** dptr�� ptr�� �ּ�����
	// �������� �ּҸ� �ٸ������Ϳ� �����Ҷ��� **���������͸� ���
	int* ptr2;

	printf("%p %p\n", ptr, *dptr); // 2���� ���� ����, ptr = value�� �ּ�, *dptr = ptr�ȿ��ִ� �ּ�(value�� �ּ�)
	printf("%d %d\n", *ptr, **dptr); // 2���� ���� ���� *ptr = value�� ��, **dptr = ptr�ȿ��ִ� �ּ��� ��(value�� ��)
	ptr2 = *dptr; // *dptr = value�� �ּ�
	*ptr2 = 20; // *ptr2 = value�� ��(10)
	printf("%d %d\n", value, **dptr); // 20, 20


	// ���� �����ͷ� �����Լ� ����ϴ¹�(�ٽ�)

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
	int** dptr = ptr_arr; // 10, �迭�� ���� �ҷ��ö��� ���� ������ ���
	printf("%d %d %d\n", *(ptr_arr[0]), *(ptr_arr[1]), *(ptr_arr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2])); // �迭�ּҸ� �����Ϳ� ������ �����͸� �迭ó�� ��������

	printf("%d %d %d\n", **ptr_arr, **(ptr_arr + 1), **(ptr_arr + 2));
	printf("%d %d %d\n", **dptr, **(dptr + 1), **(dptr + 2));


	// 2�����迭

	int arr[3][4];

	printf("%p\n", arr); // �迭�� �����ּ�
	printf("%p\n", arr[0]); // �迭�� �����ּҿ� ������, 2���� �迭���� 0�� ����ϸ� �迭�� �����ּ�
	printf("%p\n", &arr[0][0]); // �迭�� �����ּҿ� ������
	printf("---------------------------\n");
	printf("%p\n", arr[1]);
	printf("%p\n", &arr[1][0]);
	printf("---------------------------\n");
	printf("%p\n", arr[2]);
	printf("%p\n", &arr[2][0]);
	printf("---------------------------\n");
	printf("sizeof(arr): %d\n", (int)sizeof(arr));
	printf("sizeof(arr[0]): %d\n", (int)sizeof(arr[0])); // Ư�� ���� sizeof�� ���ϸ� ������ ũ�Ⱑ ����
	printf("sizeof(arr[1]): %d\n", (int)sizeof(arr[1]));
	printf("sizeof(arr[2]): %d\n", (int)sizeof(arr[2]));
	printf("---------------------------\n");

    // 2���� �迭 + Ȱ��

    int arr1[3][4];
    int arr2[3][3];

    printf("arr1: %p\n", arr1);
    printf("arr1+1: %p\n", arr1 + 1);
    printf("arr1+2: %p\n", arr1 + 2); // 2���� �迭����  �迭 + 1 �ϸ� �������� + ��(���� �̵�)
	printf("---------------------------\n");
	printf("arr1[0]: %p\n", arr1[0]);
	printf("arr1[0]+1: %p\n", arr1[0] + 1);
	printf("arr1[0]+2: %p\n", arr1[0] + 2);// arr[i][k] <=> arr[i] + k
	printf("arr1[0]+3: %p\n", arr1[0] + 3); // 2���� �迭���� �迭[������] + 1 �ϸ� �������� + ��(���� �̵�)
	printf("---------------------------\n");
	printf("arr2: %p\n", arr2);
	printf("arr2+1: %p\n", arr2 + 1);
	printf("arr2+2: %p\n", arr2 + 2); // 1���� 3ĭ �̱� ������ 4����Ʈ�� �� 12����Ʈ �̵� (16������)


	//2���� �迭�� ���� ������

    int arr1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int arr2[2][3] = { {10, 20, 30}, {40, 50, 60} };
	int(*ptr1)[4] = arr1;
	int(*ptr2)[3] = arr2; // �����Ϳ� 2�����迭�� �ּҸ� �Է��Ҷ��� ���ΰ��� �Է�
	// int* ptr[] = 1���� �迭�� �ּҸ� ������ ������
	// int(*ptr)[] = 2���� �ּ��� �ּҸ� ������ ������

	// �ݺ����� ����� 2���� �迭�� ǥ�����
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