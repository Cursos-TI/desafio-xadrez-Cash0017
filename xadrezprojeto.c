#include <stdio.h>
int main(){

int i, numero;

do{
printf("escolha quais peças deseja movimentar: \n");
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
     printf("movimento do bispo: \n");
for(int i = 1; i <= 5; i++){
    printf("diagonal superior direita - casa %d\n", i);

}
    break;
case 2:
         printf("movimento da TORRE \n");
for(int i = 1; i <= 5; i++){
    printf("movendo para direita - casa %d\n", i);

}

    break;
case 3:
           printf("movimento da RAINHA: \n");
for(int i = 1; i <= 5; i++){
    printf("movendo para esquerda - casa %d\n", i);

}
    
    break;
case 4: 
          printf("movimento do CAVALO: \n");
    for(int i = 1; i <= 5; i++){
     printf("movendo verticalmante - casa %d\n", i);   
        for(int j = 1; j <= 1; j++){
             printf("movendo horizontalmente - casa %d\n", i);  
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