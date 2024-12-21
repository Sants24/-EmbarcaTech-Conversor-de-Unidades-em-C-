#include <stdio.h>
#include <stdlib.h>

void exibirMenu();
void ConversorCelsiusFahrenheit();
void conversorMetros();
int main() {
    int escolha;

    do {
        exibirMenu();

        printf("Escolha uma opcao (0 para sair): ");
        scanf("%d", &escolha);

        if (escolha != 0) {
            printf("Obrigado por escolher a opcao");
        }
        if(escolha == 1){
            conversorMetros();
        }
        if(escolha == 2){
            ConversorCelsiusFahrenheit();
        }

    } while (escolha != 0);

    printf("Obrigado por usar o conversor de unidades!\n");
    return 0;
}

void exibirMenu() {
    printf("\n======== Conversor de Unidades ===========\n");
    printf("1. Converter metros para quilometros\n");
    printf("2. Converter graus Celsius para Fahrenheit\n");
    printf("3. Converter quilogramas para libras\n");
    printf("4. Converter litros para mililitros\n");
    printf("0. Sair\n");
    printf("==========================================\n");
}

void ConversorCelsiusFahrenheit(){
    float temperaturaCelsius = 0.0, resultadoFahrenheit = 0.0;

    printf("\n\nInforme a temperura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    resultadoFahrenheit = 1.8*temperaturaCelsius + 32;

    printf("Resultado: %.2f C e igual a %.2f F\n", temperaturaCelsius, resultadoFahrenheit);
}

void conversorMetros() {
    float valor;
    int opcao;

    printf("Conversor de unidades de comprimento\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Metros\n");
    printf("2 - Centimetros\n");
    printf("3 - Milimetros\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 3) {
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: // De metros para outras unidades
                printf("%.2f metros equivalem a %.2f centimetros e %.2f milimetros.\n", 
                       valor, valor * 100, valor * 1000);
                break;
            case 2: // De centímetros para outras unidades
                printf("%.2f centímetros equivalem a %.2f metros e %.2f milimetros.\n", 
                       valor, valor / 100, valor * 10);
                break;
            case 3: // De milímetros para outras unidades
                printf("%.2f milímetros equivalem a %.2f metros e %.2f centimetros.\n", 
                       valor, valor / 1000, valor / 10);
                break;
        }
    } else {
        printf("Opcao invalida. Tente novamente.\n");
    }
}
