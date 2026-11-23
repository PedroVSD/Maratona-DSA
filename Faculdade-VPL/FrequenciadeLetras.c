#include <stdio.h>
#include <string.h>

void frequencia(char frase[]);
int main(){
    int casos;
    char resp[200];

//    printf("Quantos casos?\n");
    scanf("%d", &casos);
    getchar();
    char frase[casos][200];

    for(int i = 0; i < casos; i++){
//        printf("Digite sua frase: \n");
        fgets(frase[i], 200, stdin);
    }

    for(int j = 0; j < casos; j++){
        frequencia(frase[j]);
    }

    return 0;
}

void frequencia(char frase[]){
    int letra_repetida[26] = {0}, aux;
    int pos;

    for(int k = 0; k<=strlen(frase); k++){
//        if(frase[k] >= 'A' && frase[k] <= 'z'){
        if(frase[k] >= 'A' && frase[k] <= 'Z')
        {
pos = frase[k] - 'A';
        letra_repetida[pos]++;
}
           
        else if(frase[k] >= 'a' && frase[k] <= 'z')
        {
        pos = frase[k] - 'a';
letra_repetida[pos]++;
}
       
       
    }

int max = 0;
//    printf("Letras mais repetidas nas frase: %s", frase);
    for(int l = 0; l < 26; l++){
        if(letra_repetida[l] > max){
            max = letra_repetida[l];
        }
    }

    for(int l = 0; l < 26; l++){
        if(letra_repetida[l] == max){
            printf("%c", 'a'+l);
        }
    }
    printf("\n");
}