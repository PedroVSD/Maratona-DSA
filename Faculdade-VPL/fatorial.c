#include <stdio.h>
int main(){
    int num, fat=1, i;
    printf("Fatorial de qual numero?\n");
    scanf("%d", &num);
    for(i=num; i>1; i--){
        fat = fat*i;
    }
    printf("O fatorial de %d e %d", num, fat);
    return 0;
}