#include <stdio.h>

int main(void)
{
	int num=3;

	printf("한 개의 정수 입력:");
	num = num << 3;
	num = num >> 2;

	printf("연산결과 : %d\n",num);
	return 0;
}