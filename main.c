#include <stdio.h>
#include "mediaaritmetica.h"

int main(void)
{
    int numeroValori;
    float sommaValori;

    printf("Inserisci il numero di valori della media\n");
    scanf("%d", &numeroValori);
    printf("Inserisci la somma dei valori\n");
    scanf("%f", &sommaValori);

    float media = MediaAritmetica(numeroValori, sommaValori);
    printf("La media dei valori è %.2f", media);

    return 0;
}
