#include <stdio.h>
#include <math.h>

int main()
{
float G,F,Y,a,x;
printf ("Введите a");
scanf ("%f", &a);
printf ("Введите x");
scanf ("%f", &x);
G = (5*(-9*pow(a,2)+11*a*x+14*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2));
F = tanh(18*pow(a,2)+29*a*x+10*pow(x,2));
Y = acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1);
printf("G = %f, \nF = %f, \nY = %f, \n", G, F, Y);
return 0;
}

