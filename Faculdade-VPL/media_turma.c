#include <stdio.h>
int main(){
    int totalunos, i, nota, notav=0;
    float media, somanotas = 0;
    scanf("%d", &totalunos);
    for(i=0; i<totalunos; i++){
        scanf("%d", &nota);
        if(nota>=0 && nota<=10){
            somanotas += nota;
            notav++;
        }
    }
        if(notav>0){
            media = somanotas/notav;
            printf("%.1f", media);
        }else{
            printf("0.0");
        }
    return 0;
}