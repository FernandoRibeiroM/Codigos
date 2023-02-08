"""
Codigos\Desafio Operadores Logicos
Neste programa iremos trabalhar com operadores logicos
Caso 1 dia de trabalho seja igual a true e o outro false, irá ser comprado uma tv de 32 polegadas e um sorvete
Caso os dois dias de trabalho sejam iguais true, será comprado uma tv de 50 polegadas e um sorvete
Caso nenhum dos dois sejam true, irá ficar em casa
"""
print("\n\n\n")
Trabalho_terca = True
Trabalho_quinta = False 
if Trabalho_terca and Trabalho_quinta:
    print("Tv de 50 + Sorvete")
elif Trabalho_terca or Trabalho_quinta:
    print("Tv de 32 + sorvete")
else:
    print("Fica em casa")

print("Trabalho terça: {} e Trabalho quinta: {}".format(Trabalho_terca, Trabalho_quinta))
print("\n\n\n")
