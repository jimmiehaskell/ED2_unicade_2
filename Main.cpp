#include "MathFunc.cpp"

int main() {
    MathFunc math;
    int base = 2;
    int exp = 5;

    math.exponencial_trad(base, exp);
    printf("Resultado exponencial recursivo = %i\n", math.exponencial_recursivo(base, exp));
    math.termial_trad(5);
    printf("Resultado termial recursivo = %i\n", math.termial_recursivo(5));
    math.fatorial_trad(5);
    printf("Resultado fatorial recursivo = %i\n", math.fatorial_recursivo(5));

    return 0;
}