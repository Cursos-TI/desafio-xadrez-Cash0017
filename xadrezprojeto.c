#include <stdio.h>



void movertorre(int casas, int passo){
    if(casas <= 0){
        return;
    }
  printf("movendo para direita - casa %d\n", passo);
  movertorre(casas - 1, passo + 1);

}


int main(){

int i, numero;
int movimentobispo = 5;
int movimentotorre = 5;

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
      printf("movimento da TORRE \n");
     for(int i = 1; i <= 5; i++){
        printf("movendo horizontalmente - casa %d\n", j);
     }if(i = 5){
        for(int j = 1; j <= 5; j++){
        printf("movendo verticalmente - casa %d\n", j);
        }
    }

    break;
case 2:
         printf("movimento da TORRE \n");
    movertorre(movimentotorre, 1);

    break;
case 3:
           printf("movimento da RAINHA: \n");
for(int i = 1; i <= 5; i++){
    printf("movendo para esquerda - casa %d\n", i);
}
    
    break;
case 4: 
           printf("movimento do CAVALO \n");
for(int i = 1; i <= 5; i++){
    printf("movendo verticalmente - casa %d\n", i);
}if(i = 5){

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