#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random number between 1 and 100
  int randomNumber = (rand() % 100) + 1;
  int no_of_guesses = 0;
  int guessed_number;
  // printf("Random number: %d\n", random_number);

  do
  {
    printf("Guess the number: ");
    scanf("%d", &guessed_number);
    if (guessed_number > randomNumber)
    {
      printf("lower number please!\n");
    }
    else if (guessed_number < randomNumber)
    {
      printf("Higher number please!\n");
    }
    else{
      printf("Congrats!!\n");
    }
    no_of_guesses++;
  } while (guessed_number != randomNumber);
  printf("You guessed the number in %d guesses", no_of_guesses);
  return 0;
}
