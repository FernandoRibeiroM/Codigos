nome, idade = 'Fernado', 19
print('Nome: %s \nIdade: %d' % (nome, idade))
print('Nome: {0} \nIdade: {1}'.format(nome, idade))
print(f'Nome: {nome} \nIdade: {idade}')
from string import Template 
s = Template('Nome: $nome \nIdade: $idade') 
print(s.substitute(nome=nome, idade=idade))
