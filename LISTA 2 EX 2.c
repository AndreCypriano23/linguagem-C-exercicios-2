#define ex2
#include <stdio.h>
// EXERCÍCIO 2 DA LISTA 2
#ifdef ex1
//LETRA A
main(){
int K,NUM,NUM2;
NUM = 0;
NUM2 = 0;


do{
printf("Digite um numero \n");
scanf("%d",&K);
if(K<0)
printf("Digite um numero maior que 0 \n");
}while(K<0);

for(int i = 0 ; i<K ; i++){
NUM=NUM+2;
NUM2=NUM2+5;
printf("%d / %d \n",NUM,NUM2);
}
}
#endif


#ifdef ex2
// LETRA B
main(){
int K,cont,i,X,KQUAD;
cont=0;
i=0;
K=0;
KQUAD=0;

do{
    printf("Digite um numero ");
    scanf("%d",&X);
    if(X<0)
        printf("Digite um numero maior que 0");
}while(X<0);

while(cont<X){
    K=K+2;
    KQUAD=K*K;
    i=i+8;
    cont++;
    if(KQUAD % i == 0){
        printf("%d \n",KQUAD/i);
    }else{
        printf("%d / %d \n",KQUAD,i);
    }
}
}
#endif
