#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
    float consumo = 0;
    float hora = 0;
    float vel = 0;
    printf("Consumo (km/l): \n");
    scanf("%f", &consumo);

    printf("Tempo (h): \n");
    scanf("%f", &hora);

    printf("Velocidade média (km/h): \n");
    scanf("%f", &vel);

    printf("Distancia: %.2f km \n", vel*hora);
    printf("Combustivel: %.2f Litros", (vel*hora)/consumo);
}