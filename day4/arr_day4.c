/*#include <stdio.h>

int main(void)
{
	// �迭�� Ȱ���Ͽ� ���ڿ� ǥ�ù��

	char str[] = "Hello World!"; //���� �� 12��?
	// �迭�� ���ڿ� ������ \0(null)�� ���Ѵ�.
	// \0(null)�� ������? = ���ڿ��� ���� �ڵ����� �ٴ´�. ���ڿ��� ���� ǥ���ϴ� ����

	printf("str�� ũ��: %d\n", sizeof(str));
	printf("str[4]: %c\n", str[4]);
	printf("str 12��: %c\n", str[12]); // �ƹ��͵� �ȳ���
	printf("str 12��: %d\n", str[12]); // 0

	printf("%s\n", str); // Hello World ���

	str[5] = '\0';
	printf("%s\n", str); // Hello ������ ���, printf�� \0(null)���ڰ� ���������� �۵���

	char str2[] = { 'A', 'p', 'p', 'l', 'e' }; // \0null ���ڰ� �ִ� �迭�� ���ڿ�.
	printf("str2�� ũ��: %d\n", sizeof(str2));
	printf("%s\n", str2); // Apple�����������....



	char str[100];

	printf("�̸��Է�: ");
	scanf("%s", str);
	printf("�Է��Ͻ� �̸��� %s\n", str);

	for (int i = 0; i < 5; i++)
	{
		printf("str[%d] = %d\n", i, str[i]);
	}

}*/