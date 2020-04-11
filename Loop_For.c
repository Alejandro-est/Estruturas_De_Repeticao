#include <stdio.h>
// É usado quando eu quero inserir a quantidade de vezes que eu quero que o loop aconteça

int main (){
    int numero, soma, count;
    soma=0;
    printf("Quantas vezes voce quer que o loop aconteca? \n");
    scanf("%d",&count);
    for(int i = 0; i < count; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&numero);
        soma = soma + numero;
    }

    printf("A soma de todos os numeros digitados e: %d\n",soma);
    return 0;
}