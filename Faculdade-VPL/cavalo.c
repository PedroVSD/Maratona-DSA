#include <stdio.h>
int main(){
    int baias[50] = {0}, totCavalo = 0, cavalinhos = 0;
    int cavalos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for(int i = 0; i < 15; i++){
        baias[cavalos[i]] = 1;
    }

    for(int i = 0; i < 50 - 20; i++){//Posição da prancha
        int cavalos_armadura = 0;
            for(int j = i; j < i + 20; j++){
                if(baias[j] == 1){
                    cavalos_armadura++;
                }
            }
        if(cavalos_armadura > totCavalo){
            totCavalo = cavalos_armadura;
            cavalinhos = i;
        }
    }
    printf("A baia deve ficar na %d para proteger um total de %d cavalos", cavalinhos, totCavalo);
    return 0;
}

/*
#include <stdio.h>

int main() {
    int baias[50] = {0}; // Array para representar as baias (0 para baias vazias, 1 para baias ocupadas)
    int cavalos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int numCavalos = sizeof(cavalos) / sizeof(cavalos[0]);
    int melhorPosicao = 0; // Posição da primeira baia fechada pela prancha
    int maxCavalosProtegidos = 0; // Número máximo de cavalos protegidos

    // Marcar as baias ocupadas pelos cavalos
    for (int i = 0; i < numCavalos; i++) {
        baias[cavalos[i]] = 1;
    }

    // Encontrar a posição ótima da prancha
    for (int i = 0; i <= 50 - 20; i++) {
        int numCavalosProtegidos = 0;
        for (int j = i; j < i + 20; j++) {
            if (baias[j] == 1) {
                numCavalosProtegidos++;
            }
        }
        if (numCavalosProtegidos > maxCavalosProtegidos) {
            maxCavalosProtegidos = numCavalosProtegidos;
            melhorPosicao = i;
        }
    }

    printf("A prancha deve ser posicionada na baia %d para proteger %d cavalos.\n", melhorPosicao, maxCavalosProtegidos);

    return 0;
}
*/