#include<stdio.h>

main(){

int matriz[3][5];

  for(int i = 0; i < 3; i ++){
      for( int j = 0; j < 5; j++){
          printf("gigite os valores na matriz [%d][%d]: ", i,j);
          scanf("%d", &matriz[i][j]);

   }
    printf("\n");


  }

  for(int i = 0; i < 3; i ++){
      for( int j = 0; j < 5; j++){
         printf("valores da matriz [%d][%d]: = %d\n", i, j, matriz[i][j]);
            

   }
    printf("\n");


}

}