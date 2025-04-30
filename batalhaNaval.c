#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.




    //int i;
int d=0 , d1=0;
    //int m[10][10] = {
       // {  0  ,0  ,0  ,0  ,7  ,7  ,7  ,0  ,0  ,0  },
    //    {  0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },
      //  {  0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },
        //{  0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },
//        {  0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },
  //      {  0  ,0  ,0  ,0  ,0  ,0  ,7  ,0  ,0  ,0  },
    //    {  0  ,0  ,0  ,0  ,0  ,0  ,7  ,0  ,0  ,0  },
      //  {  0  ,0  ,0  ,0  ,0  ,0  ,7  ,0  ,0  ,0  },
        //{  0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },
        //{  0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },
   // };
//printf("    A  B  C  D  E  F  G  H  I  J");
// for(i=0;i<10;i++) {
//d++;
    //printf("\n%d.  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d",d, m[i][0],m[i][1],m[i][2],m[i][3],m[i][4],m[i][5],m[i][6],m[i][7],m[i][8],m[i][9]);
//}








    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


    #define g 10
    int coluna, i;
      int tabu [g][g];
      
        for(int i=0;i<g;i++){
            for( coluna=0;coluna<g;coluna++){  tabu [i][coluna]=d;
            }
      }
      int i1=0, c1=4 ;
      
      
        
      for(int coluna=0;coluna<3;coluna++){tabu [9] [coluna+1]=3;}
      for(int i=0;i<3;i++){tabu [i+1] [4]=3;}
     
      for(int i=0;i<3;i++){tabu [i+i1] [i+i1]=3;} 
      for(int i=0;i<3;i++){tabu [1+i] [9-i]=3;}
        
      int j;
      printf("    A  B  C  D  E  F  G  H  I  J\n");
      
       for(i=0;i<10;i++) {
d1++; printf("%d.",d1);
for(j=0;j<10;j++){
    printf("  %d", tabu[i][j]);
}
     printf("\n");
      }
  
    








    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    #define pp 10
    int coluna2, ii;
      int tabu2 [g][g];
      
        for(int ii=0;ii<pp;ii++){
            for( coluna2=0;coluna2<pp;coluna2++){  tabu2 [ii][coluna2]=d;
            }
      }
      int i2=0, c2=4 , d2=0;
      
      
        //cruz
      for(int coluna2=0;coluna2<5;coluna2++){tabu2 [7] [coluna2+1]=1;}
      for(int ii=0;ii<3;ii++){tabu2 [ii+5] [coluna2+3]=1;}
     //octaedro
     for(int ii=0;ii<3;ii++){tabu2 [ii+4] [coluna2+8]=1;}
     for(int coluna2=0;coluna2<3;coluna2++){tabu2 [6] [coluna2+7]=1;}
//cone
for(int coluna2=0;coluna2<1;coluna2++){tabu2 [1] [coluna2+6]=1;}
for(int coluna2=0;coluna2<3;coluna2++){tabu2 [2] [coluna2+5]=1;}
for(int coluna2=0;coluna2<5;coluna2++){tabu2 [3] [coluna2+4]=1;}
      

    
        
      int j2 ;
      printf("\n tabuleiro 2\n");
      printf("    A  B  C  D  E  F  G  H  I  J\n");
      
       for(ii=0;ii<10;ii++) {
d2++; printf("%d.",d2);
for(j2=0;j2<10;j2++){
    printf("  %d", tabu2[ii][j2]);
}
     printf("\n");
      }





    return 0;
}
