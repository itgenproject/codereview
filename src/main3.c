#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct human {
    char name[21];
    char family[21];
    int r;
};

void main() {
  int N, H, flag = 0, flag2 = 0;
  scanf("%d", &N);
  if ( N <= 0 ) {
    printf("n/a");
    flag = 0;
//    return;
  } else {
    struct human *HN = (struct human*)malloc(N * sizeof(struct human));
    
    for (int i = 0; i < N; ++i) {
      gets(HN[i].name);
      gets(HN[i].family);
      scanf("%d", &HN->r);
      if ( HN[i].r <= 0 ) {
        flag = 1;
      }
    }
    
    scanf("%d", &H);
    if ( flag == 0 ) {
      for (int i = 0; i < N; ++i) {
        if (HN[i].r >= H) {
          ++flag2;
          for (int j = 0; j < strlen(HN[i].name); ++j) {
            printf("%c", HN[i].name[j]);
          }
          printf(" ");
          for (int j = 0; j < strlen(HN[i].family); ++j) {
            printf("%c", HN[i].family[j]);
          }
          printf(", ");
        }
      }
      if ( flag2 == 0 ) {
        printf("Nothing");
      }
    }
    
    free(HN);
  }
  
}
