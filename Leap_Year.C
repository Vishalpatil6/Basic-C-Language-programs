#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\n Enter the year:");
	scanf("%d",&year);
	if(year%4==0 && year%100==0 && year%1000);
	{
		printf("\n%d is leap",year);
	}
	else
	{
		printf("\n%d it is not leap",year);
	}
	getch();
}

