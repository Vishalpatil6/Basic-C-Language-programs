#include<stdio.h>
#include<conio.h>
void main()
{
	int chem,bio,phy,math,eng;
	float m,p;
	clrscr();
	printf("\n Enter your chemistry marks:");
	scanf("\n%d",&chem);
	printf("\n Enter your biology marks :");
	scanf("\n%d",&bio);
	printf("\n Enter your physics marks:");
	scanf("\n%d",&phy);
	printf("\n Enter your math marks:");
	scanf("\n%d",&math);
	printf("\n Enter your English marks:");
	scanf("\n%d",&eng);
	m=(chem+bio+phy+math+eng);
	printf("\nyour total marks is :%.2f",m);
	p=m/5;
	printf("\nyour total percentage is :%.2f",p);
	getch();
}