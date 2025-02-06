#include <stdio.h>

void moverrainha(int casas, int passo){
    if(casas <= 0){
        return;
    }
  printf("movendo para direita - casa %d\n", passo);
  moverrainha(casas - 1, passo + 1);

}


void movertorre(int casas, int passo){
    if(casas <= 0){
        return;
    }
  printf("movendo para direita - casa %d\n", passo);
  movertorre(casas - 1, passo + 1);

}


int main(){

int i = 1, j = 1, numero;
int movimentotorre = 5;
int movimentorainha = 8;

do{
printf("escolha qual peça deseja movimentar: \n");
printf("1. BISPO \n");
printf("2. TORRE \n");
printf("3. RAINHA \n");
printf("4. CAVALO \n");
printf("5. SAIR... \n");
printf("digite a opção:");
scanf("%d", &numero);


switch (numero)
{
case 1:
       
             printf("movimento do BISPO \n");
for(int i = 1; i <= 5; i++){
    printf("movendo para cima - casa %d\n", i);
} if(i = 5){

for(int j = 1; j <= 5; j++){
    printf("movendo para direita - casa %d\n", j);
   }
}

    break;
case 2:
         printf("movimento da TORRE \n");
    movertorre(movimentotorre, 1);

    break;
case 3:
       printf("movimento da RAINHA \n");
    moverrainha(movimentorainha, 1);

    break;
case 4: 
           printf("movimento do CAVALO \n");
for(int i = 1; i <= 5; i++){
    printf("movendo para cima - casa %d\n", i);
}printf("\n"); if(i = 5){

for(int j = 1; j <= 5; j++){
    printf("movendo horizontalmente - casa %d\n", j);
   }
}
    break;
case 5: 
    printf("saindo... \n");
    break;
default:
    printf("opção invalida \n");

}
}while (numero != 5);










    return 0;
}