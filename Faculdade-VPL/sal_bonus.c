#include <stdio.h>
int main(){
    char nome[10];
    double sal, m, tot;
    scanf("%s %lf %lf", &nome, &sal, &m);
    tot = (m*0.15)+sal;
    printf("%s \n %.2lf \n %.2lf \n TOTAL = R$ %.2lf", nome, sal, m, tot);
    return 0;
}