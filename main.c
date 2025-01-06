#include <stdio.h>
#include "main.h"
#ifdef _WIN32
#define scanf scanf_s
#endif

/*********************
***プロトタイプ宣言***
*********************/
int calPrice(void);
int olympic(int);
int whois(void);
int japaneseMonthName(void);
int tableKuku(void);
int whenExceed(void);
int testScoreCheck(void);
int sum(int, int);
int countfunc(void);

//test

/*********************
***main関数***********
*********************/
int main(void){
	/*--▼cap5-----------------------------
	printf("------------cap5----------\n");
	
	//変数宣言
	int value = 100;
	int i = 40, j = 13, i1 = i/j, i2 = i%j;
	double pi = 3.14159;
	
	printf("initial test...\n");
	printf("hello,\tword\n");
	printf("%d people + %d people = %d people\n", 123, 77, 123+77);
	printf("%d\n", (1+value) * value / 2);
	printf("%f\n", 10.0 + 3.0);
	printf("%f\n", 10.0 - 3.0);
	printf("%f\n", 10.0 * 3.0);
	printf("%f\n", 10.0 / 3.0);
	printf("i = %d\n", i);
	printf("%d devided by %d is %d surplus %d\n", i, j, i1, i2);
	i1 += i2;
	printf("%03d\n", i1);
	i1++;
	printf("%03d\n", i1);
	i1 = 360 * 1.05;
	printf("%03d\n", (int)i1);
	printf("%6.2f\n", pi);
	
	softdrink = 198;
	milk =138;
	taxRate = 0.05;
	total = (softdrink + milk * 2) * (taxRate + 1.0);
	recievePayment = 1000;
	change = recievePayment - (int)total;
	printf("%d\n", change);
	printf("end\n");

	/*--cap5.end-----------------------*/
	/*--▼cap6-------------------------
	printf("------------cap6----------\n");
	
	printf("Enter a integer:");
	scanf("%d", &input1);
	printf("output1 is %d\n", input1);
	printf("Enter a real number may include a decimal:");
	scanf("%lf", &input2);
	printf("output2 is %.2f\n", input2);
	
	/*--cap6-end-----------------------*/

	/*--cap7---------------------------
	printf("------------cap7----------\n");
	calPrice();
	
	printf("Enter year(AD):");
	scanf("%d", &inputAD);

	switch (olympic(inputAD)) {
	case 1:
		printf("summer\n");
		break;
	case 2:
		printf("winter\n");
		break;
	case 3:
		printf("non\n");
		break;
	}

	/*--cap7-end-----------------------*/
	/*--cap8---------------------------
	printf("------------cap8----------\n");
	whois();
	japaneseMonthName();

	/*--cap8-end-----------------------*/
	/*--cap9---------------------------
	printf("------------cap9----------\n");
	tableKuku();

	/*--cap9-end-----------------------*/
	/*--cap10--------------------------
	printf("------------cap10---------\n");
	whenExceed();
	testScoreCheck();

	/*--cap10-end----------------------*/
	/*--cap11--------------------------*/
	printf("This executes a sigma calculation. Enter the Min and Max values separated by a space:");
	scanf("%d%d", &sigInputMin, &sigInputMax);
	sigOutput = sum(sigInputMin, sigInputMax);
	printf("The sum of %d to %d is %d!\n", sigInputMin, sigInputMax, sigOutput);

	/*--cap11-end----------------------*/
	/*--cap12--------------------------*/
	countfunc();
	countfunc();
	countfunc();
	
	/*--cap12-end----------------------*/
	/*--cap13--------------------------*/
	int array[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Enter a %dth number :", i+1);
		scanf("%d", &array[i]);
	}

	printf("arraysize is %d\n", sizeof(array));
	printf("elementsize is %d\n", sizeof(array[2]));

	for(i = 0; i < sizeof(array) / sizeof(array[0]); i++){
		printf("array[%d] = %d\n", i, array[sizeof(array) / sizeof(array[0]) -1 - i]);
	}
	
	/*--cap13-end----------------------*/

	return 0;
}

