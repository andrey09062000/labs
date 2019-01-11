from math import acosh, tanh, pow

print('Введите знаения переменных')

a = float(input('a '))
x = float(input('x '))

G = (5*(-9*pow(a,2)+11*a*x+14*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2))
F = tanh(18*pow(a,2)+29*a*x+10*pow(x,2))
Y = acosh(-7*pow(a,2)-10*a*x+8*pow(x,2)+1)

print('G = ''%2f' %G)
print('F = ''%2f' %F)
print('Y = ''%2f' %Y)



