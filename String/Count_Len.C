#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0;
	char s[10];
	clrscr();
	printf("Enter a string:");
	gets(s);
		while(s[len]!='\0')
		{
			len++;
		}
	printf("\nLength:%d",len);
	getch();
}
