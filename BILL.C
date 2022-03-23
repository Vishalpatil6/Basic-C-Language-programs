#include<stdio.h>
#include<conio.h>
void main()
{
	int icecream,quantity,bill=0;
	clrscr();
	printf("\n Price Of Icecream:");
	scanf("%d",&icecream);
	printf("\n Quantity Of Icecream:");
	scanf("%d",&quantity);
	bill=icecream*quantity;
	printf("\nYour Total Bill:%d",bill);
	getch();
}
