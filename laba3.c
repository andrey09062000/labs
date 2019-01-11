#include <math.h>
#include <stdio.h>
int main()
{
	float G,F,Y,a,x,x_max,shag,kolvo_shagov;
	printf ("Vvedite a ");
	scanf ("%f", &a);
	printf ("Vvedite nachalnoe znachenie x ");
	scanf ("%f", &x);
	printf ("Vvedite konechnoe znachenie x ");
	scanf ("%f", &x_max);
	printf("Vvedite kol-vo shagov ");
	scanf ("%f", &kolvo_shagov);
	shag = (x_max/kolvo_shagov);
	int b,error;
	printf("Vvedite nomer funkcii (G,1;F,2;Y,3) ");
	scanf("%d", &b);
	if (shag <= x_max-x)
	{
		switch (b)
		{
			case 1:
				for (x; x <= x_max; x = x+shag){ 
					if ((15*pow(a,2)+49*a*x+24*pow(x,2))!=0)
					{
					G = (5*(-9*pow(a,2)+11*a*x+14*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2));
					printf("G = %f \n",G);
					}
					else
					{
					error=1;
					printf("Funkciya ne vicheslina \n");
					}
				}
			break;
			case 2:
				for (x; x <= x_max; x = x+shag){ 
					if ((tanh(18*pow(a,2)+29*a*x+10*pow(x,2))>-1) && (tanh(18*pow(a,2)+29*a*x+10*pow(x,2))<1))
					{
					F = tanh(18*pow(a,2)+29*a*x+10*pow(x,2));
					printf("F = %f \n",F);
					}
					else
					{
					error=3;
					printf("Funkciya ne vicheslina \n");
					}
				}
			break;
			case 3:
				for (x; x <= x_max; x = x+shag){ 
					if ((-7*pow(a,2)-10*a*x+8*pow(x,2)+1) && (acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)))
					{
					Y = acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1);
					printf("Y = %f \n",Y);
					}
					else
					{
					error=4;
					printf("Funkciya ne vicheslina");
					}
				}
			break;
			default:
				error=5;
				printf("Neverniy nomer funkcii \n");
				break;
				}
	}
	else
	{
	error=6;
	printf("Shag bolshe x maksimalnogo \n");
	}
return error;
}
