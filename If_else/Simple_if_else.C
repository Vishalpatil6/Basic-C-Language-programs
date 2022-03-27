#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    clrscr();

    printf(" Enter a number ::: ");
    scanf("%d", &x);

    if (x > 100)
    {
        printf("\n Number is greater than 100.");
    }

    getch();
    return 0;
}
