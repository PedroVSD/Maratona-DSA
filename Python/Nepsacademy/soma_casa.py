def main():
    n = int(input())

    casas = [int(input()) for _ in range(n)]
    k = int(input())

    p_esquerda = 0
    p_direita = n - 1

    while p_esquerda < p_direita:
        resp = casas[p_esquerda] + casas[p_direita]

        if resp == k:
            print(casas[p_esquerda], casas[p_direita])
            return

        elif(resp < k):
            p_esquerda += 1
        else:
            p_direita -= 1

    return

if __name__ == "__main__":
    main()


def main():
    n = int(input())
    casas = [int(input()) for _ in range(n)]
    k = int(input())

    hash_casas = {}

    for i in range(len(casas)):
        diferenca = k - casas[i]

        if diferenca in hash_casas:
            print(diferenca, casas[i])
            return

        hash_casas[casas[i]] = i


if __name__ == "__main__":
    main()
