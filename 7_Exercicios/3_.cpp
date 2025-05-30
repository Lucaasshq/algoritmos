função existeTrianguloRetangulo(A, n):
    para i de 0 até n-3:
        para j de i+1 até n-2:
            para k de j+1 até n-1:
                x = A[i]
                y = A[j]
                z = A[k]

                // ordenar x, y, z em ordem crescente manualmente
                se x > y:
                    trocar x e y
                se y > z:
                    trocar y e z
                se x > y:
                    trocar x e y

                // agora x <= y <= z

                se z*z == x*x + y*y:
                    retornar Verdadeiro

    retornar Falso