/*end func main***************************************************************************/

int countfunc(void){
	count++;
	printf("%d\n", count);
	return 0;
}
/******************
 * 割引計算*********
******************/
int calPrice(void) {
	printf(" Enter a list price:");
	scanf("%d", &listPrice);
	discount09 = (int)(listPrice * 0.9);
	discount07 = (int)(listPrice * 0.7);
	discount05 = (int)(listPrice * 0.5);
	discount02 = (int)(listPrice * 0.2);
	discount500 = (int)(listPrice - 500);
	printf("List Price is %d\n", listPrice);
	printf(".10 off is %d\n", discount09);
	printf(".30 off is %d\n", discount07);
	printf("The harf price is %d\n", discount05);
	printf(".80 off is %d\n", discount02);

	if (!(!(discount500)) && discount500 >= 0) {
		printf("discount500 is %d yen!\n", discount500);
	}
	else if (discount500 < 0) {
		printf("discount500 is unavailable... it's %d yen.\n", discount500);
		discount500 = 0;
		printf("discount500 is to be 0 yen.\n");
	}
	else {
		printf("discount500 is free!!\n");
	}
	return 0;
}

/******************
 * オリンピック開催
******************/
int olympic(int inputAD) {
	if (inputAD % 4 == 0) {
		heldOlympic = 1;
	}
	else if (inputAD % 4 == 2) {
		heldOlympic = 2;
	}
	else {
		heldOlympic = 0;
	}
	return heldOlympic;
}

/*****************
 * ドラえもんキャラ
******************/
int whois(void) {
	printf("Enter a Nomber:");
	scanf("%d", &inputNo);

	switch (inputNo) {
	case 1:
		printf("Nobita\n");
		break;
	case 2:
		printf("Sizuka\n");
		break;
	case 3:
		printf("Takeshi\n");
		break;
	case 4:
		printf("SuneO\n");
		break;
	default:
		printf("nobody!\n");
		break;
	}
	return 0;
}

/*****************
 * 月の和名
******************/
int japaneseMonthName(void){
	printf("Enter a Month:");
	scanf("%d", &inputMM);

	switch (inputMM) {
	case 1:
		printf("Mutsuki\n");
		break;
	case 2:
		printf("Kisaragi\n");
		break;
	case 3:
		printf("Yayoi\n");
		break;
	case 4:
		printf("Uzuki\n");
		break;
	case 5:
		printf("Satsuki\n");
		break;
	case 6:
		printf("Minatsuki\n");
		break;
	case 7:
		printf("Fumitsuki\n");
		break;
	case 8:
		printf("Hazuki\n");
		break;
	case 9:
		printf("Nagatsuki\n");
		break;
	case 10:
		printf("Kannazuki\n");
		break;
	case 11:
		printf("Shimotsuki\n");
		break;
	case 12:
		printf("Shiwasu\n");
		break;
	default:
		printf("non!\n");
		break;
	}
	return 0;
}

/******************
 * 九九表
*******************/
int tableKuku(void) {
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%2d_", i * j);
		}
		printf("\n");
	}
	return 0;
}

/******************************
 * 1000000円を超えるまで累乗する
*******************************/
int whenExceed(void) {
	while (money < 1000000) {
		printf("%d yen\n", money);
		money *= 2;
		month++;
	}
	printf("Exceeded 10,000yen. It's %d yen at %d th month.\n", money, month);
	return 0;
}

/*********************************
 * 点数入力バリデーションチェック
**********************************/
int testScoreCheck(void){
	do {
		if (testScore < 0 || testScore > 100) {
			printf("The test score you input is wrong.\nRe: ");
		}
		printf("Enter the test score:");
		scanf("%d", &testScore);
	} while (testScore < 0 || testScore > 100);
	printf("The test score you input is %d.\n", testScore);
	return 0;
}

/****************
 * シグマ計算
*****************/
int sum(int sigInputMin, int sigInputMax){
	sigOutput = (sigInputMin + sigInputMax) * (sigInputMax - sigInputMin + 1) / 2;
	return sigOutput;
}