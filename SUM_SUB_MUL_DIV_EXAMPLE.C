#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 10, b = 3, c, r;
    float d;
    clrscr();
    printf("The value of A is %d", a);
    printf("\nThe value of B is %d", b);
    c = a + b;
    printf("\nSum is %d\n", c);

    c = a - b;
    printf("Subtration is %d\n", c);

    printf("Multipliction is %d", a * b);

    d = a / b;
    printf("\nDivision is %.4f", d);

    r = a % b;
    printf("\nRemaindr is %d", r);
    getch();
}
