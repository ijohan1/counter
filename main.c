#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

int i = 0;
int j = 0;

while (j < 3){
  srand(time(NULL));
  
  int a = rand() % 100;
  int b = rand() % 100;

  
  int RealSum = a + b;
  
  int PlayerSum;
 
  printf("%d", a);
  printf(" + ");
  printf("%d", b);
  printf("= ");
 
  scanf("%d", &PlayerSum);


  if (PlayerSum == RealSum) {
    printf("correct!\n"); 
    i += 1;

  }
  
  else if (PlayerSum != RealSum) {
    printf("wrong!\n");         
    j += 1;
  }
  
  else if (scanf("%d", &PlayerSum) != 1 ){
    printf("NaN\n");
  } 
                          }
  if (j =3) {
    printf("3 wrong answers. bye!");
    printf("correct answers: %d", i);
    return 0;
  }
  
                            
  return 0;}
