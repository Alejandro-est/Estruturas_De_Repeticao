#include <stdio.h>
// O usuario vai digitar um numero que o programa irá armazenar até o usuario digitar 0.
// Ou seja eu nao sei quantas vezes o loop vai acontecer 
// por último o programa vai mostrar a soma de todos os numeros digitados. 

int main(){
    int numero,soma;
    numero = -1;
    soma = 0;
    while(numero!=0){
        printf("Digite um numero: ");
        scanf("%d",&numero);
        soma = soma + numero;
    }

    printf("A soma de todos os numero digitados e: %d",soma);
    return 0;
}
