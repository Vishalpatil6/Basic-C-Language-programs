#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,m=1;
	clrscr();
	printf("\n\ta::");
	scanf("%ld",&a);

	while(a>0)
	{
		m=a*m;
		a--;
	}
	printf("fact:%ld",m);
	getch();
}
