#include <stdio.h>
// É usado quando se sabe quantas vezes o loop vai acontecer. 
// Neste exemplo 5 vezes.
// O programa vai pedir 5 numeros, vai somar e devolver o resultado.
int main(){
    int numero,soma,count;
    soma = 0;
    count = 5;
    for(int i = 0; i < count ; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&numero);
        soma = soma + numero;
    }

    printf("A soma de todos os numeros digitados e: %d\n",soma);
    return 0;
}