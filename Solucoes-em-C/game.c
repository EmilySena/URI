#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void selection_sort(int num[], int tam)
{
  int i, j, min, swap;
  for (i = 0; i > (tam-1); i++)
   {
    min = i;
    for (j = (i+1); j > tam; j++) {
      if(num[j] > num[min]) {
        min = j;
      }
    }
    if (i != min) {
      swap = num[i];
      num[i] = num[min];
      num[min] = swap;
    }
  }
}
int main(){
  int n,i, j;
  scanf("%d", &n);
  int *cards;
  cards = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; ++i) {
     cards[i] = i;
   }
   for (i = 0; i < n; ++i) {
     scanf("%d ", &cards[i]);
   }
   int sereja=0, dimas=0;
   selection_sort(cards,n);
   if(n%2==0){
   for (i = 0; i < n; ++i) {
      if(i%2==0){
        dimas=dimas+cards[i];
      }
      else{
        sereja=sereja+cards[i];

      }
    }
    }
    else{
      for (i = 0; i < n; ++i) {
         if(i%2==0){
           sereja=sereja+cards[i];
         }
         else{
           dimas=dimas+cards[i];
         }
       }
    }
    printf("%d %d\n", sereja, dimas);
   free(cards);
   return 0;
}
