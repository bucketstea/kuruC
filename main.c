#include <stdio.h>
#include "main.h"

int main(void){
	int value;
	int i,j,i1,i2;
	double pi = 3.14159;
	/*--▼test1----------------------------*/
	int softdrink;
	int milk;
	int total;
	int recievePayment;
	double taxRate;
	int change;
	/*--▲test1----------------------------*/
	value = 100;
	i = 40;
	j = 13;
	i1 = i/j;
	i2 = i%j;
	printf("hello,\tword\n");
	printf("%d人+%d人=%d人\n", 123, 77, 123+77);
	printf("%d\n", (1+value) * value / 2);
	printf("%f\n", 10.0 + 3.0);
	printf("%f\n", 10.0 - 3.0);
	printf("%f\n", 10.0 * 3.0);
	printf("%f\n", 10.0 / 3.0);
	printf("i=%d\n", i);
	printf("%d ÷ %d = %d 余り%d\n", i, j, i1, i2);
	i1 += i2;
	printf("%03d\n", i1);
	i1++;
	printf("%03d\n", i1);
	i1 = 360 * 1.05;
	printf("%03d\n", (int)i1);
	printf("%6.2f\n", pi);
	/*--▼cap5-----------------------------*/
	printf("------------cap5----------\n");
	softdrink = 198;
	milk =138;
	taxRate = 0.05;
	total = (softdrink + milk * 2) * (taxRate + 1.0);
	recievePayment = 1000;
	change = recievePayment - (int)total;
	printf("%d\n", change);
	printf("end\n");
	/*--cap5.end-----------------------*/
	/*--▼cap6-------------------------*/
	printf("------------cap6----------\n");
	printf("整数を入力してください:");
	scanf("%d", &input1);
	printf("output1=%d\n", input1);
	printf("実数を入力してください:");
	scanf("%lf", &input2);
	printf("output2=%.2f\n", input2);
	printf("シグマ計算をします。最小値、最大値の順に半角スペースで区切って入力してください。:");
	scanf("%d%d", &sigInputMin, &sigInputMax);
	sigOutput = (sigInputMin + sigInputMax) * (sigInputMax - sigInputMin + 1) / 2;
	printf("%d〜%dの合計は%dです！！！\n", sigInputMin, sigInputMax, sigOutput);
	printf(" 定価を入力してください:");
	scanf("%d", &listPrice);
	discount09 = (int)(listPrice * 0.9);
	discount07 = (int)(listPrice * 0.7);
	discount05 = (int)(listPrice * 0.5);
	discount02 = (int)(listPrice * 0.2);
	printf("定価＝%d\n", listPrice);
	printf("1割引＝%d\n", discount09);
	printf("3割引＝%d\n", discount07);
	printf("5割引＝%d\n", discount05);
	printf("8割引＝%d\n", discount02);
	/*--cap6-end-----------------------*/
	return 0;
}
