#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct
{
    char* name;
    float faturamento;
    int category;
} Vendedor;

int aleatorio(int a,int b);
float calculateCommission(float value);

int main(int argc, char const *argv[])
{
    char *rangeStrings[] = {
        "500,00-599,00",
        "600,00-699,00",
        "700,00-799,00",
        "800,00-899,00",
        "900,00-999,00",
        "1000,00-1199,00",
        "1200,00-1299,00",
        "1300,00+"
    };
    int range[] = {0, 0, 0, 0, 0, 0, 0, 0};

    Vendedor vendedores[20];
    srand(time(NULL));

    for(int i = 0; i < 20; i++) {
        vendedores[i].name = malloc(20 * sizeof(char));
        sprintf(vendedores[i].name, "Vendedor %d", (i + 1));
        vendedores[i].faturamento = aleatorio(500, 10000);
    }

    for(int i = 0; i < 20; i++) {
        char *name = vendedores[i].name;
        float fat = vendedores[i].faturamento;

        printf("%s %.2f\n", name, fat);
        int category = (((int)calculateCommission(fat) / 100) - 5);
        
        range[category]++;
        
    }

    for(int i = 0; i < 8; i++) {
        printf("%d trabalhadores - Comissão %s\n", range[i], rangeStrings[i]);
    }

    return 0;
}

int aleatorio(int a,int b)  {
	return (a+rand()%(b-a+1));
}

float calculateCommission(float value) {
    return (500 + value*0.09);
}