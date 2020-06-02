 #include <stdio.h>

main(){
//PRIMEIRO DECLAREI AS VARIÁVEIS
int K,NUM,cont=0,somanumeropar=0,somanumerozero=0;
//LAÇO DE REPETIÇÃO, SE FOR MENOR QUE 0 NAO CONTINUE
do{
printf("Digite uma quantidade de numeros : \n");
scanf("%d",&K);
if(K<=0)
printf("Digite um numero maior que 0 \n ");
}while(K<=0);

//ENQUANTO O CONTADOR FOR MENOR QUE O NUMERO DIGITADO PELO USUÁRIO EU VOU PRINTAR O NUMERO
//QUE ELE VAI TER QUE DIGITAR
//A VARIAVEL NUM VAI RECEBER E QUANDO O CONTADOR CHEGAR NO K O NUM VAI VIRAR 0 AÍ PARA O LOOPING
//ASSIM CADA K VAI RECEBER UM NUMERO
while(cont<K){
NUM=0;

printf(" Digite o %d numero \n",cont+1);
scanf("%d",&NUM);
cont++;
if(NUM%2==0 && NUM<0)
somanumeropar++;
else
if(NUM==0)
somanumerozero++;
}

printf("a quantidade de pares negativos e %d \n ",somanumeropar);
printf("a quantidade de numeros zero e %d \n ",somanumerozero);
}

