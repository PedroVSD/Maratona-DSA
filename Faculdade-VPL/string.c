#include<stdio.h>
#include<string.h>
int strend(char s[], char t[]);
int main(){
    char str1[100], str2[100];
    int txt;
    printf("Qual a primeira string?\n");
    scanf("%s", str1);
    printf("Qual a segunda string?\n");
    scanf("%s", str2);
    txt = strend(str1, str2);
    printf("%d", txt);
    return 0;
}

int strend(char s[], char t[]){

    int txt1 = strlen(s) - 1;
    int txt2 = strlen(t) - 1;
    int i = txt2, cont = 0;
    
    while(i>=0){
        if(s[txt1] == t[i]){
            cont++;
        }
        i--;
        txt1--;
    }
    if(cont == txt2+1){
        return 1;
    }   else{
        return 0;
    }

    /*
    int strend(char s[60], char t[60]){
    int tams, tamt,i,cont = 0;
    tams = strlen(s) - 1;
    tamt = strlen(t) - 1;
    
    i = tamt;
    while(i>=0){
        if(s[tams] == t[i]){
            cont++;
        }
        i--;
        tams--;
    }
    if(cont == tamt+1){
        return 1;
    }else{
        return 0;
    }
}   */

    /*int i = 0, j = 0, cont = 0;

    while(i<=strlen(txt1)){
        if(txt1==txt2){
            cont++;
        }
        i++;
        j++;
    }

    if(cont==txt1){
        return 1;
    } else{
        return 0;
    }*/
}