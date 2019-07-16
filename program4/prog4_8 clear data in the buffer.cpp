/* prog4_8 clear data in the buffer */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num;
	char ch;
	
	printf("please enter a integer:");
	scanf("%d",&num);
	fflush(stdin);
	
	printf("please enter a character:");
	scanf("%c",&ch);
	printf("num=%d, ASCII of ch is %d\n",num,ch);
	
	system ("pause");
	return 0;
}
