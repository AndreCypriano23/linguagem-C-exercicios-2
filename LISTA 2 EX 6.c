#include <stdio.h>
#include <locale.h>
//6)Receba K números positivos. Cada número recebido deverá ser armazenado na variável Num e a variável K representa a quantidade de
//números solicitada pelo usuário. Exiba a quantidade de múltiplos 7.quantidade de números solicitada pelo usuário. Exiba a quantidade de múltiplos 7.

main(){
int K,NUM=0,cont=0,multiplodesete=0;
setlocale(LC_ALL, "Portuguese");

do{
printf("Digite uma quantidade K de numeros positivos \n");
scanf("%d",&K);
if(K<0)
printf("Digite um numero maior que 0 \n");
}while(K<0);

while(cont<K){
do{
printf("Digite o %d valor : ",cont+1);
scanf("%d",&NUM);

if(NUM<0)
   printf("erro \n");
else
  cont++;
}while(NUM<0);
if(NUM%7==0)
multiplodesete++;

}
printf("Os numeros multiplos de sete no total são : %d \n",multiplodesete);

}
