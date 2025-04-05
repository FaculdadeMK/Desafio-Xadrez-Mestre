#include <stdio.h>

// Recursividade para o movimento da Torre.

void MoverTorre(int torre){
     if (torre > 0){
     printf("Direita\n");
     MoverTorre(torre - 1);
     }
}

// Recursividade para o movimento da Rainha.

void MoverRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        MoverRainha(rainha - 1);
        }
}

// Recursividade para o movimento do Bispo.

void MoverBispo(int bispo){
   while(bispo > 0){
      bispo--;
      for (int i = bispo; i > 0;i--){
       int para = 0;
       printf("Cima");
       printf(",Direita\n");
       para++;
       if(para = bispo) break;
      }
   }  
   
}
   

int main(){
   int cavalo;
   int escolha1;
   int escolha2;
   int direcao;
   int movimento;
   int direcao2;

   //Entrada para a escolha do usuario.

   printf("Qual Peça Você ira mover? \n");
   printf("1.Rainha \n");
   printf("2.Torre \n");
   printf("3.Bispo \n");
   printf("4.Cavalo \n");
   scanf("%d", &escolha1);

   //Entrada para a escolha de quantas casas a peça irá se mover.
   if (escolha1 <= 3){
   printf("Quantas Casas? \n");
   scanf("%d", &escolha2);
   }

   //Switch Responsavel por Executar a escolha do usuario.

   switch(escolha1){
    case 1:
    printf("\nMovimento da Rainha: \n");
    MoverRainha(escolha2);

    break;

    case 2:
    printf("\nMovimento da Torre: \n");
    MoverTorre(escolha2);

    break;

    case 3:
    printf("Movimento do Bispo: \n");
    int bispo;
    MoverBispo(bispo = escolha2 + 1);

    break;

    default:
    if (escolha1 > 4){
    printf("Opção Invalida!");
    }
    break;
}


 //Switch para a escolha de movimentação do Cavalo.

  switch (escolha1){

   case 4:

   printf("Em que direção deseja mover o Cavalo ira se mover: \n");
   printf("1.Direita\n");
   printf("2.Esquerda\n");
   scanf("%d", &movimento);

    printf("Para Baixo ou Para Cima: \n");
    printf("1.Cima\n");
    printf("2.Baixo\n");
    scanf("%d", &direcao2);

switch(direcao2){

    case 1:
    printf("Movimento Do Cavalo: \n");
    while(cavalo < 2){
     cavalo++;
 
    }
     for (int i = 0; i < 2; i++){
      
      printf("Cima\n");

     }
      break;

     case 2:
   printf("Movimento Do Cavalo: \n");
    while(cavalo < 2){cavalo++;
 
   }
   for (int i = 0; i < 2; i++){
  
    printf("Baixo\n");

   }

}

   switch(movimento){

      case 1:
      
      printf("Direita\n");
      
      break;
      
      case 2:
      
      printf("Esquerda\n");
      
      break;
           
}

}

}
