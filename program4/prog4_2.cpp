/* prog4_1 */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num=12568;
	printf("num=%d\n",num);	/* "-"為向左對齊，"15"為字元+空格的格數，".3"小數點後的數字為顯示的位數 */
	printf("num=%f\n",(float) num);
	printf("num=%e\n",(float) num);
	
	system("pause");
	return 0;
}
