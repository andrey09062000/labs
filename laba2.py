from math import acosh, tanh, pow
print('Vvedite znacheniya peremennix')
a = float(input('a '))
x = float(input('x '))
print("Vvedite nomer funkcii (G,1;F,2;Y,3) ")
b = float(input('b '))
if b == 1 and ((15*pow(a,2)+49*a*x+24*pow(x,2))!=0):
	G = (5*(-9*pow(a,2)+11*a*x+14*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2))
	print('G = ''%2f' %G)
	exit(0)
elif b == 2 and (tanh(18*pow(a,2)+29*a*x+10*pow(x,2))>-1) and (tanh(18*pow(a,2)+29*a*x+10*pow(x,2))<1):
	F = tanh(18*pow(a,2)+29*a*x+10*pow(x,2))
	print('F = ''%2f' %F)
	exit(0)
elif b == 3 and ((-7*pow(a,2)-10*a*x+8*pow(x,2)+1)>=1) and (acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)>=0):
	Y = acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)
	print('Y = ''%2f' %Y)
elif b != 1 and b != 2 and b !=3:
	print("Neverniy nomer funkcii")
	exit(0)
else:
	print("Funkciya ne vicheslina")
	exit(0)


