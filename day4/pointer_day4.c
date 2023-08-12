/*#include <stdio.h>

int main(void)
{
	int a = 100, b = 100;
	int* p = NULL; //*������ ǥ�ù��, int* p(��Ʈ �� ������), intŸ���� �ּҸ� �����Ҽ� �ִ� ����

	p = &a; // &�� �ҷ����ٴ� ������, ����a�� �ּҸ� p�� �����Ѵ�. p�� ũ��� 64bit = 8byte

	*p += 30; // *�� ��Ȱ�� �����Ͱ� ������ �ִ� �ּҸ� �ҷ�����.

	p = &b;
	*p += 50;

	printf("a = %d, b = %d\n", a, b);

	int arr[3] = { 10, 20, 30 };

	printf("�迭�̸�: %p\n", arr);
	// arr = 100; �迭�� �̸��� ������ ���(�ּҰ��� ������ �־� ���� �Ұ���) ��� �� �մϴ�.
	printf("arr[0]: %p\n", &arr[0]);
	printf("arr[1]: %p\n", &arr[1]);
	printf("arr[2]: %p\n", &arr[2]);

	
	int int_arr[3] = { 10, 20, 30 };
	double double_arr[3] = { 1.0, 2.0, 3.0 };

	printf("%d %g\n", *int_arr, *double_arr); // *��  �ּ� ������ ���� ������, &�� �ּҸ� �ҷ���

	*int_arr += 10;
	*double_arr += 10.5;
	printf("%d %g\n", int_arr[0], double_arr[0]); // 20, 20.5



	int arr[3] = { 10, 20, 30 };
	int* ptr = arr; // �迭�� �ּҸ� �����Ϳ� �����ϸ� �����͸� �迭�� �Ȱ��� ��� ����

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]); 


	int int_arr[3] = { 10, 20, 30 };
	double double_arr[3] = { 1.0, 2.0, 3.0 };
	int* int_ptr = int_arr;
	double* double_ptr = double_arr;

	printf("%d\n", *int_ptr); // 10
	printf("%d\n", *(int_ptr + 1)); // 20, (int_arr�� �ּ� + int�� 4byte = �迭���� 4����Ʈ �̵�)�� *�� ���� �ҷ�����.
	printf("%d\n", *int_ptr + 1); // 11, (int_arr�� �� 10) + 1
	printf("%d\n", *int_ptr + 2); // 11, (int_arr�� �� 10) + 1

	printf("%g\n", *double_ptr);
	printf("%g\n", *(double_ptr + 1));
	printf("%g\n", *(double_ptr + 2)); // ������ Ÿ���� byteũ�⿡ ���� �ּҿ� �ִ� �迭���� +�Ǵ� byte���� �޶���


	char str1[] = "Array string!";
	printf("size of str1: %d\n", sizeof(str1)); // 14(null �� ���Ե�)
	printf("%s\n", str1);
	printf("------------------\n");

	char* str2 = "Constant string!";
	printf("size of str2: %d\n", sizeof(str2)); // 14(null �� ���Ե�)
	printf("%s\n", str2);

	printf("------------------\n");  // �迭�� �� ���� ��ȯ�� ������ �����Ϳ� �� ���� ������ �ȵ�

	str1[4] = 'z';
	str2[4] = 'e';
	printf("%s\n", str1);
	printf("%s\n", str2);


	int num1 = 10, num2 = 20, num3 = 3;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d %d\n", *arr[0], **arr); // 10, 10
	printf("%d %d\n", *arr[1], **(arr+1)); 
	// ** = ���� ����Ʈ(ù��° * �� �迭���� �ּ��� �ҷ�����, �ι�° * �� �ҷ��� �ּ��� ���� �ҷ��´�.)
	// arr+1�� �ּ��� ũ�� 8byte��ŭ �̵��Ͽ� &num2 �� �̵��ϰ�
	// ù��° * �� arr�迭���� �ּҸ� �ҷ�����, �ι�° * �� �ҷ��� �ּ��� ���� �ҷ��´�. 


	char* strArr[3] = { "first", "Second", "Third" }; // �� ���ڿ����� �ּҰ��� ������ �ִ°�

	printf("%s %s\n", strArr[0], *strArr);   
	printf("%s %s\n", strArr[1], *(strArr+1));
	printf("%s %s\n", strArr[2], *(strArr+2));
	// strArr[]�� �迭�� ���ϰ�, strArr�� �迭���� �ּ�, *strArr�� �ּ��� ���� �ҷ��´�.

	int num = 10;

	scanf("%d", &num); //
	printf("%d\n", num);

	char str[100];
	scanf("%s", str); // str�� &(�ּ� �ҷ�����)�� �Ⱥ��̴� ������ �迭�� �̸��� �ּҿ����� �ϱ� ����.
	printf("%s\n", str);


	char s[] = "Hello";
	char* s2 = "Worid";
	char* s3; // �����ϴ� �Ǽ�, 8byte ������ �ǹǷ� 
    scanf("%s", s3); 

    
	
	
	// ���ܹ���
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