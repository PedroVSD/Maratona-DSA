#include <stdio.h>
int main(){
    float n1, n2, media;
    int n;
    for(n = 1; n<=3; n++){
        scanf("%f %f", &n1, &n2);
        media=((n1*3.5)+(n2*7.5))/11;
        printf("MEDIA: %.5f \n", media);
        n1 = 0;
        n2 = 0;
    }
    return 0;
}