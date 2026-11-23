#include <stdio.h>
void ordena(int notas[], int n);
int main(){
    int n, aux = 0;

        //printf("Quantas notas?\n");
        scanf("%d", &n);

       /* while(n<5){
            printf("O número de notas é menor do que cinco(O mínimo necessário)\n");
            scanf("%d", &n);
        }*/

    int notas[n];
    int nota_cinco[n];
    for(int i = 0; i < n; i++){
        printf("%d-nota: ", i);
        scanf("%d", &notas[i]);
    }

    //ordenação
    ordena(notas, n);

    /*printf("Suas notas: ");
    for(int i = 0; i < n; i++){
        printf("%d, ", notas[i]);
    }*/
    int w = 0;
    for(int j = 0; j < n; j++){
        int i;
        for(i = 0; i < w;i++){
            if(notas[j] == nota_cinco[i]){
                break;
            }
        }if(i==w){
                nota_cinco[w] = notas[j];
                w++;
            }
        
    }

    printf("%d", nota_cinco[4]);


    //quinta menor nota
    return 0;
}

//bubble sort
void ordena(int notas[], int n){
    int aux;
    for(int cont = 1; cont < n; cont++){
        for(int i = 0; i < n; i++){
            if(notas[i] > notas[i+1]){
                aux = notas[i];
                notas[i] = notas[i+1];
                notas[i+1] = aux;
            }
        }
    }
}