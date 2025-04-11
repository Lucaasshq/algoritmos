#   10. Problema Sublista contígua de soma máxima.
#   Considere um array A de n números inteiros. Exemplo: A = [10, 5, −17, 20, 50, −1, 3, −30, 10]
#   O problema consiste em encontrar a maior subsequencia cuja soma seja a maior possível. No caso do vetor A a
#   maior soma é 72, que é a soma dos elementos entre os índices 3 e 6 : 20 + 50 + −1 + 3.
#                         10 5 -17 20 50 -1 3 -30 10
#   Escreva um algoritmo que retorne o valor da Sub-lista contígua de soma máxima.


#! Algoritmo de Kadane

def kadane(a:list):
  somaMaxima = somaAtual = a[0]

  for i in a[1:]:
    if somaAtual + i > i:
      somaAtual += i
    else:
      somaAtual = i

    if somaAtual > somaMaxima:
      somaMaxima = somaAtual

  return somaMaxima


a: list = [10, 5, -17, 20, 50, -1, 3, -30, 10]

result:int = kadane(a)
print(result)