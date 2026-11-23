#include <stdio.h>
int main(){
    int x, y, z, i ,soma=0;
    scanf("%d %d", &x, &y);
    if(x > y){
        z = x;
        x = y;
        y = z;
    }
    for(i=x; i<=y; i++){
        if(!(i%13==0)){
            soma+=i;
        }
    }
    printf("%d", soma);
}