/*Escreva um algoritmo que leia 50 valores e 
encontre o maior e o menor deles. Mostre o 
resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, maior, menor, c;
    int i = 1;
    maior = 0;
    menor = 0;
    
    for(i = 1; i <= 50; i++) {
        printf("Digite o %dº Número: ", i);
        scanf("%d", &num);
        
        if (num > maior || maior == 0) {
            maior = num;
        }
        
        if (num < menor || menor == 0) {
            menor = num;
        }

    }
    
    printf("\nO maior número digitado é: %d\nO menor número digitado é: %d\n", maior, menor);
    
    return 0;
}