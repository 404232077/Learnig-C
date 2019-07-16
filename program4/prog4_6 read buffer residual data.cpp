/* prog4_6 read buffer residual data*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num;
	char str[10];
	
	printf("please enter price:");
	scanf("%d",&num);
	printf("num=%d\n",num);
	
	printf("please enter a string");
	scanf("%s",str);
	printf("string is %s\n",str);
	
	system("pause");
	return 0;
}
