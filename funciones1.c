/*Sumar dos numeros*/
#include <stdio.h>

int suma (int num1, int num2);

int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2;
    printf("Dime el primer valor: ");
    scanf("%d", &num1);
    printf("Dime otro numero: ");
    scanf("%d", &num2);
    printf("La suma de porcentaje de %d + %d es \n", num1, num2);
    printf("%d", suma(num1, num2));

    return 0;
}


/*Funcion*/
int suma(int num1, int num2){
    return num1 + num2;
}