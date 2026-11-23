#include <stdio.h>
int main(){
    double pi = 3.14159;
    double area = 0;
    double r = 0;
    int n;
    for(n = 0; n<=3; n++){
        scanf("%lf", &r);
        area = pi*(r*r);
        printf("A= %.4lf\n" ,area);
    }
    return 0;
}