#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  const int RANDGEN_MINIMUM = 0;
  const int RANDGEN_MAXIMUM = 2;
  // doin meth for rands
  srand(time(NULL));
  int randGen = rand() % (RANDGEN_MAXIMUM - RANDGEN_MINIMUM + 1) + RANDGEN_MINIMUM;
  int usrChoice;
  
  printf("Rock, Paper, Scissors! Shoot! (0 > rock; 1 > paper; 2 > scissors)\n");
  if (scanf("%d", &usrChoice) == 1 && usrChoice == 0 || 1 || 2) {
  } else {
    printf("Invalid data detected!");
    return 1;
  }

  // conditions
  if (usrChoice == randGen) {
    printf("Tie!\n");
  
  } else if (usrChoice == 0 && randGen == 1) {
    printf("You lose! (Rock : Paper)\n");
  
  } else if (usrChoice == 0 && randGen == 2) {
    printf("You win! (Rock : Scissors)\n");
  
  } else if (usrChoice == 1 && randGen == 0) {
    printf("You win! (Paper : Rock)\n");
  
  } else if (usrChoice == 1 && randGen == 2) {
    printf("You lose! (Paper : Scissors)\n");
  
  } else if (usrChoice == 2 && randGen == 0) {
    printf("You lose! (Scissors : Rock)\n");
  
  } else if (usrChoice == 2 && randGen == 1) {
    printf("You win! (Scissors : Paper)\n");
  
  }

  return 0;
}
