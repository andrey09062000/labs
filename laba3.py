from math import acosh, tanh, pow
print('Vvedite znacheniya peremennix')
a = float(input('a '))
x = float(input('x '))
print('Vvedite x maksimalnoe ')
x_max = float(input('x_max '))
print('Vvedite kolvo_shagov ')
kolvo_shagov = float(input('kolvo_shagov ')) 
print("Vvedite nomer funkcii (G,1;F,2;Y,3) ")
b = float(input('b '))
shag = (x_max/kolvo_shagov)

if (shag <= x_max-x):

	if b == 1 and ((15*pow(a,2)+49*a*x+24*pow(x,2))!=0):
		i = 0
		while (x <= x_max):
			G = (5*(-9*pow(a,2)+11*a*x+14*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2))
			print('G = ''%2f' %G)
			x = (x+shag) 
	elif b == 2 and (tanh(18*pow(a,2)+29*a*x+10*pow(x,2))>-1) and 		(tanh(18*pow(a,2)+29*a*x+10*pow(x,2))<1):
		while (x <= x_max):
			F = tanh(18*pow(a,2)+29*a*x+10*pow(x,2))
			print('F = ''%2f' %F)
			x = (x+shag)
	elif b == 3 and ((-7*pow(a,2)-10*a*x+8*pow(x,2)+1)>=1) and (acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)>=0):
		while (x <=x_max):
			Y = acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)
			print('Y = ''%2f' %Y)
			x = (x+shag)
	elif b != 1 and b != 2 and b !=3:
		print("Neverniy nomer funkcii")
		exit(0)
	else:
		print("Funkciya ne vicheslina")
		exit(0)
else:
	print("Shag bolshe granici")
	exit(0)


