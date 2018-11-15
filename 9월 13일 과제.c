#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996) // scanf�� ������ �ذ��ϱ� ���� pragma

void length_Convert(double x);
void weigh_Convert(double x);

int main()
{
	double number = 0.0;
	char unit[10];
	char length[] = "����"; char weigh[] = "����";

	printf("���� ��ȯ : (����, ����)");
	scanf("%s", unit);
	if (strcmp(unit, length) == 0)
	{
		length_Convert(number);
	}
	else if (strcmp(unit, weigh) == 0)
	{
		weigh_Convert(number);
	}
	else
	{
		printf("������ �� �����ϴ�.\n");
	}
}

void length_Convert(double x)
{
	int input1 = 0, input2 = 0;
	printf("��ȯ �� ���� ����\n(��ġ - 1��,��Ʈ - 2��, ���� - 3�� ,��Ƽ���� - 4��) : ");
	scanf("%d", &input1);
	printf("��ȯ �� ������ ���� �Է� : ");
	scanf("%lf", &x);
	printf("��ȯ ��ų ���� ����\n(��ġ - 1��,��Ʈ - 2��, ���� - 3�� ,��Ƽ���� - 4��) : ");
	scanf("%d", &input2);
	switch (input1)
	{
	case 1:
		if (input2 == 1)
		{
			printf("%lf��ġ(inch)�� %lf��ġ(inch)�Դϴ�.\n", x, x);
		}
		else if (input2 == 2)
		{
			printf("%lf��ġ(inch)�� %lf��Ʈ(ft)�Դϴ�.\n", x, x * 0.083);
		}
		else if (input2 == 3)
		{
			printf("%lf��ġ(inch)�� %lf����(m)�Դϴ�.\n", x, x * 0.0254);
		}
		else if (input2 == 4)
		{
			printf("%lf��ġ(inch)�� %lf��Ƽ����(cm)�Դϴ�.\n", x, x * 2.54);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	case 2:
		if (input2 == 1)
		{
			printf("%lf��Ʈ(ft)�� %lf��ġ(inch)�Դϴ�.\n", x, x * 12);
		}
		else if (input2 == 2)
		{
			printf("%lf��Ʈ(ft)�� %lf��Ʈ(ft)�Դϴ�.\n", x, x);
		}
		else if (input2 == 3)
		{
			printf("%lf��Ʈ(ft)�� %lf����(m)�Դϴ�.\n", x, x * 0.3048);
		}
		else if (input2 == 4)
		{
			printf("%lf��Ʈ(ft)�� %lf��Ƽ����(cm)�Դϴ�.\n", x, x * 30.48);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	case 3:
		if (input2 == 1)
		{
			printf("%lf����(m)�� %lf��ġ(inch)�Դϴ�.\n", x, x * 39.37);
		}
		else if (input2 == 2)
		{
			printf("%lf����(m)�� %lf��Ʈ(ft)�Դϴ�.\n", x, x * 3.28);
		}
		else if (input2 == 3)
		{
			printf("%lf����(m)�� %lf����(m)�Դϴ�.\n", x, x);
		}
		else if (input2 == 4)
		{
			printf("%lf����(m)�� %lf��Ƽ����(cm)�Դϴ�.\n", x, x * 100);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	case 4:
		if (input2 == 1)
		{
			printf("%lf��Ƽ����(cm)�� %lf��ġ(inch)�Դϴ�.\n", x, x * 0.3937);
		}
		else if (input2 == 2)
		{
			printf("%lf��Ƽ����(cm)�� %lf��Ʈ(ft)�Դϴ�.\n", x, x * 3.28);
		}
		else if (input2 == 3)
		{
			printf("%lf��Ƽ����(cm)�� %lf����(m)�Դϴ�.\n", x, x * 0.01);
		}
		else if (input2 == 4)
		{
			printf("%lf��Ƽ����(cm)�� %lf��Ƽ����(cm)�Դϴ�.\n", x, x);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	default:
		printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		break;
	}
}

void weigh_Convert(double x)
{
	int input1 = 0, input2 = 0;
	printf("��ȯ �� ���� ����\n(ų�α׷� - 1��,�½� - 2��, �Ŀ�� - 3�� ,�׷� - 4��) : ");
	scanf("%d", &input1);
	printf("��ȯ �� ������ ���� �Է� : ");
	scanf("%lf", &x);
	printf("��ȯ ��ų ���� ����\n(ų�α׷� - 1��,�½� - 2��, �Ŀ�� - 3�� ,�׷� - 4��) : ");
	scanf("%d", &input2);
	switch (input1)
	{
	case 1:
		if (input2 == 1)
		{
			printf("%lfų�α׷�(kg)�� %lfų�α׷�(kg)�Դϴ�.\n", x, x);
		}
		else if (input2 == 2)
		{
			printf("%lfų�α׷�(kg)�� %lf�½�(oz)�Դϴ�.\n", x, x * 35.274);
		}
		else if (input2 == 3)
		{
			printf("%lfų�α׷�(kg)�� %lf�Ŀ��(lb)�Դϴ�.\n", x, x * 2.205);
		}
		else if (input2 == 4)
		{
			printf("%lfų�α׷�(kg)�� %lf�׷�(g)�Դϴ�.\n", x, x * 1000);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	case 2:
		if (input2 == 1)
		{
			printf("%lf�½�(oz)�� %lfų�α׷�(kg)�Դϴ�.\n", x, x * 0.028);
		}
		else if (input2 == 2)
		{
			printf("%lf�½�(oz)�� %lf�½�(oz)�Դϴ�.\n", x, x);
		}
		else if (input2 == 3)
		{
			printf("%lf�½�(oz)�� %lf�Ŀ��(lb)�Դϴ�.\n", x, x * 0.0625);
		}
		else if (input2 == 4)
		{
			printf("%lf�½�(oz)�� %lf�׷�(g)�Դϴ�.\n", x, x * 28.35);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	case 3:
		if (input2 == 1)
		{
			printf("%lf�Ŀ��(lb)�� %lfų�α׷�(kg)�Դϴ�.\n", x, x * 0.4536);
		}
		else if (input2 == 2)
		{
			printf("%lf�Ŀ��(lb)�� %lf�½�(oz)�Դϴ�.\n", x, x * 16);
		}
		else if (input2 == 3)
		{
			printf("%lf�Ŀ��(lb)�� %lf�Ŀ��(lb)�Դϴ�.\n", x, x);
		}
		else if (input2 == 4)
		{
			printf("%lf�Ŀ��(lb)�� %lf�׷�(g)�Դϴ�.\n", x, x * 453.59);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	case 4:
		if (input2 == 1)
		{
			printf("%lf�׷�(g)�� %lfų�α׷�(kg)�Դϴ�.\n", x, x * 0.001);
		}
		else if (input2 == 2)
		{
			printf("%lf�׷�(g)�� %lf�½�(oz)�Դϴ�.\n", x, x * 0.035);
		}
		else if (input2 == 3)
		{
			printf("%lf�׷�(g)�� %lf�Ŀ��(lb)�Դϴ�.\n", x, x * 0.0022);
		}
		else if (input2 == 4)
		{
			printf("%lf�׷�(g)�� %lf�׷�(g)�Դϴ�.\n", x, x);
		}
		else
		{
			printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		}
		break;
	default:
		printf("���� ���ÿ��� 1~4 �̿��� ���ڴ� Ȯ���� �� �����ϴ�.\n");
		break;
	}
}