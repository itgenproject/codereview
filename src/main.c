#include <stdio.h>

void main() {
  unsigned int N;
  scanf("%u", &N);
// аллоцируем память под матрицы	
  int **A = (int**)malloc(N * sizeof(int*));
  int **B = (int**)malloc(N * sizeof(int*));
  int **C = (int**)malloc(N * sizeof(int*));
  for (int i = 0; i < N; i++)
  {
    A[i] = (int*)malloc(N * sizeof(int));
    B[i] = (int*)malloc(N * sizeof(int));
    C[i] = (int*)malloc(N * sizeof(int));
  }

// заполняем матрицы

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      scanf("%d", &A[i][j]);
    }


  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      scanf("%d", &B[i][j]);
    }

// само умножение	
  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++)
    {
      C[i][j] = 0;
      for(int k = 0; k < N; k++) 
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
    
// выводим результат
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
      printf("%3d ", C[i][j]);
    printf("\n");
  }    
 
// высвобождение памяти
 
  for (int i = 0; i < N; i++)
  {
    free(A[i]);
    free(B[i]);
    free(C[i]);
  }
  free(A);
  free(B);
  free(C);

  return;
}
