#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

// Macros paracriartabeladequantidadede bits em 1 emum byte


#define B2(n) n, n + 1, n + 1, n + 2


#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)


#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)


#define QUANT_BITS B6(0), B6(1), B6(1), B6(2)

// tabeladequantidadede bits em 1 emum byte.

constunsignedint __qbits_tab[256] = { QUANT_BITS };

// Funçãoparacontarcardinalidadedainterseção


// a,b: ponteirosparavetoresde bytes


// n: quantidadede bytes emcadavetor


staticinlineintcard_inters(unsignedchar * a, unsignedchar * b, int nb){

int ret = 0;

// percorre bytes dosvetores

    for (int i = 0; i < nb; i++)
    ret += __qbits_tab[a[i] & b[i]]; // i-esimo byte
    return ret;
}

