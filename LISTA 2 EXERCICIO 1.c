#define ex1
#include <stdio.h>
//LISTA 2 EXERCÍCIO 1
#ifdef ex1
//LETRA A
main(){
int K=0,NUM=0;

do{
printf("Digite uma quantidade maior que 0 \n");
scanf("%d",&K);
if(K<=0)
printf("Digite um numero maior que 0 \n");
}while(K<=0);

for(int cont=0;cont<K;cont++){
NUM=NUM+3;
printf("%d \n",NUM);
}
}

#endif

#ifdef ex2
//LETRA B
main(){
int K,NUM=0;

do{
printf("Digite uma quantidade maior que 0 \n");
scanf("%d",&K);
if(K<=0)
printf("Digite um numero maior que 0 \n");
}while(K<=0);

for(int cont=0;cont<K;cont++){
NUM=NUM+4;
printf(" 1 / %d \n",NUM);
}

system("pause");
}
#endif
