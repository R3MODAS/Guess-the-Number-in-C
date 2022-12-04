#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
  int guess,choice,nguesses=1;
  srand(time(0));
  guess = rand() % 100 + 1;
  do{
    printf("Guess the number between 1 to 100 : ");
    scanf("%d",&choice);

    if(choice>guess){
      printf("Lower number please\n");
    }
    else if(choice<guess){
      printf("Higher number please\n");
    }
    else{
      printf("Yay!! you have guessed the correct number in %d attempts\n",nguesses);
    }
    nguesses++;
  }while(choice != guess);
  printf("Your score is %d\n",100-nguesses+1);
  return 0;
}