#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void clear_input_buffer(void) // �޸𸮾� ���ۿ� �����ִ� �Է°��� \n(����)�� ����ִ� �Լ�
{
	while (getchar() != '\n'); // \n�� ���������� ���ѹݺ�
}*/

int main(int argc, char* argv[]) // argv�� �ܺο��� ������ ���� ������ �ִ�(����, ���ڿ�), ����� �ʿ�������� void
{
	/*printf("main�Լ��� �Ű����� ��: %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("argc[%d]: %s\n", i, argv[i]);
	}

	int num1, num2;
	if (argc < 3)
	{
		printf("Usage: ���α׷��� ����1 ����2\n");
		exit(0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("sum: %d\n", num1 + num2);


	// ���� �Է°� ��� ���

	// getchar = ����1���� �Է¹���, putchar = ���� 1���� �����
	char ch1;

	ch1 = getchar(); // ���ڸ� �Է¹޴� ���
	printf("putchar-> ");
	putchar(ch1);
	printf("\n"); 


	// getc = ����1���� �Է¹���, putc = ���� 1���� ���
	char ch1;

	ch1 = getc(stdin); 
	printf("putc-> ");
	putc(ch1, stdout);
	printf("\n");


	char ch1;
	// stdin = � ���Ͽ��� �Է� �� ����� �Ұ�����(stdin, stdout�� Ű����)
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

	//���ڿ��� �Է°� ��¹��
	char str[100];
	fgets(str, sizeof(str), stdin);
	printf("puts-> ");
	puts(str);
	printf("fputs-> ");
	fputs(str, stdout); // ��½� puts�� fputs ���� �ϳ� ���


	char id[7], name[10];

	fputs("������� �Է�: ", stdout);
	fgets(id, sizeof(id), stdin);
	clear_input_buffer();

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�������: %s\n", id);
	printf("�̸�: %s\n", name);


	char* str1 = "C Programming";
	char str2[100];
	char str3[100];
	char str4[] = " Language";
	char* str5 = " Class Mate";

	printf("length of str1: %d\n", (int)strlen(str1)); // strlen = null�� �� ������ ����
	printf("length of str1: %d\n", (int)strlen(str1+5)); // �ּ��� ���������� null������ ����

	strcpy(str2, str1); // (�������� �ּ�, �Է� ��)
	printf("strcpy(str2, str1) -> %s\n", str2);

	strncpy(str3, str1, strlen(str1)); // �������� �ּ�, �Է� ��, ���� ��
	str3[strlen(str1)] = '\0';
	printf("strncpy(str3, str1, strlen(str1)) -> %s\n", str3);

	// ���ڸ� ���� = strcat
	strcat(str3, str4);
	printf("strcat(str3, str4)-> %s\n", str3);

	strncat(str3, str5, 6); // ���� ���� ����
	printf("strncat(str3, str5, 6)-> %s\n", str3);

	char* str6 = "C Programming";
	char* str7 = "C Programmin";
	char* str8 = "C Programming Language";
	char* str9 = "C Progrbmming";
	char* str10 = "C Prpgrbmmin";

	//strcmp = ���ڰ��� ��
	// ������ �ڵ�� ��� ������ 1, ������ -1, ������ 0���� ǥ��
	printf("strcmp(str6, str7)-> %d\n", strcmp(str6, str7)); // 1, ù��° ������ 2��° ���� ��
	printf("strcmp(str6, str8)-> %d\n", strcmp(str6, str8)); // -1, 
	printf("strcmp(str6, str6)-> %d\n", strcmp(str6, str6)); // 0, 
	printf("strcmp(str6, str9)-> %d\n", strcmp(str6, str9)); // -1, ���ڿ��� ���̰� ������ ������ �ƽ�Ű�ڵ��� ������ ���
	printf("strcmp(str9, str6)-> %d\n", strcmp(str9, str6)); // 1, 
	printf("strcmp(str6, str10)-> %d\n", strcmp(str6, str10)); // 

	// strcmp Ȱ��
	if (!strcmp(str6, str7)) // ������ ���� 0���� �������� if���� ��0�� fail�� �ν��ϹǷ� !�� �ٿ� ������ �������
	{
		printf("str6, str7�� ������");
	}
	else
	{
		printf("str6, str7�� �������� ����\n");
	}

	if (!strncmp(str6, str7, 4)) // strcmp�� ������ ������ŭ�� ����
	{
		printf("str6, str7�� ������");
	}
	else
	{
		printf("str6, str7�� �������� ����");
	}

	// ���� ���� "����ü"
	// c��� ������ �˰��� ����Ʈ���� ����
	
	// ����

    int ar[] = { 50, 64, 39, 66, 93, 79, 0, 100 };
    char br[10][8]; // �迭�� ���ڵ��� 10������ ����� ����׷��� ����� 10������ *, 1������ 0

	�����
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