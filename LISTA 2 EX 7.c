#include <stdio.h>
#include <locale.h>
//7)Receba via teclado um n�mero X, onde este n�mero representa a quantidade de termos que o usu�rio deseja. H representa cada um desses n�meros,
//calcule o produto dos X n�meros.
//OBS: H deve ser maior ou igual a 15.

main(){
int X,H=0,cont=0,produto=1;
setlocale(LC_ALL,"Portuguese");

do{
printf("Digite uma quantidade de X n�meros que vao ser maiores que 15 \n ");
scanf("%d",&X);
if(X<0)
printf("N�mero inv�lido, digite um n�mero maior que 0 \n");
}while(X<0);

while(cont<X){
do{
printf("Digite o valor do %d� n�mero: \n",cont+1);
scanf("%d",&H);

if(H<15)
 printf("Erro. Digite um numero maior que 15 \n");

else
cont++;
}while(H<15);
produto=produto*H;

}

printf("O produto dos n�meros digitados �: %d \n",produto);

}
