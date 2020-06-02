#include  <stdio.h>

//8)Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
// A variável Peso armazena cada um do N pesos
//digitados. Calcule e mostre a média dos pesos digitados.

main(){
int N,PESO,cont=0,SOMA=0,MEDIA;

do{
printf("Digite uma quantidade de pesos de N pessoas: \n ");
scanf("%d",&N);
if(N<0)
printf("Digite um valor maior que 0 \n");
}while(N<0);

while(cont<N){
do{
PESO=0;
printf("Digite o peso da %d pessoa : \n",cont+1);
scanf("%d",&PESO);
if(PESO<=0)
printf("peso invalido \n");
else
cont++;
}while(PESO<0);
SOMA=SOMA+PESO;
MEDIA=SOMA/cont;

}
printf("A soma dos pesos digitados e : %d ",SOMA);
printf("A media dos pesos digitados e: %d ",MEDIA);

}
