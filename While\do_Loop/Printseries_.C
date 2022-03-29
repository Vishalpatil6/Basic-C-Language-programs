#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=1,b=10;
	clrscr();
	i=1;
	while(i<=10)
	{
		printf("%d\n",a);
		a++;
		printf("%d\n",b);
		b--;
		i++;
	}
	getch();
}
