#include <stdio.h>
int main(){
    float A,B,C,a,b,c,n1, n2, n3;;
    scanf("%f %f %f", &A, &B, &C);
    if(B >=A && B >= C){
        a = B;
        b = A;
        c = C;
    }
    else if(C >= A && C >= B){
        a = C;
        b = B;
        c = A;
    }
    n1 = a;
    n2 = b;
    n3 = c;
    if(n1>=(n2+n3)){
        printf("NAO FORMA TRIANGULO\n");
    }else {
        if((n1*n1)==((n2*n2)+(n3*n3))){
        printf("TRIANGULO RETANGULO\n");
          }
        if((n1*n1)>((n2*n2)+(n3*n3))){
              printf("TRIANGULO OBTUSANGULO\n");
        }
        if((n1*n1)<((n2*n2)+(n3*n3))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(n1==n2 && n1==n3){
            printf("TRIANGULO EQUILATERO\n");
        }
        if((n1==n2 && n1!=n3) || (n1==n3 && n1!=n2) || (n2==n3 && n2!=n1)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    //printf("%.2f %.2f %.2f", n1, n2 ,n3);
    return 0;
}