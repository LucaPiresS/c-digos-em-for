#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, valor, negativos;
    
    for (c = 0; c < 5; c++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        
        if(valor < 0) {
            negativos++;
        }
        
    }
    
    printf("\nVocê digitou %d negativos.", negativos);

    return 0;
}