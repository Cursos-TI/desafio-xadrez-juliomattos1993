#include <stdio.h>
int main(){

 const int MOV_BISPO = 5;
 const int MOV_TORRE = 5;
 const int MOV_RAINHA = 8;

 //BISPO - MOVIMENTO DIAGONAL SUPERIOR A DIREITA.
 printf("Movimentação do BISPO (diagonal superior direita):\n");

 // Usa estrutura FOR para mover o Bispo em diagonal (Cima + Direita)

 for (int i = 1; i <= MOV_BISPO;i++) {
    printf("Casa %d" , i);
    printf(" cima + direita \n");
 }

 printf("\n");

 //TORRE - MOVIMENTO PARA DIREITA .
 printf("movimento da TORRE ( direita )\n");

 // // Usa estrutura WHILE

 int j = 1;
 while (j <= MOV_TORRE){
     printf("Casa %d : Direita\n",j);
     j++;
 }
 
 printf("\n");

 //RAINHA - movimento para esquerda. 
 
 printf("movimento da RAINHA ( esquerda )\n");
 
 // Usa estrutura DO...WHILE

 int k =1;
 do
 { 
     printf("Casa %d : esquerda \n", k);
     k++;

    
 } while (k <= MOV_RAINHA);

 printf("\n");
   
   // CAVALO - MOVIMENTO EM 'L' baixo + esquerda. 

 printf("MOVIMENTACOES DO CAVALO ( em L baixo + esquerda) \n");
   
 const int MOV_BAIXO = 2; // 2 Casas para baixo
 const int MOV_ESQUERDA = 1; // 1 casa para esquerda

 // loop externo - movimento para baixo ( usa FOR )

  for (int linha = 1; linha <= MOV_BAIXO ; linha++){
          printf(" movimento %d para BAIXO\n", linha);
          
// loop interno - movimento para esquerda ( usa While)
    int coluna = 1;
    while (coluna <= MOV_ESQUERDA){
        printf("movimento %d para ESQUERDA\n", coluna);
        coluna++;

    }
    printf("n"); // separa visualemnte os movimentos.
    printf("movimentacao em L concluidas com sucesso !! \n");
    printf("MOVIMENTACOES CONCLUIDAS COM SUCESSO!!!!!\n");

    
  }






    return 0;
}