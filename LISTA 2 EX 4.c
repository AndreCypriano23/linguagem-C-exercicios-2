#include <stdio.h>

main(){
int K=0,X=0,cont=0,somapar=0,mediapar=0,somamcinco=0,mediamcinco=0;



do{
printf("Digite uma quantidade de numeros pares\n :");
scanf("%d",&K);
if(K<0)
printf("Digite um numero maior do que \n 0");
}while(K<0);


while(cont<K){
X=X+2;
cont++;
somapar=somapar+X;
if(X%5==0)
somamcinco=somamcinco+X;


printf("pares %d \n",X);
}
mediapar=somapar/K;
if(somamcinco>0)

mediamcinco=somamcinco/(K/5);


printf("soma par %d \n",somapar);
printf("media par %d \n",mediapar);
printf("soma multiplo de cinco %d \n",somamcinco);
printf("media multiplo de cinco %d \n",mediamcinco);

}


