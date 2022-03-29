#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("-%d\t",i*i);
		}
		else
		{
			printf("%d\t",i*i);
		}
	i++;
	}
	getch();
}
