#include<stdio.h>
#include<conio.h>
void main( )
{
        int i,a;
        clrscr( );
        printf("\nENTER THE NUMBER :");
        scanf("%d",&a);
        for (i=1;i<=10;i++)
        {
            printf("\n%d",a*i);
        }
        getch();
}
