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
        
      
      printf("    A  B  C  D  E  F  G  H  I  J\n");
      
       for(i=0;i<10;i++) {
d1++;
    printf("\n%d.  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d",d, tabu[i][0],tabu[i][1],tabu[i][2],tabu[i][3],tabu[i][4],tabu[i][5],tabu[i][6],tabu[i][7],tabu[i][8],tabu[i][9]);
      
     
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

    return 0;
}
