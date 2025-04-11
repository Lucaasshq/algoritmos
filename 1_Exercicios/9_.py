# 9. Escreva um algoritmo que receba um array A de n números naturais e determine se o array está ordenado em
# ordem não decrescente, ou seja, do menor para o maior.


def verificarOrdemCrescente(a: list):
  contador: int = 0

  for _ in a:
    contador += 1

  for i in range(contador - 1):
    if a[i] > a[i + 1]:
      return False
  return True

A =  [1,2,2,2,3,3,4,4,5,6,7,8,9]

result: bool = verificarOrdemCrescente(A)
print(result)