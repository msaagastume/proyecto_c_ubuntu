#include <stdio.h>

int main() {
    float monto;
    int opcion_inicio, opcion_destino;

    printf("Ingrese el monto que desea convertir: ");
    scanf("%f", &monto);

    printf("Seleccione la moneda inicial:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares\n");
    printf("3. Euros\n");
    scanf("%d", &opcion_inicio);

    printf("Seleccione la moneda de destino:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares\n");
    printf("3. Euros\n");
    scanf("%d", &opcion_destino);

    // Conversión de acuerdo a las opciones seleccionadas
    switch (opcion_inicio) {
        case 1: // Quetzales como moneda inicial
            switch (opcion_destino) {
                case 1: // Quetzales como moneda de destino
                    printf("El monto convertido es: %.2f quetzales.\n", monto);
                    break;
                case 2: // Dólares como moneda de destino
                    printf("El monto convertido es: %.2f dólares.\n", monto / 7.80); // Tasa de cambio aproximada
                    break;
                case 3: // Euros como moneda de destino
                    printf("El monto convertido es: %.2f euros.\n", monto / 8.80); // Tasa de cambio aproximada
                    break;
                default:
                    printf("Opción de destino no válida.\n");
            }
            break;
        case 2: // Dólares como moneda inicial
            switch (opcion_destino) {
                case 1: // Quetzales como moneda de destino
                    printf("El monto convertido es: %.2f quetzales.\n", monto * 7.80); // Tasa de cambio aproximada
                    break;
                case 2: // Dólares como moneda de destino
                    printf("El monto convertido es: %.2f dólares.\n", monto);
                    break;
                case 3: // Euros como moneda de destino
                    printf("El monto convertido es: %.2f euros.\n", monto * 0.89); // Tasa de cambio aproximada
                    break;
                default:
                    printf("Opción de destino no válida.\n");
            }
            break;
        case 3: // Euros como moneda inicial
            switch (opcion_destino) {
                case 1: // Quetzales como moneda de destino
                    printf("El monto convertido es: %.2f quetzales.\n", monto * 8.80); // Tasa de cambio aproximada
                    break;
                case 2: // Dólares como moneda de destino
                    printf("El monto convertido es: %.2f dólares.\n", monto * 1.12); // Tasa de cambio aproximada
                    break;
                case 3: // Euros como moneda de destino
                    printf("El monto convertido es: %.2f euros.\n", monto);
                    break;
                default:
                    printf("Opción de destino no válida.\n");
            }
            break;
        default:
            printf("Opción de inicio no válida.\n");
    }

    return 0;
}
