#include <stdio.h>

//int main(void)
//{
	//char ch1 = 'A', ch2 = 66;
	//int int_ch1 = 'D', int_ch2 = 70;

	//printf("%c %d\n", ch1, ch1); //65
	//printf("%c %d\n", ch2, ch2); //66
	//printf("%c %d\n", int_ch1, int_ch1); //68
	//printf("%c %d\n", int_ch2, int_ch2); //70


	////��� ǥ�� (�ٽ�)
	//int num1;
	//const int MAX_LEN = 100; // const = �ɺ��� ���(������ �ʴ� ���� ��)

	///*const int MAX_LEN2;
	//MAX_LEN2 = 200;*/    // ������� Ʋ�����(��� ����� �ٸ����� ����ȵ�)

	//num1 = MAX_LEN + 10;
	//printf("%d\n", num1);


	////�ڵ� ����ȯ (�ٽ�)
	//double double_val = 123; // ���δٸ� ������Ÿ���� ������ ������ Ÿ���� ����Ÿ�Ժ��� �� ���� ������ �����Ҷ� �ڵ� ����ȯ
	//int int_val = 3.141592; // ������ �Ǽ��϶� ���� ������ Ÿ�� ���� �ڵ����� ��ȯ������ �Ҽ��� �Ʒ��� �����
	//int int_val2 = 129;
	//char ch = int_val2; // chat ������ 128���� ǥ��, 129�̻� ǥ���� ������ ǥ���ɼ� ����  

	//printf("%f\n", double_val);
	//printf("%d\n", int_val);
	//printf("%d\n", ch); // 129�� ���;� ������ 129�� 2������ 00000000 00000000 00000000 10000001(129) ������ char ������Ÿ�Կ����� 10000001���� ǥ��, ù��° 1�� ������ ǥ���ǹǷ� -�� ��, 2�� ������ 01111111�� �ǹǷ� ch�� -127���� ǥ����


	// �Ǵٸ� �ڵ� ����ȯ
	//short num1 = 10, num2 = 20;
	//short num3 = num1 + num2;
	//printf("%d\n", num3); // �޸��� 2����Ʈ�� cpu�� 4����Ʈ�� ��ȯ�Ͽ� ����� �ٽ� �޸𸮿��� 2����Ʈ�� ��ȯ �� ���� (integral promotion)


	//double num = 1.23 + 10; // ����Ÿ�԰� ��ƮŸ���� ����� ǥ�������� �� ���� ��ƮŸ�� ������ ����Ÿ������ ��ȯ�Ǿ� ����
	//printf("%f\n", num);

	// ���� ����ȯ
	//int num1 = 3, num2 = 4; // ���� 3�� 4�� 3/4�� ���� ���� ������� ���� 0.00000���� ǥ����
	//double result;          // ������ ������ Ÿ���� �ٲܽ� �Ǽ��� ǥ�� ����
	//result = (double)num1 / num2; // ������ ������ Ÿ���� �ٲܶ� ()�ȿ� ������ Ÿ���� �ִ´�.
	//printf("result = %f\n", result);


	//���ڿ� ���
	/*printf("%s, %s, %s\n", "C class", "C++ class", "Java class");

	printf("%-8s %14s %5s\n", "��  ��", "�� ��", "�� ��");
	printf("---------------------------------------------\n");
	printf("%-8s %14s %5d\n", "ȫ�浿", "����ѱ�", 3);
	printf("%-8s %14s %5d\n", "�κ���", "Ȱ���", 4);
	printf("%-8s %14s %5d\n", "�輱��", "���ġ��", 2);*/


	//�ݺ��� 3����
	//ù��° �ݺ���
	/*int sum = 0;*/
	// �ڵ���()�ȿ� �����Ǿ��ִ� ������ local variavle(��������),          Auto variable(�ڵ�����)
	//for (int i = 1; i < 11; i++) {
	//	sum += i;
	//}
	//printf("%d\n", sum); // 55

	//int sum = 0;
	//int i = 1;
	//for (; i < 11; i++) {
	//	sum += i;
	//}
	//printf("%d\n", sum);

	//int sum = 0; //�ݺ����� Nested Loop
	//
	//for (int k = 0; k < 10; k++) {
	//	for (int i = 0; i < 10; i++) {
	//		sum += i;
	//	}
	//}
	//printf("%d\n", sum);


	/*int sum = 0;

	for (int i = 0; i < 10; i += 2) {
			sum += 1;
		}
	printf("%d\n", sum);*/


	/*int sum = 0;
	int k = 1;
	for (int i = 0; i < 10; i += 2, k++) {
		sum += 1;
	}
	printf("%d\n", sum);
	printf("%d\n", k);*/


	//int sum = 0; // ���ѷ��� 
	//int k = 1;
	//for (;;) {
	//	sum += 1;
	//}
	//printf("%d\n", sum);
	//printf("%d\n", k);


  //  int sum = 0;

  //  int i = 1;
  //  while (i < 11) {
	 //   sum += i;
		//i++;
  //  }

  //  printf("%d\n", sum);



//// 3��° �ݺ��� (���ǹ��� �ڷΰ��� �ݺ���)
//int sum = 0;
//
//int i = 1;
//do {
//	sum += i;
//	i++;
//} while (i < 11); // �ݺ��� ���� ; �����
//
//printf("%d\n", sum);


   /* int n = 0;
	printf("������ �� �Է�: ");
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", n, n, i, n * i);
	}*/

	// 4 X 1 =4
	// 4 X 2 =8
	// ...

   /* int n = 0;

	printf("������ �� �Է�: ");
	scanf("%d", &n);


	for (int dan = 2; dan < 10; dan++) {
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", dan, i, dan * 1);
		}
		printf("--------------------------------\n");*/

		//for (int i = 1; i <= 100; i++) {
		//	if (i == 50) {//if (50)
		//		printf("%s\n", "��!");
		//	}
		//	}
		//
		//for (int i = 1; i <= 100; i++) {
		//	if (i % 3 == 0 || i % 4 == 0) {
		//		printf("%d\n", i);
		//	}
		//}




//int num; // if else���� ���� �ϳ��� ������ ���� ����
//scanf("%d", &num);
//
//if (num % 2 == 0) {
//	printf("�Է��Ͻ� ���� %d�� ¦���Դϴ�\n", num);
//}
//else {
//	printf("�Է��Ͻ� ���� %d�� Ȧ���Դϴ�\n", num);
//}
//printf("���α׷� ����\n");


//int num;
//double number1, number2, result;
//char select;
//
//printf("A:���� B:���� C:���� D:������\n");
//print("�����ϼ���: ");
//scanf("%c", &select);
//printf("�Ǽ� 2�� �Է��ϼ���: ");
//scanf("%lf %lf", &number1, &number2);

//if (num == 1) {
//	result = number1 + number2;
//}
//else if (num == 2) {
//	result = number1 - number2;
//}
//else if (num == 3) {
//	result = number1 * number2;
//}
//else {
//	result = number1 / number2;
//}

//switch (select)
//{
//	
//		case 'A';
//		case 'a';// case�� ����Ÿ�Ը� ��밡�� (char�� ����Ÿ������ �̷���� ��밡��)
//		result = number1 + number2; 
//		break; // �빮�� �ҹ��� ���� �������϶� ���
//		case 'B';
//			case 'b';
//			result = number1 - number2;
//			break;
//			case 'C';
//				case 'c';
//			result = number1 * number2;
//			break;
//			default;
//			result = number1 / number2;
//
//}
//printf("�����: %f\n", result);
//}