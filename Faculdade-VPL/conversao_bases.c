#include <stdio.h>
int conversao(int n, int b);
int main(){
    int n, base, casos;
    printf("Quantoa casos?\n");
    scanf("%d", &casos);
    for(int i =0; i<casos; i++){
        printf("Qual a base? 2, 10 ou 16\n");
        scanf("%d", &n);
        printf("Qual número?n");
        scanf("%d", &base);
        conversao(base, n);
    }
    return 0;
}

int conversao(int n, int base){
    int resto;
    if(base==2){
        while(n>2){
            resto=n%base;
        }
        return resto;
    }
    if(base==10){

    }
    if(base==16){

    }
}