#include "MathFunc.cpp"


// Teste de recursão de cauda
int fatorial_cauda(int numero, int acumulador=1) {
    if (numero == 1)
        return acumulador;
    return fatorial_cauda(numero-1, numero*acumulador);
}


int main() {
    // MathFunc math;
    //
    // printf("%d", math.termial_recursivo2(7));

    printf("Recursividade de cauda: 15 = %d\n", fatorial_cauda(15));

    return 0;
}