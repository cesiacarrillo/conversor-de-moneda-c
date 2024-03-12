#include <stdio.h>

#define Cambio_Dolar_Q 7.75 // Tipo de cambio: 1 USD = 7.75 GTQ
#define Cambio_Euro_Q 8.48 // Tipo de cambio: 1 EUR = 8.48 GTQ
#define Cambio_Euro_D 1.09 // Tipo de Cambio 1 EUR = 1.09 D

Int main(){
    int opcion;
    float cantidad;

    printf("Bienvenido al Conversor de Monedas\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Euros a Quetzales\n");
    printf("4. Convertir de Quetzales a Euros\n");
    printf("5. Convertir de Euros a Dolares\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            printf("Ingrese la cantidad en dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD Equivale a %.2f GTQ\n", cantidad, cantidad * Cambio_Dolar_Q);
            break;
            case 2:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad * Cambio_Dolar_Q);
            break;
            case 3:
            printf("Ingrese")
    }


}