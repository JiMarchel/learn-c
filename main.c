#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess_number();

int main() {
  guess_number();
  return 0;
}

void guess_number() {
  const int MIN = 1;
  const int MAX = 10;
  int guess;
  int guesses = 0;
  int answer;

  srand(time(0));
  answer = (rand() % MAX) + MIN;

  do {
    printf("Enter a number between 1 - 10 : ");
    scanf("%d", &guess);
    if (guess > answer) {
      printf("Too high!!!\n");
    } else if (guess < answer) {
      printf("Too low!\n");
    } else {
      printf("********************\n");
      printf("CORRECT\n");
      printf("Answer : %d \n", answer);
      printf("Guesses : %d \n", guesses);
      printf("********************\n");
    }
    guesses++;
  } while (guess != answer);
}
