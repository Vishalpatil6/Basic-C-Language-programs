// Print series 1 -4  9 -16 25 -36 49 -64 81 -100

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
