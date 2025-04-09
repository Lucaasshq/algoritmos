n = [9, 5, 8, 2, 1, 3, 5, 9, 4, 1]
maior = n[0]
menor = n[0]
for i in n:
    if maior < i:
        maior = i
    if menor > i:
        menor = i


diferenca = maior - menor
print(maior)
print(menor)
print(f"Diferença entre {maior} para {menor} é {diferenca}")