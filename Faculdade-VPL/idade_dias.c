#include<stdio.h>
int main(){
	int n;
	int anos, meses, dias;
	scanf("%d", &n);
	anos = n/365;
	n = n%365;
	meses = n/30;
	n = n%30;
	dias = n;
	printf("%d ano(s) \n%d mes(es) \n%d dia(s)", anos, meses, dias);
	return 0;
}