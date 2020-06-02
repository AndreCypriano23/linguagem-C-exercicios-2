#include <stdio.h>
main(){
//3)	Receba a quantidade de idades de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário. A variável Idade
// armazena cada uma das K idades digitadas. Calcule e mostre a somatória dessas idades.
int K,idade,cont=0,SOMA=0;

do{
printf("Digite um numero determinado de individuos :\n ");
scanf("%d",&K);
if(K<0)
printf("Digite um numero maior do que 0");
}while(K<0);


while(cont<K){
idade=-1;
while(idade<0){
printf(" Digite a idade da %d pessoa \n",cont+1);
scanf("%d",&idade);}
SOMA+=idade;
cont++;
}
printf("A somatoria das idades e %d",SOMA);


}
