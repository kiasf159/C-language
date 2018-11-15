#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996) // scanf의 오류를 해결하기 위한 pragma

void length_Convert(double x);
void weigh_Convert(double x);

int main()
{
	double number = 0.0;
	char unit[10];
	char length[] = "길이"; char weigh[] = "무게";

	printf("단위 변환 : (길이, 무게)");
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
		printf("실행할 수 없습니다.\n");
	}
}

void length_Convert(double x)
{
	int input1 = 0, input2 = 0;
	printf("변환 될 단위 설정\n(인치 - 1번,피트 - 2번, 미터 - 3번 ,센티미터 - 4번) : ");
	scanf("%d", &input1);
	printf("변환 될 단위의 숫자 입력 : ");
	scanf("%lf", &x);
	printf("변환 시킬 단위 설정\n(인치 - 1번,피트 - 2번, 미터 - 3번 ,센티미터 - 4번) : ");
	scanf("%d", &input2);
	switch (input1)
	{
	case 1:
		if (input2 == 1)
		{
			printf("%lf인치(inch)는 %lf인치(inch)입니다.\n", x, x);
		}
		else if (input2 == 2)
		{
			printf("%lf인치(inch)는 %lf피트(ft)입니다.\n", x, x * 0.083);
		}
		else if (input2 == 3)
		{
			printf("%lf인치(inch)는 %lf미터(m)입니다.\n", x, x * 0.0254);
		}
		else if (input2 == 4)
		{
			printf("%lf인치(inch)는 %lf센티미터(cm)입니다.\n", x, x * 2.54);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	case 2:
		if (input2 == 1)
		{
			printf("%lf피트(ft)는 %lf인치(inch)입니다.\n", x, x * 12);
		}
		else if (input2 == 2)
		{
			printf("%lf피트(ft)는 %lf피트(ft)입니다.\n", x, x);
		}
		else if (input2 == 3)
		{
			printf("%lf피트(ft)는 %lf미터(m)입니다.\n", x, x * 0.3048);
		}
		else if (input2 == 4)
		{
			printf("%lf피트(ft)는 %lf센티미터(cm)입니다.\n", x, x * 30.48);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	case 3:
		if (input2 == 1)
		{
			printf("%lf미터(m)는 %lf인치(inch)입니다.\n", x, x * 39.37);
		}
		else if (input2 == 2)
		{
			printf("%lf미터(m)는 %lf피트(ft)입니다.\n", x, x * 3.28);
		}
		else if (input2 == 3)
		{
			printf("%lf미터(m)는 %lf미터(m)입니다.\n", x, x);
		}
		else if (input2 == 4)
		{
			printf("%lf미터(m)는 %lf센티미터(cm)입니다.\n", x, x * 100);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	case 4:
		if (input2 == 1)
		{
			printf("%lf센티미터(cm)는 %lf인치(inch)입니다.\n", x, x * 0.3937);
		}
		else if (input2 == 2)
		{
			printf("%lf센티미터(cm)는 %lf피트(ft)입니다.\n", x, x * 3.28);
		}
		else if (input2 == 3)
		{
			printf("%lf센티미터(cm)는 %lf미터(m)입니다.\n", x, x * 0.01);
		}
		else if (input2 == 4)
		{
			printf("%lf센티미터(cm)는 %lf센티미터(cm)입니다.\n", x, x);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	default:
		printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		break;
	}
}

void weigh_Convert(double x)
{
	int input1 = 0, input2 = 0;
	printf("변환 될 단위 설정\n(킬로그램 - 1번,온스 - 2번, 파운드 - 3번 ,그램 - 4번) : ");
	scanf("%d", &input1);
	printf("변환 될 단위의 숫자 입력 : ");
	scanf("%lf", &x);
	printf("변환 시킬 단위 설정\n(킬로그램 - 1번,온스 - 2번, 파운드 - 3번 ,그램 - 4번) : ");
	scanf("%d", &input2);
	switch (input1)
	{
	case 1:
		if (input2 == 1)
		{
			printf("%lf킬로그램(kg)은 %lf킬로그램(kg)입니다.\n", x, x);
		}
		else if (input2 == 2)
		{
			printf("%lf킬로그램(kg)은 %lf온스(oz)입니다.\n", x, x * 35.274);
		}
		else if (input2 == 3)
		{
			printf("%lf킬로그램(kg)은 %lf파운드(lb)입니다.\n", x, x * 2.205);
		}
		else if (input2 == 4)
		{
			printf("%lf킬로그램(kg)은 %lf그램(g)입니다.\n", x, x * 1000);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	case 2:
		if (input2 == 1)
		{
			printf("%lf온스(oz)는 %lf킬로그램(kg)입니다.\n", x, x * 0.028);
		}
		else if (input2 == 2)
		{
			printf("%lf온스(oz)는 %lf온스(oz)입니다.\n", x, x);
		}
		else if (input2 == 3)
		{
			printf("%lf온스(oz)는 %lf파운드(lb)입니다.\n", x, x * 0.0625);
		}
		else if (input2 == 4)
		{
			printf("%lf온스(oz)는 %lf그램(g)입니다.\n", x, x * 28.35);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	case 3:
		if (input2 == 1)
		{
			printf("%lf파운드(lb)는 %lf킬로그램(kg)입니다.\n", x, x * 0.4536);
		}
		else if (input2 == 2)
		{
			printf("%lf파운드(lb)는 %lf온스(oz)입니다.\n", x, x * 16);
		}
		else if (input2 == 3)
		{
			printf("%lf파운드(lb)는 %lf파운드(lb)입니다.\n", x, x);
		}
		else if (input2 == 4)
		{
			printf("%lf파운드(lb)는 %lf그램(g)입니다.\n", x, x * 453.59);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	case 4:
		if (input2 == 1)
		{
			printf("%lf그램(g)은 %lf킬로그램(kg)입니다.\n", x, x * 0.001);
		}
		else if (input2 == 2)
		{
			printf("%lf그램(g)은 %lf온스(oz)입니다.\n", x, x * 0.035);
		}
		else if (input2 == 3)
		{
			printf("%lf그램(g)은 %lf파운드(lb)입니다.\n", x, x * 0.0022);
		}
		else if (input2 == 4)
		{
			printf("%lf그램(g)은 %lf그램(g)입니다.\n", x, x);
		}
		else
		{
			printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		}
		break;
	default:
		printf("단위 선택에서 1~4 이외의 숫자는 확인할 수 없습니다.\n");
		break;
	}
}