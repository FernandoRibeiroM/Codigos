# Pedindo o raio ao usuário, em seguida o convertendo de string para float dentro da opereção
import math
pi = math.pi
print('---------------------------------------------------')
raio = input('Digite o raio da circunferência: ')
Resultado = pi* float (raio) **2
print('\n')
print('A área da circunferência é: {:.2f}'.format(Resultado))
print('---------------------------------------------------')

