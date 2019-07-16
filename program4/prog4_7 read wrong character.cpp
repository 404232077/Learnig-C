/* prog4_7 read wrong character */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	char ch;
	
	printf("pleasr enter a integer:");
	scanf("%d",&num);
	printf("please enter a character:");
	scanf(" %c",&ch);
	printf("num=%d, ASCII of ch = %d\n",num,ch);
	
	system("pause");
	return 0;
}
