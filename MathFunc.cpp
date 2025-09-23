#include <cstdio>

class MathFunc {
    public:
    MathFunc() = default;
    ~MathFunc() = default;

    void exponencial_trad(int base, int exp) {
        int result=1;
        for (int i=0; i<exp; i++)
            result*=base;
        printf("Resultado exponencial = %d\n", result);
    }

    int exponencial_recursivo(int base, int exp) {
        if (exp==0)
            return 1;
        return base * exponencial_recursivo(base, exp-1);
    }

    void termial_trad(int numero) {
        int result=0;
        for (int i=numero; i>0; i--)
            result += i;
        printf("Resultado termial = %d\n", result);
    }

    int termial_recursivo(int numero) {
        if (numero==0)
            return 0;
        return numero + termial_recursivo(numero - 1);
    }

    void fatorial_trad(int numero) {
        int result=1;
        for (int i=numero; i>0; i--)
            result *= i;
        printf("Resultado fatorial = %d\n", result);
    }

    int fatorial_recursivo(int numero) {
        if (numero==0)
            return 1;
        return numero * fatorial_recursivo(numero - 1);
    }
};