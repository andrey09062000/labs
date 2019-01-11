#include <math.h>
#include <stdio.h>
int main()
{
	float G,F,Y,a,x,x_max,shag,kolvo_shagov,min,max;
	printf ("Vvedite a ");
	scanf ("%f", &a);
	printf ("Vvedite nachalnoe znachenie x ");
	scanf ("%f", &x);
	printf ("Vvedite konechnoe znachenie x ");
	scanf ("%f", &x_max);
	printf ("Vvedite kol-vo shagov " );
	scanf ("%f", &kolvo_shagov);
	shag = (x_max/kolvo_shagov);
	int b,error,j,i;
	float mas [i];
	i = 0;
	j = 0;
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
					mas[i] = G;
					printf("G = %f\t x = %f\n",mas[i],x);
					i = i + 1;
					j = j + 1;
					}
					else
					{
					error=1;
					printf("Funkciya ne vicheslina \n");
					}
							
				}
							max = mas[i];
							min = mas[i];
						for (i = 0;i <= j;i++){
							if (max < mas[i]){
							max = mas[i];
							}
						}
						for (i = 0;i <= j;i++){
							if (min > mas[i]){
							min = mas[i];
							}
						}
						printf("Maksimalnoe znachenie G = %f\n",max);	
						printf("Minimalnoe znachenie G = %f\n",min);
						
			break;
			case 2:
				for (x; x <= x_max; x = x+shag){ 
					if ((tanh(18*pow(a,2)+29*a*x+10*pow(x,2))>-1) && (tanh(18*pow(a,2)+29*a*x+10*pow(x,2))<1))
					{
					F = tanh(18*pow(a,2)+29*a*x+10*pow(x,2));
					mas[i] = F;
					printf("F = %f\t x = %f\n",mas[i],x);
					i = i + 1;
					j = j + 1;
					}
					else
					{
					error=3;
					printf("Funkciya ne vicheslina \n");
					}
				}
							max = mas[i];
							min = mas[i];
						for (i = 0;i <= j;i++){
							if (max < mas[i]){
							max = mas[i];
							}
						}
						for (i = 0;i <= j;i++){
							if (min > mas[i]){
							min = mas[i];
							}
						}
						printf("Maksimalnoe znachenie F = %f\n",max);	
						printf("Minimalnoe znachenie F = %f\n",min);
			break;
			case 3:
				for (x; x <= x_max; x = x+shag){ 
					if ((-7*pow(a,2)-10*a*x+8*pow(x,2)+1) && (acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)))
					{
					Y = acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1);
					mas[i] = Y;
					printf("Y = %f \n",Y);
					i = i + 1;
					j = j + 1;
 					}
					else
					{
					error=4;
					printf("Funkciya ne vicheslina");
					}
				}
							max = mas[i];
							min = mas[i];
						for (i = 0;i <= j;i++){
							if (max < mas[i]){
							max = mas[i];
							}
						}
						for (i = 0;i <= j;i++){
							if (min > mas[i]){
							min = mas[i];
							}
						}
						printf("Maksimalnoe znachenie Y = %f\n",max);	
						printf("Minimalnoe znachenie Y = %f\n",min);
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
