#include <stdio.h>

//static int total; // ��������(Global Variable) ���α׷��� ���۵ǰ� ����ɶ����� �����ֱ� ������ �������� ������ ������
//static : �� ���Ͽ����� ���ٰ����ϰ� �ٸ����Ͽ����� ������ �ȵǴ� �����Լ�

//void Add(int a) {
//	static int total; // Add�Լ� �ȿ��� ���� �����Լ��̱� ������ �̰������� ��밡��, Add �Լ��� ��볡���� �����Լ��� ��������
//	total += a;
//	printf("total = %d\n", total);
//    // �Լ��� �ѹ� ����� �ٽû�� �Ҷ� ������ 2�� ���� �Ǿ� ������ ������ Static�� 2�� ���� �ڵ����� ���Ǹ� ������
//}
//
//int main(void)
//{
//	/*int num = 0, temp = 0;
//
//	printf("total = %d\n", total);
//	Add(5);
//	printf("total = %d\n", total);
//	Add(7);
//	printf("total = %d\n", total);
//
//	printf("num = %d\n", num);
//	printf("temp = %d\n", temp);
//	return 0;*/
//
//	int num;
//	Add(5);
//	num = 0;
//	//total++;
//	Add(10);
//
//	
//}