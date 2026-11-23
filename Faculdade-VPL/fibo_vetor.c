/*#include <stdio.h>
int main(){
    int t, n, i=2;
    printf("Quantos testes? \n");
    scanf("%d", &t);

    int fibo[t];
    fibo[0] = 0;
    fibo[1] = 1;

    int pos[t];
    for(n = 0; n < t; n++){
            scanf("%d", &pos[n]);

        while (i <= pos[n]){
            fibo[i] = fibo[i-1] + fibo[i-2];
            i++;
        }
    }
    for(n = 0; n < t; n++){
        printf("Fib(%d) = %d\n",pos[n] ,fibo[pos[n]]);
    }
    return 0;
}*/


/*#include <stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int b=10;
    int *p1, *p2;
    p1= &a[3];
    printf("%d\n", *p1);
    p2=&b;
    printf("%d\n", *p2);
    p2=p1;
    printf("%d\n", *p2);
    return 0;
}*/

#include <stdio.h>
#include <string.h>
void frequencialetras();

int main(){
    int casos;
    //printf("Quantidade de casos:");

    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
    frequencialetras();
    }
}

void frequencialetras(void){

    int tamanho;
    int alfabeto[26] = { 0 };
    char entrada[200];
    int auxiliar = 1;
    char vetor[auxiliar];
    int max = 0;

    fgets(entrada, 200, stdin);
    getchar();

    for(int i = 0; i < strlen(entrada); i++){
        if(entrada[i] >= 'a' && entrada[i] <= 'z' ){
           alfabeto[entrada[i] - 'a']++;
        }
        if(entrada[i] >= 'A' && entrada[i] <= 'Z' ){
            alfabeto[entrada[i] - 'A']++;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%c : %d\n", i + 'a', alfabeto[i]);
    }
    for(int i = 0; i < 26; i++){

        if(max == alfabeto[i]){
            auxiliar++;
            vetor[auxiliar] = alfabeto[i] + 'a';
        }
    
        if (max > alfabeto[i]){
            auxiliar = 1;
            vetor[auxiliar] = alfabeto[i] + 'a';
        }
    }
    for(int i = 0; i < strlen(vetor); i++){
        printf("%c", vetor[i]);
    }
