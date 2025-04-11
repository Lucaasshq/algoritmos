# 8. Considere um array A de n números naturais Ai e s um valor natural. Escreva um algoritmo que verfique quantos
# pares de elementos em A cuja soma seja s existem.
# O algoritmo deve retornar um valor inteiro, a quantidade de pares cuja soma seja s

def QtdPares(a: list, s: int):
  c: int = 0
  n: int = 0

  for _ in a:
    n += 1

  
  for i in range(n):
    for j in range (i + 1, n):
      if a[i] + a[j] == s:
        c += 1
  return c

a = [1, 5, 7, -1, 5]
s = 6

result = QtdPares( a, s)
print(result)
