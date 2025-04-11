# Considere um array A de n números naturais Ai e s um valor natural. Escreva um algoritmo que verfique se existe
# um par de elementos em A cuja soma seja s, ou seja,

# ∃i, j|0 ≤ i < j < |A| =⇒ Ai + Aj = s

def parComSoma(a: list, s: int):
  t = 0
  for _ in a:
    t += 1

  
  for i in range(t):
    for j in range(i + 1, t):
      if a[i] + a[j] == s:
        return True
  return False



a = [1, 4, 2, 3]
s = 8
result: bool = parComSoma(a,s)
print(result)
