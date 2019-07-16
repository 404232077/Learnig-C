/* prog4_10 how to use getche() and putch() fumction */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main (void)
{
	char ch;
	
	printf("please enter a character: ");
	ch = getche();
	printf(" you entered the character is : %c \n",ch);
	
	printf("please enter a character: ");
	ch = getch();
	printf(" you entered the character is : %c \n",ch);
	
	system ("pause");
	return 0;
}
