#include(stdio.h)
#include(conio.h)
int main( )
{
int a, b, c, d;
clrscr( );
printf("Enter the four different numbers:")l
scanf(" %d %d %d %d", &a, &b, &c, &d);
if(a>b && a>c && a>d)
printf("\n%d is greatest", a);
else if(b>a && b>c && b>d)
printf("\n%d is greatest", b);
else if(c>a && c>b && c>d)
printf("\n%d is greatest", c);
else
printf("\n %d is greatest", d);
getch( );
}
