#include<stdio.h>
#pragma warning(disable:4996) // scanf의 오류를 해결하기 위한 pragma

int main()
{
	int number = 0; int bit = 0;
	int tmp = 0; int result = 0;
	int binary[50];
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	printf("임의 비트 수를 입력받습니다. (정수값) : ");
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

	printf("XOR 연산 결과(이진수) : ");

	for (int i = j - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}

	printf("\n\n");

	if ((tmp ^ number) == 0)
	{
		printf("비트가 검출되지 않았습니다.\n");
	}
	else
	{
		printf("비트가 검출되었습니다.\n");
	}
	return 0;
}