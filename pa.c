#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, a1, r, an, c, soma;
    
    printf("Digite o número de termos: ");
    scanf("%d", &n);
    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
    printf("Digite a razão: ");
    scanf("%d", &r);
    
    if (n > 0) {
    
        printf("\nA progressão aritmética ficou:\n");
        printf("( ");
        printf("%d, ", a1);
    
        c++;
    
        an = a1;
        soma = a1;
    
        for(c = 1; c < n; c++) {
            printf("%d, ", an += r);
            soma += an;
        }
        printf(")");
        printf("\nE sua soma dos elementos é: %d\n", soma);
    }
    
    else {
        printf("\nNão existe progressão aritmética com números de termos igual ou abaixo de 0");
    }
    
    return 0;
}