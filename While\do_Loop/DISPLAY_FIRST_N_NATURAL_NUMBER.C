#include <stdio.h>
#include <conio.h>

int main()
{
	int  i, n;
	clrscr();

	printf( " Enter Number : " );
	scanf( "%d", &n );

	i = 1;
	do
	{
		printf("  %d", i );
		i++;
	} while( i <= n  );

	getch();
	return 0;
}
