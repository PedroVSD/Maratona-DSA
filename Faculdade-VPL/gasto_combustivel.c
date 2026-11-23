#include <stdio.h>
int main(){
    int t, v;
    float x, d;
    scanf("%d %d", &t, &v);
    d = v*t;
    x = d/12;
    printf("%.3f \n", x);
    return 0;
}