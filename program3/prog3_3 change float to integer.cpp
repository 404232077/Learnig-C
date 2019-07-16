/* prog3_3 change float to integer */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	int m1,m2;
	float num1,num2;
	num1=7.07;
	num2=8.07;
	printf("change float to int m1=%d\n",m1=(int) num1*num1);	/* 無條件捨去*/ 
	printf("change float to int m2=%d\n",m2=(int) num2);
	
	system("pause");
	return 0;
 } 
