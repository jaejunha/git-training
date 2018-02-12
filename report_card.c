#include<stdio.h>

int main()
{
	int kor, eng, math, his;
	int sum = 0;

	math = 90;
	eng = 100;
	kor = 95;
	his = 85;
	sum = math+eng+kor+his;

	printf("This program print report card.\n");
        
	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("History : %d\n", his);
	printf("Sum : %d\n", sum);
	printf("Avg : %d\n", sum/4);

	return 0;
}
