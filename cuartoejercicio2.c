#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1, num2, resultado1, resultado2; 

    printf("Bienvenido al cuarto ejercicio\n");
    printf("Por favor ingrese el primer numero:   \n");
    scanf("%i", &num1);

    resultado1 = num1 * num1 * num1 * num1; 
    printf("El resultado de elevar %d a la cuarta potencia es: %d\n", num1, resultado1); 

    printf("Por favor ingrese el segundo numero:   \n"); 
    scanf("%i", &num2);

    resultado2 = num2 * num2 * num2 * num2; 
    printf("El resultado de elevar %d a la cuarta potencia es: %d\n", num2, resultado2); 
    
    return 0;
}
