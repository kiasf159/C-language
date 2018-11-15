#include<stdio.h>
#define Money 50000 // 현재 가지고 있는 돈을 define으로 정의

int main()
{
	int change; // 거스름돈 총액
	int item1 = 150; // 150원짜리 상품
	int item2 = 2100; // 2,100원짜리 상품
	int item3 = 6300; // 6,300원짜리 상품
	
	int total_price = item1 * 3 + item2 * 5 + item3 * 3; // 3가지 상품을 모두 구매한 총액
	printf("구매 총액 : %d\n", total_price);

	change = Money - total_price; // 거스름돈 총액
	printf("거스름돈 총액 : %d\n", change);
	
	int green = change / 10000; // 거스름돈 중 10,000원권의 개수
	int orange = (change % 10000) / 5000; //거스름돈 중 5,000원권의 개수
	int blue = (change % 10000) % 5000 / 1000; //거스름돈 중 10,00원권의 개수
	printf("거스름돈 중 10,000원권의 개수 : %d\n", green);
	printf("거스름돈 중 5,000원권의 개수 : %d\n", orange);
	printf("거스름돈 중 1,000원권의 개수 : %d\n", blue);

}