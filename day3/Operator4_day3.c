/*#include <stdio.h> //��ó���� <stdio.h> �⺻ �����ϴ� �Լ����� �������°�, �⺻���� �Լ��� ����ص� ������ �ȶ�
//����ڰ� ��������� ���� ����� ����, �⺻���� ������� <>���, ��������� ������� ""���

void PrintMessage(void); // �Լ��� �ñ״�ó
int GetMaxValue(int, int); // �Լ��� �ñ״�ó

int GetMaxValue(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

void PrintMessage(void) // �Լ�, void : �ܺηκ��� �޴°��� ����.
{
	int a, b; // {}������ �Լ����� // �Լ����� ���� ������ ����(��:a, b)�� �Լ����� �ȿ����� �۵��ϴ� "��������"�̴�.
	printf("�� �� �Է�: ");
	scanf("%d %d", &a, &b);
	printf("�� �� �߿��� ū ���� %d �Դϴ�.\n", GetMaxValue(a, b)); // a, b ���� �ٸ� �Լ��� �����ϴ� ���� Parameter Passing
}


int main(void) 
{

	/*int num;

	while (1) {
		printf("�����Է�(0:quit): ");
		scanf("%d", &num);

		if (num == 0) {
			break; // ���Ƿ� �ݺ����� �������� ������ break�� ���� ����� �ݺ����� ����.
		}

		if (num % 2 == 0) {
			printf("¦��!\n");
			continue; // ��� ���� ���ϰ�� �ٽ� �ݺ�
		}

		printf("%d\n", num);
	}
	printf("���α׷� ����\n");*/


	/*for (int i = 1; i <= 100; i++) {
		if (i % 3 != 0)
			continue;
		printf("%d\n", i);
	}*/


	// �Լ� ���� : ��ȯ��, �Լ��̸�, �Ű�����, ����



	// �����Ϸ��� ���� 1phse compiler(���������� �о� ������), 2phse compiler(����, �����ɸ�)

	// �Լ��� ����(Declaration)
	//void PrintMessage(void), int GetMaxValue(int, int) �� �Լ��� �ñ״�ó��� �θ���.
	// �Լ��� �ñ״�ó�� ������ ������ ���� �ʾƵ� �ȴ�

//}