#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    clrscr();
    i = 1;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("%d is Even\n", i);
        }
        else
        {
            printf("%d is Odd\n", i);
        }
        i++;
    }
    getch();
}
