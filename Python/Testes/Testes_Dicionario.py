Pessoa = {'Nome': 'Fernando', 'Idade': 19, 'Sexo': 'Masculino',
          'Rua': 'João Adelino Pires', 'Numero': 461, 'Ap': 100}
print(Pessoa)
print(type(Pessoa))
print(len(Pessoa))
print(Pessoa['Nome'])
print(Pessoa.keys())
print(Pessoa.values())
print(Pessoa.pop('Idade'))
print(Pessoa)
Pessoa.update({'Idade': 19})
print(Pessoa)
del Pessoa['Numero']
print(Pessoa)
