#include <stdio.h>

int main(void){
	int value;
	int i;
	int j;
	value = 100;
	i = 40;
	j = 13;
	printf("hello,\tword\n");
	printf("%d人+%d人=%d人\n", 123, 77, 123+77);
	printf("%d\n", (1+value) * value / 2);
	printf("%f\n", 10.0 + 3.0);
	printf("%f\n", 10.0 - 3.0);
	printf("%f\n", 10.0 * 3.0);
	printf("%f\n", 10.0 / 3.0);
	printf("i=%d\n", i);
	printf("%d ÷ %d = %d 余り%d\n", i, j, i / j, i % j);
	printf("end\n");
	return 0;
}
