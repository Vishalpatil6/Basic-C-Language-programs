#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n Enter the first number:");
	scanf("%d",&a);
	printf("\n Enter the second number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n the first value of %d",a);
	printf("\n the second value of %d",b);
	getch();
}
