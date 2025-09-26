#include <cstdio>

#include "MathFunc.cpp"

class Menu {
public:
    Menu() = default;
    ~Menu() = default;

    static void start() {
        int opcao_menu =0;
        bool loop = true;

        do {
            printf("\t#\tSelecione a opcao desejada.\n");
            printf("\t#\t[1] - Exponencial\n");
            printf("\t#\t[2] - Fatorial\n");
            printf("\t#\t[3] - Termial\n");
            printf("\t#\t[4] - Sair do programa.\n");
            scanf("%i", &opcao_menu);

            switch (opcao_menu) {
                case 1: {
                    menu_exponecial();
                    break;
                }
                case 2: {
                    menu_fatorial();
                    break;
                }
                case 3: {
                    menu_termial();
                    break;
                }
                case 4:{
                    loop=false;
                    break;
                }
                default:
                    if (opcao_menu<0 || opcao_menu>4)
                        printf("Opcao invalida.\n");
            }
            opcao_menu = 0;
        } while (loop);
    }

    static void menu_exponecial() {
        bool loop = true;
        int opcao_menu=0;
        int base=0;
        int exp=0;
        MathFunc math;

        do {
            printf("\t#\tExponencial\n");
            printf("\t#\t[1] - Funcao tradicional\n");
            printf("\t#\t[2] - Funcao recursiva\n");
            printf("\t#\t[3] - Retornar ao menu anterior\n");
            scanf("-> %i", &opcao_menu);

            switch (opcao_menu) {
                case 1: {
                    printf("Informe a base: ");
                    scanf("%d\n", &base);
                    printf("\nInforme o expoente: ");
                    scanf("%d\n", &exp);
                    math.exponencial_trad(base, exp);
                    break;
                }
                case 2: {
                    printf("Informe a base: ");
                    scanf("%d\n", &base);
                    printf("Informe o expoente: ");
                    scanf("%d\n", &exp);
                    printf("Resultado exponencial recursivo = %i\n", math.exponencial_recursivo(base, exp));
                    break;
                }
                case 3: {
                    loop=false;
                    break;
                }
                default:
                    if (opcao_menu<0 || opcao_menu>3)
                        printf("Opcao invalida.\n");
            }
            opcao_menu=0;
        } while (loop);
    }

    static void menu_fatorial() {
        bool loop=true;
        int opcao_menu=0;
        int numero=0;
        MathFunc math;

        do {
            printf("\t#\tFatorial\n");
            printf("\t#\t[1] - Funcao tradicional\n");
            printf("\t#\t[2] - Funcao recursiva\n");
            printf("\t#\t[3] - Retornar ao menu anterior\n");
            scanf("-> %i", &opcao_menu);

            switch (opcao_menu) {
                case 1: {
                    printf("Informe um numero: ");
                    scanf("%d\n", &numero);
                    math.fatorial_trad(numero);
                    break;
                }
                case 2: {
                    printf("Informe um numero: ");
                    scanf("%d\n", &numero);
                    printf("Resultado fatorial recursivo = %i\n", math.fatorial_recursivo(numero));
                    break;
                }
                case 3: {
                    loop=false;
                    break;
                }
                default:
                    if (opcao_menu<0 || opcao_menu>3)
                        printf("Opcao invalida.\n");
            }
            opcao_menu = 0;
        } while (loop);
    }

    static void menu_termial() {
        bool loop=true;
        int opcao_menu=0;
        int numero=0;
        MathFunc math;

        do {
            printf("\t#\tTermial\n");
            printf("\t#\t[1] - Funcao tradicional\n");
            printf("\t#\t[2] - Funcao recursiva\n");
            printf("\t#\t[3] - Retornar ao menu anterior\n");
            scanf("-> %i\n", &opcao_menu);

            switch (opcao_menu) {
                case 1: {
                    printf("Informe um numero: ");
                    scanf("%d\n", &numero);
                    math.termial_trad(numero);
                    break;
                }
                case 2: {
                    printf("Informe um numero: ");
                    scanf("%d\n", &numero);
                    printf("Resultado termial recursivo = %i\n", math.termial_recursivo(numero));
                    break;
                }
                case 3: {
                    loop=false;
                    break;
                }
                default:
                    if (opcao_menu<0 || opcao_menu>3)
                        printf("Opcao invalida.\n");
            }
            opcao_menu = 0;
        } while (loop);
    }
};