#include<stdio.h>
#include<conio.h>
void main( )
{
        int a;
        clrscr( );
        for(a=1;a<=20;a++)
        {
                if(a%2==0)
                {
                    printf("%d",a);
                }
                else
                {
                    printf("\n%d\t",a);
                }
        }
        getch( );
}
