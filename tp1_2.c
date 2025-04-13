#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int Cuadrado(int num);//Considero que la variable es solo tipo entero
void CuadradoV(int num);//Considero que la variable es solo tipo entero
void ImpDireccionValor(int num); //Considero que la variable es solo tipo entero
void Invertir(int a, int b);//Considero que la variable es solo tipo entero
void orden(int a,int b);//Considero que la variable es solo tipo entero

int main()
{   
    int a,b,r;

    printf("Ingrese dos valores enteros \n");
    scanf("%i%i",&a,&b);

    r = Cuadrado(a);
    printf("El cuadrado de %i es: %i\n",a,r);

    CuadradoV(b);

    ImpDireccionValor(a);

    Invertir(a,b);

    orden(a,b);

    return 0;
}

int Cuadrado(int num){

    int resultado = num * num;

    return resultado;
}

void CuadradoV(int num){

    int resultado = num * num;

    printf("El cuadrado de %i es: %i\n",num, resultado);
}

void ImpDireccionValor(int num){
    printf("El valor de la variable es: %i\n",num);
    printf("La direccion de memoria de la variable es: %p\n", &num);
}

void Invertir(int a, int b){
    int c;

    c = b;

    b = a;

    a = c;

    printf("El valor de a es: %i\n", a);
    printf("El valor de b es: %i\n", b);
}

void orden(int a,int b){
    int c;

    if (a>b)
    { 
        Invertir(a,b);
    }

    printf("El menor es: %i\n",a);
    printf("El mayor es: %i\n",b);
}