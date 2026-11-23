#include <stdio.h>
int main(){
    int n,Led= 0 , i = 0, j;
    char led[10];

    scanf("%d", &n);

    int somaLed[n];

    while(i < n){ 
        scanf("%s", &led);
        Led = 0;
        for(j = 0; led[j]!='\0'; j++){
            switch (led[j]){
                case '0':
                    Led += 6;
                break;
                case '1':
                    Led += 2;
                break;    
                case '2':   
                    Led += 5;
                break; 
                case '3':   
                    Led += 5;
                break; 
                case '4':   
                    Led += 4;
                break; 
                case '5':   
                    Led += 5;
                break; 
                case '6':   
                    Led += 6;
                break; 
                case '7':   
                    Led += 3;
                break; 
                case '8':   
                    Led += 7;
                break; 
                case '9':   
                    Led += 6;
                break;   
                default:
                break;
            }  
        }   
        somaLed[i] = Led;  
        i++;   
    }
    for(i=0;i<n;i++){
        printf("%d leds\n", somaLed[i]);
    }
    return 0;
}