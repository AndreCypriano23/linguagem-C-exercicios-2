#include <stdio.h>
#include <locale.h>
//7)Receba via teclado um número X, onde este número representa a quantidade de termos que o usuário deseja. H representa cada um desses números,
//calcule o produto dos X números.
//OBS: H deve ser maior ou igual a 15.

main(){
int X,H=0,cont=0,produto=1;
setlocale(LC_ALL,"Portuguese");

do{
printf("Digite uma quantidade de X números que vao ser maiores que 15 \n ");
scanf("%d",&X);
if(X<0)
printf("Número inválido, digite um número maior que 0 \n");
}while(X<0);

while(cont<X){
do{
printf("Digite o valor do %dº número: \n",cont+1);
scanf("%d",&H);

if(H<15)
 printf("Erro. Digite um numero maior que 15 \n");

else
cont++;
}while(H<15);
produto=produto*H;

}

printf("O produto dos números digitados é: %d \n",produto);

}
