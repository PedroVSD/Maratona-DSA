#include <stdio.h>
int main(){
    int n, n1, n2, n3, n4, n5, n6, n7;
    scanf("%d", &n);
    n1 = n/100;
    n2 = (n%100)/50;
    n3 = (n2%50)/20;
    n4 = (n%20)/10;
    n5 = (n%10)/5;
    n6 = (n%5)/2;
    n7 = (n%2)/1;
    printf("%d nota(s) de R$100,00\n" , n1);
    printf("%d nota(s) de R$50,00\n" , n2);
    printf("%d nota(s) de R$20,00\n" , n3);
    printf("%d nota(s) de R$10,00\n" , n4);
    printf("%d nota(s) de R$5,00\n" , n5);
    printf("%d nota(s) de R$2,00\n" , n6);
    printf("%d nota(s) de R$1,00\n" , n7);
}

#include <stdio.h>
int main(){
    int n, n1, n2, n3, n4, n5, n6, n7;
    scanf("%d", &n);
    printf("%d\n", n);
    n1 = n/100;
    n = n - n1*100;
    n2 = n/50;
    n = n - n2*50;
    n3 = n/20;
    n = n - n3*20;
    n4 = n/10;
    n = n - n4*10;
    n5 = n/5;
    n = n - n5*5;
    n6 = n/2;
    n = n - n6*2;
    n7 = n;
    printf("%d nota(s) de R$ 100,00\n" , n1);
    printf("%d nota(s) de R$ 50,00\n" , n2);
    printf("%d nota(s) de R$ 20,00\n" , n3);
    printf("%d nota(s) de R$ 10,00\n" , n4);
    printf("%d nota(s) de R$ 5,00\n" , n5);
    printf("%d nota(s) de R$ 2,00\n" , n6);
    printf("%d nota(s) de R$ 1,00\n" , n7);
}