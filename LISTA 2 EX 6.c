#include <stdio.h>
#include <locale.h>
//6)Receba K n�meros positivos. Cada n�mero recebido dever� ser armazenado na vari�vel Num e a vari�vel K representa a quantidade de
//n�meros solicitada pelo usu�rio. Exiba a quantidade de m�ltiplos 7.quantidade de n�meros solicitada pelo usu�rio. Exiba a quantidade de m�ltiplos 7.

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
printf("Os numeros multiplos de sete no total s�o : %d \n",multiplodesete);

}
