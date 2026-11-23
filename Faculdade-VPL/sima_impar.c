#include <stdio.h>
int main(){
    int x,y,z,i,a=0;
    scanf("%d %d", &x,&y);
    for(i=y+1; i<x; i++){
        if(i%2!=0){
            a = a + i;
        }
    }
    printf("%d", a);
    return 0;
}