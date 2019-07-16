/* prog4_9 how to use getchar() and putchar() fumction */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char ch;
	printf("please enter a character: ");
	ch = getchar();
	printf("you enter the character is : ");
	putchar(ch);
	putchar('\n');
	
	system ("pause");
	return 0;
}
