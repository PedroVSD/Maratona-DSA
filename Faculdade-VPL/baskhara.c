#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, d, x1 ,x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = pow(b,2)-4*a*c;
    if(d>0 && a!=0){
    x1 = (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);
    printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);
    } if(a==0 || d<0){
        printf("Impossivel calcular");
    }
    return 0;
}