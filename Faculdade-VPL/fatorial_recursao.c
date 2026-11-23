#include <stdio.h>
int fatorial(int x);
int main(){
    int n, fat;
    scanf("%d", &n);
    fat = fatorial(n);
    printf("%d", fat);
    return 0;
}

int fatorial(x){
     if(x==1 || x==0){
        return 1;
     } else{
        return x*fatorial(x-1);
     }
}