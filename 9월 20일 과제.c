#include<stdio.h>
#pragma warning(disable:4996) // scanf�� ������ �ذ��ϱ� ���� pragma

int main()
{
	int number = 0; int bit = 0;
	int tmp = 0; int result = 0;
	int binary[50];
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);
	printf("���� ��Ʈ ���� �Է¹޽��ϴ�. (������) : ");
	scanf("%d", &bit);
	tmp = number << bit;
	result = tmp ^ number;

	int j = 0;
	for (int i = 0; ;i++)
	{
		binary[j] = result % 2;
		result = result / 2;
		j++;
		if (result == 0)
		{
			break;
		}
	}

	printf("XOR ���� ���(������) : ");

	for (int i = j - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}

	printf("\n\n");

	if ((tmp ^ number) == 0)
	{
		printf("��Ʈ�� ������� �ʾҽ��ϴ�.\n");
	}
	else
	{
		printf("��Ʈ�� ����Ǿ����ϴ�.\n");
	}
	return 0;
}