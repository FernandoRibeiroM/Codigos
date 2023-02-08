conjunto = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
conjunto_String = {"Testes"}
print(type(conjunto))
print(conjunto)
print('Tamanho do conjunto: ', len(conjunto))
print('Maior valor do conjunto: ', max(conjunto))
print('Menor valor do conjunto: ', min(conjunto))
print('Soma dos valores do conjunto: ', sum(conjunto))
print('Média dos valores do conjunto: ', sum(conjunto)/len(conjunto))
print('Média dos valores do conjunto: ', sum(conjunto)//len(conjunto))
print('Média dos valores do conjunto: ', sum(conjunto) % len(conjunto))
print(set(conjunto_String))

c1 = {1, 2, 3, 4, 5}
c2 = {5, 6, 7, 8, 9, 10}
print(c1.union(c2))  # União
print(c1.intersection(c2))  # Interseção
print(c1.difference(c2))  # Diferença
print(c2.difference(c1))  # Diferença
print(c1.symmetric_difference(c2))  # Diferença Simétrica
print(c1.issubset(c2))  # Verifica se c1 é subconjunto de c2
c1.update(c2)  # Atualiza c1 com a união de c1 e c2
# C1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} C2 = {5, 6, 7, 8, 9, 10}
print("C1 = ", c1, '\nC2 = ', c2)
print(c1 >= c2)  # Verifica se c1 é subconjunto de c2
print(c1 <= c2)  # Verifica se c1 é subconjunto de c2
print(c1 == c2)  # Verifica se c1 é subconjunto de c2
print(c2 <= c1)  # Verifica se c1 é subconjunto de c2
print(c2 >= c1)  # Verifica se c1 é subconjunto de c2
print(c2 == c1)  # Verifica se c1 é subconjunto de c2
# Remove o elemento 5 de c1 e retorna o novo conjunto sem o elemento 5 porem não altera o conjunto c1
print(c1 - {5})
print(c1-c2)  # Remove os elementos de c2 de c1
c1 -= {2}  # Remove o elemento 2 de c1
print(c1)
