#include<stdio.h>
#define Money 50000 // ���� ������ �ִ� ���� define���� ����

int main()
{
	int change; // �Ž����� �Ѿ�
	int item1 = 150; // 150��¥�� ��ǰ
	int item2 = 2100; // 2,100��¥�� ��ǰ
	int item3 = 6300; // 6,300��¥�� ��ǰ
	
	int total_price = item1 * 3 + item2 * 5 + item3 * 3; // 3���� ��ǰ�� ��� ������ �Ѿ�
	printf("���� �Ѿ� : %d\n", total_price);

	change = Money - total_price; // �Ž����� �Ѿ�
	printf("�Ž����� �Ѿ� : %d\n", change);
	
	int green = change / 10000; // �Ž����� �� 10,000������ ����
	int orange = (change % 10000) / 5000; //�Ž����� �� 5,000������ ����
	int blue = (change % 10000) % 5000 / 1000; //�Ž����� �� 10,00������ ����
	printf("�Ž����� �� 10,000������ ���� : %d\n", green);
	printf("�Ž����� �� 5,000������ ���� : %d\n", orange);
	printf("�Ž����� �� 1,000������ ���� : %d\n", blue);

}