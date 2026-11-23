#include <stdio.h>
int main(){
    int alunos, i, vale_nota=0,n=0,freq;
    scanf("%d", &alunos);
    int notas[alunos];
    for(i=0 ; i<alunos ; i++){
        scanf("%d", &notas[i]);
        if(notas[i]>=0 && notas[i]<=10){ 
                vale_nota++; 
            if(notas[i]>=5){  
                n++;
            }
        }  
    }
    if(n>0){
        freq=vale_nota/n*100;
    }
    printf("%d", n);
    return 0;
}